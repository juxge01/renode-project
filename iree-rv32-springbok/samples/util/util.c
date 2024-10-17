/*
 * Copyright 2022 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// An example based on iree/samples/simple_embedding.

#include "samples/util/util.h"

#include <springbok.h>

#include "iree/modules/hal/inline/module.h"
#include "iree/modules/hal/loader/module.h"
#include "samples/device/device.h"

typedef struct
{
  uint32_t return_code; // Populated in crt0.S
  uint32_t epc;         // Populated in crt0.S
  uint32_t length;
} OutputHeader;

OutputHeader output_header;

extern const MlModel kModel;

// Create context that will hold the module state across invocations.
static iree_status_t create_context(iree_vm_instance_t *instance,
                                    iree_hal_device_t **device,
                                    iree_vm_context_t **context)
{
  iree_allocator_t host_allocator = iree_allocator_system();
  iree_status_t result = iree_vm_instance_create(host_allocator, &instance);

#if defined(BUILD_INLINE_HAL)
  IREE_RETURN_IF_ERROR(iree_hal_module_register_inline_types(instance));
#elif defined(BUILD_LOADER_HAL)
  IREE_RETURN_IF_ERROR(iree_hal_module_register_loader_types(instance));
#else
  IREE_RETURN_IF_ERROR(iree_hal_module_register_all_types(instance));
#endif

  iree_hal_executable_loader_t *loader = NULL;
  if (iree_status_is_ok(result))
  {
    result = create_sample_device(host_allocator, device, &loader);
  }

  // Load bytecode or C module.
  iree_vm_module_t *module = NULL;
  if (iree_status_is_ok(result))
  {
    result = create_module(instance, &module);
  }

#if defined(BUILD_INLINE_HAL) || defined(BUILD_LOADER_HAL)
  // Create hal_inline_module
  iree_vm_module_t *hal_inline_module = NULL;
  if (iree_status_is_ok(result))
  {
    result = iree_hal_inline_module_create(
        instance, IREE_HAL_INLINE_MODULE_FLAG_NONE,
        iree_hal_device_allocator(*device), host_allocator, &hal_inline_module);
  }
#endif
#if defined(BUILD_INLINE_HAL)
  iree_vm_module_t *modules[] = {hal_inline_module, module};
#elif defined(BUILD_LOADER_HAL)
  // Create hal_loader_module
  iree_vm_module_t *hal_loader_module = NULL;
  if (iree_status_is_ok(result))
  {
    result = iree_hal_loader_module_create(instance, IREE_HAL_MODULE_FLAG_NONE,
                                            /*loader_count=*/1, &loader,
                                            host_allocator, &hal_loader_module);
  }
  iree_vm_module_t *modules[] = {hal_inline_module, hal_loader_module, module};
#else
  // Create hal_module
  iree_vm_module_t *hal_module = NULL;
  if (iree_status_is_ok(result))
  {
    result =
        iree_hal_module_create(instance, *device, IREE_HAL_MODULE_FLAG_NONE,
                                host_allocator, &hal_module);
  }
  iree_vm_module_t *modules[] = {hal_module, module};
#endif
  iree_hal_executable_loader_release(loader);

  // Allocate a context that will hold the module state across invocations.
  if (iree_status_is_ok(result))
  {
    result = iree_vm_context_create_with_modules(
        instance, IREE_VM_CONTEXT_FLAG_NONE, IREE_ARRAYSIZE(modules),
        &modules[0], host_allocator, context);
  }
#if defined(BUILD_INLINE_HAL) || defined(BUILD_LOADER_HAL)
  iree_vm_module_release(hal_inline_module);
#else
  iree_vm_module_release(hal_module);
#endif
#if defined(BUILD_LOADER_HAL)
  iree_vm_module_release(hal_loader_module);
#endif
  iree_vm_module_release(module);
  return result;
}

// Prepare the input buffers and buffer_views based on the data type. They must
// be released by the caller.
static iree_status_t prepare_input_hal_buffer_views(
    const MlModel *model, iree_hal_device_t *device, void **arg_buffers,
    iree_hal_buffer_view_t **arg_buffer_views)
{
  iree_status_t result = iree_ok_status();

  // Prepare the input buffer, and populate the initial value.
  // The input buffer must be released by the caller.
  iree_const_byte_span_t *byte_span[MAX_MODEL_INPUT_NUM] = {NULL};
  result = load_input_data(model, arg_buffers, byte_span);

  // Wrap buffers in shaped buffer views.
  // The buffers can be mapped on the CPU and that can also be used
  // on the device. Not all devices support this, but the ones we have now do.

  iree_hal_buffer_params_t buffer_params = {
      .type =
          IREE_HAL_MEMORY_TYPE_HOST_LOCAL | IREE_HAL_MEMORY_TYPE_DEVICE_VISIBLE,
      .access = IREE_HAL_MEMORY_ACCESS_READ,
      .usage = IREE_HAL_BUFFER_USAGE_DEFAULT};
  for (int i = 0; i < model->num_input; ++i)
  {
    if (iree_status_is_ok(result))
    {
      result = iree_hal_buffer_view_allocate_buffer(
          iree_hal_device_allocator(device), model->num_input_dim[i],
          model->input_shape[i], model->hal_element_type,
          IREE_HAL_ENCODING_TYPE_DENSE_ROW_MAJOR, buffer_params, *byte_span[i],
          &(arg_buffer_views[i]));
    }
    if (byte_span[i] != NULL)
    {
      free(byte_span[i]);
    }
  }
  return result;
}

iree_status_t run(const MlModel *model)
{
  iree_vm_instance_t *instance = NULL;
  iree_hal_device_t *device = NULL;
  iree_vm_context_t *context = NULL;
  // create context
  iree_status_t result = create_context(instance, &device, &context);

  // Lookup the entry point function.
  // Note that we use the synchronous variant which operates on pure type/shape
  // erased buffers.
  iree_vm_function_t main_function;
  if (iree_status_is_ok(result))
  {
    result = (iree_vm_context_resolve_function(
        context, iree_make_cstring_view(model->entry_func), &main_function));
  }

  // Prepare the input buffers.
  void *arg_buffers[MAX_MODEL_INPUT_NUM] = {NULL};
  iree_hal_buffer_view_t *arg_buffer_views[MAX_MODEL_INPUT_NUM] = {NULL};
  if (iree_status_is_ok(result))
  {
    result = prepare_input_hal_buffer_views(model, device, arg_buffers,
                                            arg_buffer_views);
  }

  // Setup call inputs with our buffers.
  iree_vm_list_t *inputs = NULL;
  if (iree_status_is_ok(result))
  {
    result = iree_vm_list_create(
        /*element_type=*/NULL, /*capacity=*/model->num_input,
        iree_allocator_system(), &inputs);
  }
  iree_vm_ref_t arg_buffer_view_ref;
  for (int i = 0; i < model->num_input; ++i)
  {
    arg_buffer_view_ref = iree_hal_buffer_view_move_ref(arg_buffer_views[i]);
    if (iree_status_is_ok(result))
    {
      result = iree_vm_list_push_ref_move(inputs, &arg_buffer_view_ref);
    }
  }

  // Prepare outputs list to accept the results from the invocation.
  // The output vm list is allocated statically.
  iree_vm_list_t *outputs = NULL;
  if (iree_status_is_ok(result))
  {
    result = iree_vm_list_create(
        /*element_type=*/NULL,
        /*capacity=*/1, iree_allocator_system(), &outputs);
  }

  // Invoke the function.
  if (iree_status_is_ok(result))
  {
    result = iree_vm_invoke(context, main_function, IREE_VM_CONTEXT_FLAG_NONE,
                            /*policy=*/NULL, inputs, outputs,
                            iree_allocator_system());
  }

  // Validate output and gather buffers.
  iree_hal_buffer_mapping_t mapped_memories[MAX_MODEL_OUTPUTS] = {{0}};
  for (int index_output = 0; index_output < model->num_output; index_output++)
  {
    iree_hal_buffer_view_t *ret_buffer_view = NULL;
    if (iree_status_is_ok(result))
    {
      // Get the result buffers from the invocation.
      ret_buffer_view = (iree_hal_buffer_view_t *)iree_vm_list_get_ref_deref(
          outputs, index_output, iree_hal_buffer_view_get_descriptor());
      if (ret_buffer_view == NULL)
      {
        result = iree_make_status(IREE_STATUS_NOT_FOUND,
                                  "can't find return buffer view");
      }
    }
    if (iree_status_is_ok(result))
    {
      result = iree_hal_buffer_map_range(
          iree_hal_buffer_view_buffer(ret_buffer_view),
          IREE_HAL_MAPPING_MODE_SCOPED, IREE_HAL_MEMORY_ACCESS_READ, 0,
          IREE_WHOLE_BUFFER, &mapped_memories[index_output]);
    }

    if (iree_status_is_ok(result))
    {
      if (index_output > model->num_output ||
          mapped_memories[index_output].contents.data_length /
                  model->output_size_bytes !=
              model->output_length[index_output])
      {
        result =
            iree_make_status(IREE_STATUS_UNKNOWN, "output length mismatches");
      }
    }
  }

  // Post-process memory into model output.
  if (iree_status_is_ok(result))
  {
    uint32_t length = 0;
    result = process_output(model, mapped_memories, &length);
    output_header.length = length;
  }

  for (int index_output = 0; index_output < model->num_output; index_output++)
  {
    if (mapped_memories[index_output].contents.data != NULL)
    {
      iree_hal_buffer_unmap_range(&mapped_memories[index_output]);
    }
  }
  iree_vm_list_release(inputs);
  iree_vm_list_release(outputs);
  for (int i = 0; i < model->num_input; ++i)
  {
    if (arg_buffers[i] != NULL)
    {
      free(arg_buffers[i]);
    }
  }
  iree_vm_context_release(context);
  IREE_IGNORE_ERROR(iree_hal_allocator_statistics_fprint(
      stdout, iree_hal_device_allocator(device)));
  iree_hal_device_release(device);
  iree_vm_instance_release(instance);
  return result;
}

// ==============================================================================
//                              ControlBlock
// ==============================================================================
static __always_inline uint32_t read_mac_out(void)
{
  uint32_t mac_out;
  __asm__ volatile(
    // read_mac_out a0 # "------------0000 0100 [ rd ] [rd]111 1011"
      ".word 0x0000477b\n" // custom-3, fucnt3 = 4. 
      : "=r"(mac_out));
  return mac_out;
}
// ==============================================================================

// ==============================================================================
//                          Custom Function Unit
// ==============================================================================
static __always_inline uint32_t cfu_op(uint32_t funct)
{
  uint32_t result;
  // LOG_INFO("CFU operation started. funct = %u", funct);

  switch (funct)
  {
    case 0: // READ
      __asm__ volatile(
        ".word 0x0084868b\n" // op0
        : "=r"(result)
      );
      LOG_INFO("READ operation finished. Result = %u", result);
      break;

    case 1: // WRITE
      __asm__ volatile(
        ".word 0x0084968b\n" // op1
        : "=r"(result)
      );
      LOG_INFO("WRITE operation finished. Result = %u", result);
      break;

    case 2: // MAC Calculation
      __asm__ volatile(
        ".word 0x0084a68b\n" // op2
        : "=r"(result)
      );
      LOG_INFO("MAC operation finished. Result = %u", result);
      break;

    //// Fixed Test
    case 3: // fixed test - READ
      __asm__ volatile(
        ".word 0x00c4068b\n" // op0
        : "=r"(result)
      );
      LOG_INFO("case 3: fixed operation finished. Result = %u", result);
      break;

    case 4: // fixed test - WRITE
      __asm__ volatile(
        ".word 0x00c4170b\n" // op1
        : "=r"(result)
      );
      LOG_INFO("case 4: fixed operation finished. Result = %u", result);
      break;

    case 5: // fixed test - MAC Calculation
      __asm__ volatile(
        ".word 0x00c4278b\n" // op2
        : "=r"(result)
      );
      LOG_INFO("case 5: fixed operation finished. Result = %u", result);
      break;
    ////

    //// Compare Test
    case 6: // compare test - READ
      __asm__ volatile(
        ".word 0x01b4098b\n" // op0
        : "=r"(result)
      );
      LOG_INFO("case 6: compare operation finished. Result = %u", result);
      break;

    case 7: // compare test - WRITE
      __asm__ volatile(
        ".word 0x01b41a0b\n" // op1
        : "=r"(result)
      );
      LOG_INFO("case 7: compare operation finished. Result = %u", result);
      break;

    case 8: // compare test - MAC Calculation
      __asm__ volatile(
        ".word 0x0b42a8b\n" // op2
        : "=r"(result)
      );
      LOG_INFO("case 8: compare operation finished. Result = %u", result);
      break;
    // 
    
    // do_interactive_tests
    // 0x0094580b : Write
    // 0x0094480b : Read
    case 9: // interactive test - Read
      __asm__ volatile(
        ".word 0x0094480b\n" // op2
        : "=r"(result)
      );
      LOG_INFO("case 9: interactive operation finished. Result = %u", result);
      break;

    case 10: // interactive test - Write
      __asm__ volatile(
        ".word 0x0094580b\n" // op2
        : "=r"(result)
      );
      LOG_INFO("case 10: interactive operation finished. Result = %u", result);
      break;

    case 11: // interactive test - Write
      __asm__ volatile(
        ".word 0x0094680b\n" // op2
        : "=r"(result)
      );
      LOG_INFO("case 11: interactive operation finished. Result = %u", result);
      break;
    ////

    default:
      result = 0;
      LOG_INFO("Invalid funct value: %u", funct);
      break;
  }
  // LOG_INFO("CFU operation ended.");

  return result;
}
// ==============================================================================

int main()
{
  const MlModel *model_ptr = &kModel;
  LOG_INFO("Hello DGIST, Hello Semibrain");

  /////
  // uint32_t mac_out_controlblock = read_mac_out();
  // LOG_INFO("ControlBlock >> MAC_OUT value: %u", mac_out_controlblock);
  
  LOG_INFO("CFU Hello ~");

  int repeat_count = 5;
  // int repeat_count_time = 10;

  // Test 1 
  for (int i = 0; i < repeat_count; i++) {
    uint32_t write_cfu_0 = cfu_op(1); // funct = 1 (WRITE)
    LOG_INFO("WRITE iteration %d: %u", i, write_cfu_0);
  }

  for (int i = 0; i < repeat_count; i++) {
    uint32_t read_cfu_0 = cfu_op(0); // funct = 0 (READ)
    LOG_INFO("READ iteration %d: %u", i, read_cfu_0);
  }

  for (int i = 0; i < repeat_count; i++) {
    uint32_t mac_cfu_0 = cfu_op(2); // funct = 2 (MAC Calculation)
    LOG_INFO("MAC Calculation iteration %d: %u", i, mac_cfu_0);
  }

  // for (int i = 0; i < repeat_count; i++) {
  //   uint32_t write_cfu_0 = cfu_op(1); // funct = 1 (WRITE)
  //   LOG_INFO("WRITE iteration %d: %u", i, write_cfu_0);

  //   uint32_t read_cfu_0 = cfu_op(0); // funct = 0 (READ)
  //   LOG_INFO("READ iteration %d: %u", i, read_cfu_0);

  //   uint32_t mac_cfu_0 = cfu_op(2); // funct = 2 (MAC Calculation)
  //   LOG_INFO("MAC Calculation iteration %d: %u", i, mac_cfu_0);
  // }

  // Test 2
  // for (int i = 0; i < repeat_count; i++) {
  //   uint32_t cfu_1 = cfu_op(4); // funct = 2 (Write)
  //   LOG_INFO("cfu_1: %u", cfu_1);
  // }
  // for (int i = 0; i < repeat_count; i++) {
  //   uint32_t cfu_0 = cfu_op(3); // funct = 2 (Read)
  //   LOG_INFO("cfu_0: %u", cfu_0);
  // }
  // for (int i = 0; i < repeat_count; i++) {
  //   uint32_t cfu_2 = cfu_op(5); // funct = 2 (MAC Calculation)
  //   LOG_INFO("cfu_2: %u", cfu_2);
  // }

  // for (int i = 0; i < repeat_count; i++) {
  //   uint32_t cfu_0 = cfu_op(3); // funct = 2 (MAC Calculation)
  //   LOG_INFO("cfu_0: %u", cfu_0);
    
  //   uint32_t cfu_1 = cfu_op(4); // funct = 2 (MAC Calculation)
  //   LOG_INFO("cfu_1: %u", cfu_1);
    
  //   uint32_t cfu_2 = cfu_op(5); // funct = 2 (MAC Calculation)
  //   LOG_INFO("cfu_2: %u", cfu_2);
  // }

  // Test 3
  // for (int i = 0; i < repeat_count; i++) {
  //   uint32_t cfu_3 = cfu_op(6); // funct = 2 (MAC Calculation)
  //   LOG_INFO("cfu_3: %u", cfu_3);
    
  //   uint32_t cfu_4 = cfu_op(7); // funct = 2 (MAC Calculation)
  //   LOG_INFO("cfu_4: %u", cfu_4);
    
  //   uint32_t cfu_5 = cfu_op(8); // funct = 2 (MAC Calculation)
  //   LOG_INFO("cfu_5: %u", cfu_5);
  // }

  // for (int i = 0; i < repeat_count; i++) {
  //   uint32_t cfu_7 = cfu_op(10); // Write
  //   LOG_INFO("cfu_7: %u", cfu_7);
  // }
  // for (int i = 0; i < repeat_count; i++) {
  //   uint32_t cfu_6 = cfu_op(9); // Read
  //   LOG_INFO("cfu_6: %u", cfu_6);  
  // }
  // for (int i = 0; i < repeat_count; i++) {
  //   uint32_t cfu_8 = cfu_op(11); // MacOut
  //   LOG_INFO("cfu_8: %u", cfu_8);  
  // }

  // LOG_INFO("MAC operation : %u", mac_cfu_0);

  LOG_INFO("CFU Bye ~");
  /////

  const iree_status_t result = run(model_ptr);
  int ret = (int)iree_status_code(result);
  if (!iree_status_is_ok(result))
  {
    iree_status_fprint(stderr, result);
    iree_status_free(result);
  }
  else
  {
    LOG_INFO("%s finished successfully", model_ptr->model_name);
  }

  // test
  // __asm__ volatile ("\t.word 0x0000000b\n" :
  //				/* no outputs */ :
  //				/* no inputs */ :
  //				/* no clobbers */);

  return ret;
  // return 0;
}
