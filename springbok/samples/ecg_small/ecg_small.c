#include "samples/util/util.h"

#include <springbok.h>

#if !defined(BUILD_EMITC)
#include "samples/ecg_small/ecg_small_fp32_bytecode_module_static.h"
#include "samples/ecg_small/ecg_small_fp32_bytecode_module_static_c.h"
#else
#include "samples/ecg_small/ecg_small_fp32_c_module_static_c.h"
#include "samples/ecg_small/ecg_small_fp32_c_module_static_emitc.h"
#endif

#include "ecg_input_c.h"

// %arg0 (x_arg):   tensor<64x1x279xf32>
// %arg1 (rr):      tensor<64x10xf32>
// %arg2 (rr_avg):  tensor<64x10xf32>
// %arg3 (x):       tensor<64x1x279xf32>
// output:          tensor<64x2x26x1xf32>
/* output:
<IREE DeviceArray: shape=[64, 10], dtype=float32>
<IREE DeviceArray: shape=[64, 10], dtype=float32>
<IREE DeviceArray: shape=[64, 100], dtype=float32>
<IREE DeviceArray: shape=[64, 16], dtype=float32>
<IREE DeviceArray: shape=[64, 5], dtype=float32>
<IREE DeviceArray: shape=[64, 26], dtype=float32>
<IREE DeviceArray: shape=[64, 16], dtype=float32>
<IREE DeviceArray: shape=[64, 26], dtype=float32>
*/
const MlModel kModel = {
    .num_input = 4,
    .num_input_dim = { 3, 2, 2, 3 },
    .input_shape = { { 64, 1, 279 }, { 64, 10 }, { 64, 10 }, { 64, 1, 279 } },
    .input_length = { 64 * 279, 64 * 10, 64 * 10, 64 * 279 }, // 배열 길이 계산에 사용된다
    .input_size_bytes = { sizeof(float), sizeof(float) },     // 배열 크기 계산에 사용된다
    .num_output = 1,
    //.output_length = { 64 * 2 * 26 * 1 },
    .output_length = { 64 * 10, 64 * 10, 64 * 100, 64 * 16, 64 * 5, 64 * 26, 64 * 16, 64 * 26 },
    .output_size_bytes = sizeof(float),
    .hal_element_type = IREE_HAL_ELEMENT_TYPE_FLOAT_32,
    .entry_func = "module.main",
    .model_name = "ecg_small_fp32",
};

iree_status_t create_module(iree_vm_instance_t *instance,
                            iree_vm_module_t **module) {
#if !defined(BUILD_EMITC)
  const struct iree_file_toc_t *module_file_toc =
      //samples_float_model_mnist_bytecode_module_static_create();
      samples_ecg_small_fp32_bytecode_module_static_create();
  return iree_vm_bytecode_module_create(
      instance,
      iree_make_const_byte_span(module_file_toc->data, module_file_toc->size),
      iree_allocator_null(), iree_allocator_system(), module);
#else
  return module_create(instance, iree_allocator_system(), module);
#endif
}

iree_hal_executable_library_query_fn_t library_query(void) {
  //return &mnist_linked_llvm_cpu_library_query;
  //return &simple_abs_linked_llvm_cpu_library_query;
  // return &abs_dispatch_0_library_query;
  return &ecg_small_fp32_linked_llvm_cpu_library_query;
}

// const array ecg_input
iree_status_t load_input_data(const MlModel *model, void **buffer,
                              iree_const_byte_span_t **byte_span) {
  float *ecg_input[4] = {
    ecg_input_x_avg,
    ecg_input_rr,
    ecg_input_rr_avg,
    ecg_input_x
  };

  // ecg_input_ 각각의 input에 대해 처리
  for (int i = 0; i < model->num_input; ++i) {
    byte_span[i] = malloc(sizeof(iree_const_byte_span_t));
    *byte_span[i] = iree_make_const_byte_span(
      ecg_input[i], model->input_size_bytes[i] * model->input_length[i]);
  }
  return iree_ok_status();
}

iree_status_t process_output(const MlModel *model,
                             iree_hal_buffer_mapping_t *buffers,
                             uint32_t *output_length) {
  iree_status_t result = iree_ok_status();
  //int32_t abs_out = ((const float*)buffers[0].contents.data)[0];
  //LOG_INFO("ecg_small/ecg_small_fp32: abs_out=%d", abs_out); // call Renode intrinsic
  LOG_INFO("ecg_small/ecg_emall_fp32: completed");
  return result;
}

/* IREE APIs
static inline iree_const_byte_span_t iree_make_const_byte_span(
    const void* data, iree_host_size_t data_length) {
  iree_const_byte_span_t v = {(const uint8_t*)data, data_length};
  return v;
}
*/