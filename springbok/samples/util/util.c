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

/* systolic array */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h> // for usleep function
#include <sched.h>  // for sched_setaffinity function

typedef struct
{
  uint32_t return_code; // Populated in crt0.S
  uint32_t epc;         // Populated in crt0.S
  uint32_t length;
} OutputHeader;

OutputHeader output_header;

extern const MlModel kModel;

/* PIM */
#define AXI_PIM_BASE 0x33000000

/* Systolic Array */
#define BUFFER_SIZE 21
#define AXI_BASE_ADDR 0x33000000
#define NUM_ENTRIES 100
// #define NUM_ENTRIES 50
#define VALID_ADDR_WIDTH  18
#define STATE_OFFSET   (1 << VALID_ADDR_WIDTH)

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
// static __always_inline uint32_t read_mac_out_controlblock(void)
// {
//   uint32_t mac_out;
//   __asm__ volatile(
//     // read_mac_out a0 # "------------0000 0100 [ rd ] [rd]111 1011"
//       ".word 0x0000477b\n" // custom-3, fucnt3 = 4. 
//       : "=r"(mac_out));
//   return mac_out;
// }
// // ==============================================================================

// // ==============================================================================
// //                          Custom Function Unit
// // ==============================================================================
// static __always_inline uint32_t cfu_op(uint32_t funct)
// {
//   uint32_t result;
//   // LOG_INFO("CFU operation started. funct = %u", funct);

//   switch (funct)
//   {
//     case 0: // READ
//       __asm__ volatile(
//         ".word 0x0084868b\n" // op0
//         : "=r"(result)
//       );
//       LOG_INFO("READ operation finished. Result = %u", result);
//       break;

//     case 1: // WRITE
//       __asm__ volatile(
//         ".word 0x0084968b\n" // op1
//         : "=r"(result)
//       );
//       LOG_INFO("WRITE operation finished. Result = %u", result);
//       break;

//     case 2: // MAC Calculation
//       __asm__ volatile(
//         ".word 0x0084a68b\n" // op2
//         : "=r"(result)
//       );
//       LOG_INFO("MAC operation finished. Result = %u", result);
//       break;

//     //// Fixed Test
//     case 3: // fixed test - READ
//       __asm__ volatile(
//         ".word 0x00c4068b\n" // op0
//         : "=r"(result)
//       );
//       LOG_INFO("case 3: fixed operation finished. Result = %u", result);
//       break;

//     case 4: // fixed test - WRITE
//       __asm__ volatile(
//         ".word 0x00c4170b\n" // op1
//         : "=r"(result)
//       );
//       LOG_INFO("case 4: fixed operation finished. Result = %u", result);
//       break;

//     case 5: // fixed test - MAC Calculation
//       __asm__ volatile(
//         ".word 0x00c4278b\n" // op2
//         : "=r"(result)
//       );
//       LOG_INFO("case 5: fixed operation finished. Result = %u", result);
//       break;
//     ////

//     //// Compare Test
//     case 6: // compare test - READ
//       __asm__ volatile(
//         ".word 0x01b4098b\n" // op0
//         : "=r"(result)
//       );
//       LOG_INFO("case 6: compare operation finished. Result = %u", result);
//       break;

//     case 7: // compare test - WRITE
//       __asm__ volatile(
//         ".word 0x01b41a0b\n" // op1
//         : "=r"(result)
//       );
//       LOG_INFO("case 7: compare operation finished. Result = %u", result);
//       break;

//     case 8: // compare test - MAC Calculation
//       __asm__ volatile(
//         ".word 0x0b42a8b\n" // op2
//         : "=r"(result)
//       );
//       LOG_INFO("case 8: compare operation finished. Result = %u", result);
//       break;
//     // 
    
//     // do_interactive_tests
//     // 0x0094580b : Write
//     // 0x0094480b : Read
//     case 9: // interactive test - Read
//       __asm__ volatile(
//         ".word 0x0094480b\n" // op2
//         : "=r"(result)
//       );
//       LOG_INFO("case 9: interactive operation finished. Result = %u", result);
//       break;

//     case 10: // interactive test - Write
//       __asm__ volatile(
//         ".word 0x0094580b\n" // op2
//         : "=r"(result)
//       );
//       LOG_INFO("case 10: interactive operation finished. Result = %u", result);
//       break;

//     case 11: // interactive test - Write
//       __asm__ volatile(
//         ".word 0x0094680b\n" // op2
//         : "=r"(result)
//       );
//       LOG_INFO("case 11: interactive operation finished. Result = %u", result);
//       break;
//     ////

//     default:
//       result = 0;
//       LOG_INFO("Invalid funct value: %u", funct);
//       break;
//   }
//   // LOG_INFO("CFU operation ended.");

//   return result;
// }
// // ==============================================================================

// uint32_t read_s_axi_rdata_reg_asm(void) {
//     uint32_t value;
//     __asm__ volatile (
//         "li   t0, 0x33000000\n\t"
//         "lw   %0, 0(t0)\n\t"
//         : "=r"(value)       // Output operand
//         :                    // Input operands
//         : "t0"               // Clobbered registers
//     );
//     return value;
// }

// // ==============================================================================
// //                                Print PC
// // ==============================================================================
// void print_current_pc() {
//     uint32_t pc;
//     __asm__ volatile ("auipc %0, 0" : "=r"(pc));  
//     printf("Current Program Counter (PC): 0x%x\n", pc);
// }

// ==============================================================================
//                              ControlBlock
// ==============================================================================
// static __always_inline uint32_t write_axi(void)
// {
//   uint32_t result;
//   __asm__ volatile(
//     // read_mac_out a0 # "------------0000 0100 [ rd ] [rd]111 1011"
//       ".word 0x320003d0\n" // custom-3, fucnt3 = 4. 
//       : "=r"(result));
//   return result;
// }

// // ==============================================================================
// static __always_inline uint32_t read_axi(void)
// {
//   uint32_t result;
//   __asm__ volatile(
//     // read_mac_out a0 # "------------0000 0100 [ rd ] [rd]111 1011"
//       ".word 0x320003a8\n" // custom-3, fucnt3 = 4. 
//       : "=r"(result));
//   return result;
// }

void write_axi_memory(volatile int *axi_addr, int num_entries) {
  for (int i = 0; i < num_entries; i++) {
    int val = (int)(i + 1);
    axi_addr[i] = val;
    printf("[INFO] AXI[%d] = 0x%08X\n", i, val);
  }
}

static inline uint64_t get_cycle_count() {
    uint32_t cycles_low, cycles_high;
    __asm__ volatile (
        "rdcycleh %0\n\t"
        "rdcycle %1"
        : "=r"(cycles_high), "=r"(cycles_low)
    );
    return ((uint64_t)cycles_high << 32) | cycles_low;
}

void uint64_to_str(uint64_t num, char *buf, size_t buf_size) {
    buf[buf_size - 1] = '\0';
    int pos = buf_size - 2;
    
    if (num == 0) {
        buf[pos] = '0';
        pos--;
    } else {
        while (num > 0 && pos >= 0) {
            buf[pos] = '0' + (num % 10);
            num /= 10;
            pos--;
        }
    }
    int start = pos + 1;
    memmove(buf, buf + start, buf_size - start);
}

#define ROWS_A 4
#define COLS_A 4    
#define ROWS_B 4   
#define COLS_B 16   

void matrixMultiply(int A[ROWS_A][COLS_A], int B[ROWS_B][COLS_B], int C[ROWS_A][COLS_B]) {
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            C[i][j] = 0;
            for (int k = 0; k < COLS_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix4x4(int M[ROWS_A][COLS_A]) {
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_A; j++) {
            printf("%4d ", M[i][j]);
        }
        printf("\n");
    }
}

void printMatrix4x16(int M[ROWS_A][COLS_B]) {
    for (int i = 0; i < ROWS_A; i++) {
        for (int j = 0; j < COLS_B; j++) {
            printf("%4d ", M[i][j]);
        }
        printf("\n");
    }
}

int main()
{
  //const MlModel *model_ptr = &kModel;
  LOG_INFO("Hello DGIST, Hello Semibrain");
  
  /* AXI Test */
  LOG_INFO("AXI Test ~");

  volatile int *axi_addr = (int *)AXI_BASE_ADDR; 

  write_axi_memory(axi_addr, NUM_ENTRIES);

  int read_val = axi_addr[1];
  printf("[INFO] Read AXI[1] = 0x%08X\n", read_val);

  // /*
  printf("========================================================");
  printf("Baseline Start !!!!!!!\n");

  int A[ROWS_A][COLS_A];
  int B[ROWS_B][COLS_B];
  int C[ROWS_A][COLS_B]; 

  for (int i = 0; i < ROWS_A; i++) {
      for (int j = 0; j < COLS_A; j++) {
          A[i][j] = axi_addr[i * COLS_A + j];
      }
  }

  for (int i = 0; i < ROWS_B; i++) {
      for (int j = 0; j < COLS_B; j++) {
          B[i][j] = axi_addr[16 + i * COLS_B + j];
      }
  }

  printf("Matrix A (4x4):\n");
  printMatrix4x4(A);

  printf("\nMatrix B (4x16):\n");
  for (int i = 0; i < ROWS_B; i++) {
      for (int j = 0; j < COLS_B; j++) {
          printf("%4d ", B[i][j]);
      }
      printf("\n");
  }

  uint64_t baseline_start_cycles = get_cycle_count();  

  matrixMultiply(A, B, C);

  printf("\nMatrix C (A x B) (4x16):\n");
  printMatrix4x16(C);
  printf("[DEBUG] Baseline Computation End !!!!!!!\n");

  uint64_t baseline_write_cycles = get_cycle_count();  
	uint64_t baseline_execution_cycles = baseline_write_cycles - baseline_start_cycles;
  
  char buffer2[BUFFER_SIZE]; 

  uint64_to_str(baseline_execution_cycles, buffer2, BUFFER_SIZE);
  printf("baseline_execution_cycles: %s cycles\n", buffer2);   
//  */
  int ret = 0;

  // test
  // __asm__ volatile ("\t.word 0x0000000b\n" :
  //				/* no outputs */ :
  //				/* no inputs */ :
  //				/* no clobbers */);

  return ret;
}

