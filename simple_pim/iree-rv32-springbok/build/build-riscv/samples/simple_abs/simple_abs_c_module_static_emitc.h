#ifndef MODULE_H_
#define MODULE_H_
#include "iree/vm/api.h"

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

iree_status_t module_create(iree_vm_instance_t*, iree_allocator_t, iree_vm_module_t**);

#ifdef __cplusplus
}  // extern "C"
#endif  // __cplusplus

#endif  // MODULE_H_

#if defined(EMITC_IMPLEMENTATION)
#include "iree/vm/ops.h"
#include "iree/vm/ops_emitc.h"
#include "iree/vm/shims_emitc.h"

//=============================================================================
// compiler configuration
//=============================================================================


//=============================================================================
// module "module"
//=============================================================================

iree_alignas(16) static const uint8_t module_abs_dispatch_0_static[] = {97, 98, 115, 95, 100, 105, 115, 112, 97, 116, 99, 104, 95, 48};
iree_alignas(1) static const uint8_t module__utf8_hal_executable_format_EAB228F999C2D3A1[] = {104, 97, 108, 46, 101, 120, 101, 99, 117, 116, 97, 98, 108, 101, 46, 102, 111, 114, 109, 97, 116};
iree_alignas(1) static const uint8_t module__utf8_static_96B31E405495E0B6[] = {115, 116, 97, 116, 105, 99};
iree_alignas(1) static const uint8_t module__utf8_tensor_3C6209B4FD120BDC[] = {116, 101, 110, 115, 111, 114};

struct module_t {
iree_allocator_t allocator;
};
struct module_state_t {
iree_allocator_t allocator;
uint8_t rwdata[4];
iree_vm_ref_t refs[2];
iree_vm_buffer_t rodata_buffers[4];
iree_vm_function_t imports[19];
};
typedef struct module_t module_t;
typedef struct module_state_t module_state_t;

// DECLARE FUNCTIONS
static iree_status_t module_call_0v_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*);
static iree_status_t module_call_0riiI_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int64_t, iree_vm_ref_t*);
static iree_status_t module_call_0rrrIii_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, int64_t, int32_t, int32_t);
static iree_status_t module_call_0rIIiiCID_r_0_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int64_t, int64_t, int32_t, int32_t, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0rriiCID_v_0_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t);
static iree_status_t module_call_0r_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*);
static iree_status_t module_call_0riii_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0r_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*);
static iree_status_t module_call_0riii_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t);
static iree_status_t module_call_0rriCiirIID_v_2_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t);
static iree_status_t module_call_0rriiii_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int32_t);
static iree_status_t module_call_0riCiiiD_r_2_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0rrr_iI_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t*, int64_t*);
static iree_status_t module_call_0rIrrCrD_v_1_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int64_t, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0rrrrCrD_r_1_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, iree_vm_ref_t*, iree_vm_ref_t*);
static iree_status_t module_call_0ri_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0iCrD_i_1_import_shim(iree_vm_stack_t*, iree_vm_function_t*, int32_t, int32_t, iree_vm_ref_t*, int32_t*);
static iree_status_t module_call_0riCrD_r_1_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, iree_vm_ref_t*, iree_vm_ref_t*);
static iree_status_t module_abs(iree_vm_stack_t*, module_t*, module_state_t*, iree_vm_ref_t*, iree_vm_ref_t*);
static iree_status_t module_abs_export_shim(iree_vm_stack_t*, uint32_t, iree_byte_span_t, iree_byte_span_t, void*, void*);
static iree_status_t module___init_export_shim(iree_vm_stack_t*, uint32_t, iree_byte_span_t, iree_byte_span_t, void*, void*);
static iree_status_t module___init(iree_vm_stack_t*, module_t*, module_state_t*);
static void module_destroy(void*);
static iree_status_t module_alloc_state(void*, iree_allocator_t, iree_vm_module_state_t**);
static void module_free_state(void*, iree_vm_module_state_t*);
static iree_status_t module_resolve_import(void*, iree_vm_module_state_t*, iree_host_size_t, const iree_vm_function_t*, const iree_vm_function_signature_t*);
// DEFINE FUNCTIONS
static iree_status_t module_call_0v_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3) {
  iree_vm_function_call_t v4;
  iree_host_size_t v5;
  iree_host_size_t v6;
  iree_host_size_t v7;
  iree_vm_module_t* v8;
  bool v9;
  int32_t v10;
  bool v11;
  iree_vm_function_t v12;
  iree_byte_span_t* v13;
  void* v14;
  uint8_t* v15;
  iree_byte_span_t* v16;
  void* v17;
  uint8_t* v18;
  iree_vm_module_t* v19;
  iree_status_t v20;
  bool v21;
  int32_t v22;
  bool v23;
  iree_byte_span_t v24;
  uint8_t* v25;
  iree_vm_ref_t* v26;
  iree_status_t v27;
  iree_status_t v28;
  ;
  v5 = 0;
  v6 = sizeof(iree_vm_ref_t);
  v7 = EMITC_BINARY(+, v5, v6);
  v8 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v9 = EMITC_UNARY(!, v8);
  v10 = vm_cmp_nz_i32(v9);
  v11 = (bool) v10;
  if (v11) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v12 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v4, function, v12);
  v13 = EMITC_STRUCT_MEMBER_ADDRESS(v4, arguments);
  v14 = iree_alloca(v5);
  v15 = (uint8_t*) v14;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v13, data_length, v5);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v13, data, v15);
  memset(v15, 0, v5);
  v16 = EMITC_STRUCT_MEMBER_ADDRESS(v4, results);
  v17 = iree_alloca(v7);
  v18 = (uint8_t*) v17;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v16, data_length, v7);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v16, data, v18);
  memset(v18, 0, v7);
  v19 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v20 = EMITC_STRUCT_PTR_MEMBER_CALL(v19, begin_call, v19, v1, v4);
  v21 = (bool) v20;
  v22 = vm_cmp_nz_i32(v21);
  v23 = (bool) v22;
  if (v23) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v24 = EMITC_STRUCT_MEMBER(v4, results);
  v25 = EMITC_STRUCT_MEMBER(v24, data);
  v26 = (iree_vm_ref_t*) v25;
  iree_vm_ref_move(v26, v3);
  v27 = iree_ok_status();
  return v27;
  label4:
  v28 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v28;
  label5:
  return v20;
}

static iree_status_t module_call_0riiI_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, int64_t v6, iree_vm_ref_t* v7) {
  iree_vm_function_call_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_vm_module_t* v20;
  bool v21;
  int32_t v22;
  bool v23;
  iree_vm_function_t v24;
  iree_byte_span_t* v25;
  void* v26;
  uint8_t* v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t v31;
  uint8_t* v32;
  iree_vm_ref_t* v33;
  iree_host_size_t v34;
  uint8_t* v35;
  iree_host_size_t v36;
  int32_t* v37;
  iree_host_size_t v38;
  uint8_t* v39;
  iree_host_size_t v40;
  int32_t* v41;
  iree_host_size_t v42;
  uint8_t* v43;
  iree_host_size_t v44;
  int64_t* v45;
  iree_vm_module_t* v46;
  iree_status_t v47;
  bool v48;
  int32_t v49;
  bool v50;
  iree_byte_span_t v51;
  uint8_t* v52;
  iree_vm_ref_t* v53;
  iree_status_t v54;
  iree_status_t v55;
  ;
  v9 = 0;
  v10 = sizeof(iree_vm_ref_t);
  v11 = EMITC_BINARY(+, v9, v10);
  v12 = sizeof(int32_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(int32_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int64_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v9, v18);
  v20 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v21 = EMITC_UNARY(!, v20);
  v22 = vm_cmp_nz_i32(v21);
  v23 = (bool) v22;
  if (v23) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v24 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v8, function, v24);
  v25 = EMITC_STRUCT_MEMBER_ADDRESS(v8, arguments);
  v26 = iree_alloca(v17);
  v27 = (uint8_t*) v26;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data_length, v17);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data, v27);
  memset(v27, 0, v17);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v8, results);
  v29 = iree_alloca(v19);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v19);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v19);
  v31 = EMITC_STRUCT_MEMBER(v8, arguments);
  v32 = EMITC_STRUCT_MEMBER(v31, data);
  v33 = (iree_vm_ref_t*) v32;
  iree_vm_ref_assign(v3, v33);
  v34 = sizeof(iree_vm_ref_t);
  v35 = EMITC_BINARY(+, v32, v34);
  v36 = sizeof(int32_t);
  v37 = &v4;
  memcpy(v35, v37, v36);
  v38 = sizeof(int32_t);
  v39 = EMITC_BINARY(+, v35, v38);
  v40 = sizeof(int32_t);
  v41 = &v5;
  memcpy(v39, v41, v40);
  v42 = sizeof(int32_t);
  v43 = EMITC_BINARY(+, v39, v42);
  v44 = sizeof(int64_t);
  v45 = &v6;
  memcpy(v43, v45, v44);
  v46 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v47 = EMITC_STRUCT_PTR_MEMBER_CALL(v46, begin_call, v46, v1, v8);
  v48 = (bool) v47;
  v49 = vm_cmp_nz_i32(v48);
  v50 = (bool) v49;
  if (v50) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v51 = EMITC_STRUCT_MEMBER(v8, results);
  v52 = EMITC_STRUCT_MEMBER(v51, data);
  v53 = (iree_vm_ref_t*) v52;
  iree_vm_ref_move(v53, v7);
  v54 = iree_ok_status();
  return v54;
  label4:
  iree_vm_ref_release(v3);
  v55 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v55;
  label5:
  iree_vm_ref_release(v3);
  return v47;
}

static iree_status_t module_call_0rrrIii_v_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, iree_vm_ref_t* v5, int64_t v6, int32_t v7, int32_t v8) {
  iree_vm_function_call_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_vm_module_t* v23;
  bool v24;
  int32_t v25;
  bool v26;
  iree_vm_function_t v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t* v31;
  void* v32;
  uint8_t* v33;
  iree_byte_span_t v34;
  uint8_t* v35;
  iree_vm_ref_t* v36;
  iree_host_size_t v37;
  uint8_t* v38;
  iree_vm_ref_t* v39;
  iree_host_size_t v40;
  uint8_t* v41;
  iree_vm_ref_t* v42;
  iree_host_size_t v43;
  uint8_t* v44;
  iree_host_size_t v45;
  int64_t* v46;
  iree_host_size_t v47;
  uint8_t* v48;
  iree_host_size_t v49;
  int32_t* v50;
  iree_host_size_t v51;
  uint8_t* v52;
  iree_host_size_t v53;
  int32_t* v54;
  iree_vm_module_t* v55;
  iree_status_t v56;
  bool v57;
  int32_t v58;
  bool v59;
  iree_status_t v60;
  iree_status_t v61;
  ;
  v10 = 0;
  v11 = sizeof(iree_vm_ref_t);
  v12 = EMITC_BINARY(+, v10, v11);
  v13 = sizeof(iree_vm_ref_t);
  v14 = EMITC_BINARY(+, v12, v13);
  v15 = sizeof(iree_vm_ref_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = sizeof(int64_t);
  v18 = EMITC_BINARY(+, v16, v17);
  v19 = sizeof(int32_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(int32_t);
  v22 = EMITC_BINARY(+, v20, v21);
  v23 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v24 = EMITC_UNARY(!, v23);
  v25 = vm_cmp_nz_i32(v24);
  v26 = (bool) v25;
  if (v26) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v27 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v9, function, v27);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v9, arguments);
  v29 = iree_alloca(v22);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v22);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v22);
  v31 = EMITC_STRUCT_MEMBER_ADDRESS(v9, results);
  v32 = iree_alloca(v10);
  v33 = (uint8_t*) v32;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data_length, v10);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data, v33);
  memset(v33, 0, v10);
  v34 = EMITC_STRUCT_MEMBER(v9, arguments);
  v35 = EMITC_STRUCT_MEMBER(v34, data);
  v36 = (iree_vm_ref_t*) v35;
  iree_vm_ref_assign(v3, v36);
  v37 = sizeof(iree_vm_ref_t);
  v38 = EMITC_BINARY(+, v35, v37);
  v39 = (iree_vm_ref_t*) v38;
  iree_vm_ref_assign(v4, v39);
  v40 = sizeof(iree_vm_ref_t);
  v41 = EMITC_BINARY(+, v38, v40);
  v42 = (iree_vm_ref_t*) v41;
  iree_vm_ref_assign(v5, v42);
  v43 = sizeof(iree_vm_ref_t);
  v44 = EMITC_BINARY(+, v41, v43);
  v45 = sizeof(int64_t);
  v46 = &v6;
  memcpy(v44, v46, v45);
  v47 = sizeof(int64_t);
  v48 = EMITC_BINARY(+, v44, v47);
  v49 = sizeof(int32_t);
  v50 = &v7;
  memcpy(v48, v50, v49);
  v51 = sizeof(int32_t);
  v52 = EMITC_BINARY(+, v48, v51);
  v53 = sizeof(int32_t);
  v54 = &v8;
  memcpy(v52, v54, v53);
  v55 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v56 = EMITC_STRUCT_PTR_MEMBER_CALL(v55, begin_call, v55, v1, v9);
  v57 = (bool) v56;
  v58 = vm_cmp_nz_i32(v57);
  v59 = (bool) v58;
  if (v59) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v60 = iree_ok_status();
  return v60;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  v61 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v61;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  return v56;
}

static iree_status_t module_call_0rIIiiCID_r_0_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int64_t v4, int64_t v5, int32_t v6, int32_t v7, int32_t v8, iree_vm_ref_t* v9) {
  iree_vm_function_call_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_host_size_t v23;
  iree_host_size_t v24;
  iree_host_size_t v25;
  iree_vm_module_t* v26;
  bool v27;
  int32_t v28;
  bool v29;
  iree_vm_function_t v30;
  iree_byte_span_t* v31;
  void* v32;
  uint8_t* v33;
  iree_byte_span_t* v34;
  void* v35;
  uint8_t* v36;
  iree_byte_span_t v37;
  uint8_t* v38;
  iree_vm_ref_t* v39;
  iree_host_size_t v40;
  uint8_t* v41;
  iree_host_size_t v42;
  int64_t* v43;
  iree_host_size_t v44;
  uint8_t* v45;
  iree_host_size_t v46;
  int64_t* v47;
  iree_host_size_t v48;
  uint8_t* v49;
  iree_host_size_t v50;
  int32_t* v51;
  iree_host_size_t v52;
  uint8_t* v53;
  iree_host_size_t v54;
  int32_t* v55;
  iree_host_size_t v56;
  uint8_t* v57;
  iree_host_size_t v58;
  int32_t* v59;
  iree_vm_module_t* v60;
  iree_status_t v61;
  bool v62;
  int32_t v63;
  bool v64;
  iree_byte_span_t v65;
  uint8_t* v66;
  iree_vm_ref_t* v67;
  iree_status_t v68;
  iree_status_t v69;
  ;
  v11 = 0;
  v12 = sizeof(iree_vm_ref_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(int64_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int64_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(int32_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = sizeof(int32_t);
  v21 = EMITC_BINARY(+, v19, v20);
  v22 = sizeof(int32_t);
  v23 = EMITC_BINARY(+, v21, v22);
  v24 = sizeof(iree_vm_ref_t);
  v25 = EMITC_BINARY(+, v11, v24);
  v26 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v27 = EMITC_UNARY(!, v26);
  v28 = vm_cmp_nz_i32(v27);
  v29 = (bool) v28;
  if (v29) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v30 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v10, function, v30);
  v31 = EMITC_STRUCT_MEMBER_ADDRESS(v10, arguments);
  v32 = iree_alloca(v23);
  v33 = (uint8_t*) v32;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data_length, v23);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data, v33);
  memset(v33, 0, v23);
  v34 = EMITC_STRUCT_MEMBER_ADDRESS(v10, results);
  v35 = iree_alloca(v25);
  v36 = (uint8_t*) v35;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v34, data_length, v25);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v34, data, v36);
  memset(v36, 0, v25);
  v37 = EMITC_STRUCT_MEMBER(v10, arguments);
  v38 = EMITC_STRUCT_MEMBER(v37, data);
  v39 = (iree_vm_ref_t*) v38;
  iree_vm_ref_assign(v3, v39);
  v40 = sizeof(iree_vm_ref_t);
  v41 = EMITC_BINARY(+, v38, v40);
  v42 = sizeof(int64_t);
  v43 = &v4;
  memcpy(v41, v43, v42);
  v44 = sizeof(int64_t);
  v45 = EMITC_BINARY(+, v41, v44);
  v46 = sizeof(int64_t);
  v47 = &v5;
  memcpy(v45, v47, v46);
  v48 = sizeof(int64_t);
  v49 = EMITC_BINARY(+, v45, v48);
  v50 = sizeof(int32_t);
  v51 = &v6;
  memcpy(v49, v51, v50);
  v52 = sizeof(int32_t);
  v53 = EMITC_BINARY(+, v49, v52);
  v54 = sizeof(int32_t);
  v55 = &v7;
  memcpy(v53, v55, v54);
  v56 = sizeof(int32_t);
  v57 = EMITC_BINARY(+, v53, v56);
  v58 = sizeof(int32_t);
  v59 = &v8;
  memcpy(v57, v59, v58);
  v60 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v61 = EMITC_STRUCT_PTR_MEMBER_CALL(v60, begin_call, v60, v1, v10);
  v62 = (bool) v61;
  v63 = vm_cmp_nz_i32(v62);
  v64 = (bool) v63;
  if (v64) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v65 = EMITC_STRUCT_MEMBER(v10, results);
  v66 = EMITC_STRUCT_MEMBER(v65, data);
  v67 = (iree_vm_ref_t*) v66;
  iree_vm_ref_move(v67, v9);
  v68 = iree_ok_status();
  return v68;
  label4:
  iree_vm_ref_release(v3);
  v69 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v69;
  label5:
  iree_vm_ref_release(v3);
  return v61;
}

static iree_status_t module_call_0rriiCID_v_0_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int32_t v5, int32_t v6, int32_t v7) {
  iree_vm_function_call_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_vm_module_t* v20;
  bool v21;
  int32_t v22;
  bool v23;
  iree_vm_function_t v24;
  iree_byte_span_t* v25;
  void* v26;
  uint8_t* v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t v31;
  uint8_t* v32;
  iree_vm_ref_t* v33;
  iree_host_size_t v34;
  uint8_t* v35;
  iree_vm_ref_t* v36;
  iree_host_size_t v37;
  uint8_t* v38;
  iree_host_size_t v39;
  int32_t* v40;
  iree_host_size_t v41;
  uint8_t* v42;
  iree_host_size_t v43;
  int32_t* v44;
  iree_host_size_t v45;
  uint8_t* v46;
  iree_host_size_t v47;
  int32_t* v48;
  iree_vm_module_t* v49;
  iree_status_t v50;
  bool v51;
  int32_t v52;
  bool v53;
  iree_status_t v54;
  iree_status_t v55;
  ;
  v9 = 0;
  v10 = sizeof(iree_vm_ref_t);
  v11 = EMITC_BINARY(+, v9, v10);
  v12 = sizeof(iree_vm_ref_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(int32_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int32_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(int32_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v21 = EMITC_UNARY(!, v20);
  v22 = vm_cmp_nz_i32(v21);
  v23 = (bool) v22;
  if (v23) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v24 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v8, function, v24);
  v25 = EMITC_STRUCT_MEMBER_ADDRESS(v8, arguments);
  v26 = iree_alloca(v19);
  v27 = (uint8_t*) v26;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data_length, v19);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data, v27);
  memset(v27, 0, v19);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v8, results);
  v29 = iree_alloca(v9);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v9);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v9);
  v31 = EMITC_STRUCT_MEMBER(v8, arguments);
  v32 = EMITC_STRUCT_MEMBER(v31, data);
  v33 = (iree_vm_ref_t*) v32;
  iree_vm_ref_assign(v3, v33);
  v34 = sizeof(iree_vm_ref_t);
  v35 = EMITC_BINARY(+, v32, v34);
  v36 = (iree_vm_ref_t*) v35;
  iree_vm_ref_assign(v4, v36);
  v37 = sizeof(iree_vm_ref_t);
  v38 = EMITC_BINARY(+, v35, v37);
  v39 = sizeof(int32_t);
  v40 = &v5;
  memcpy(v38, v40, v39);
  v41 = sizeof(int32_t);
  v42 = EMITC_BINARY(+, v38, v41);
  v43 = sizeof(int32_t);
  v44 = &v6;
  memcpy(v42, v44, v43);
  v45 = sizeof(int32_t);
  v46 = EMITC_BINARY(+, v42, v45);
  v47 = sizeof(int32_t);
  v48 = &v7;
  memcpy(v46, v48, v47);
  v49 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v50 = EMITC_STRUCT_PTR_MEMBER_CALL(v49, begin_call, v49, v1, v8);
  v51 = (bool) v50;
  v52 = vm_cmp_nz_i32(v51);
  v53 = (bool) v52;
  if (v53) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v54 = iree_ok_status();
  return v54;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  v55 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v55;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  return v50;
}

static iree_status_t module_call_0r_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4) {
  iree_vm_function_call_t v5;
  iree_host_size_t v6;
  iree_host_size_t v7;
  iree_host_size_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_vm_module_t* v11;
  bool v12;
  int32_t v13;
  bool v14;
  iree_vm_function_t v15;
  iree_byte_span_t* v16;
  void* v17;
  uint8_t* v18;
  iree_byte_span_t* v19;
  void* v20;
  uint8_t* v21;
  iree_byte_span_t v22;
  uint8_t* v23;
  iree_vm_ref_t* v24;
  iree_vm_module_t* v25;
  iree_status_t v26;
  bool v27;
  int32_t v28;
  bool v29;
  iree_byte_span_t v30;
  uint8_t* v31;
  iree_vm_ref_t* v32;
  iree_status_t v33;
  iree_status_t v34;
  ;
  v6 = 0;
  v7 = sizeof(iree_vm_ref_t);
  v8 = EMITC_BINARY(+, v6, v7);
  v9 = sizeof(iree_vm_ref_t);
  v10 = EMITC_BINARY(+, v6, v9);
  v11 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v12 = EMITC_UNARY(!, v11);
  v13 = vm_cmp_nz_i32(v12);
  v14 = (bool) v13;
  if (v14) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v15 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v5, function, v15);
  v16 = EMITC_STRUCT_MEMBER_ADDRESS(v5, arguments);
  v17 = iree_alloca(v8);
  v18 = (uint8_t*) v17;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v16, data_length, v8);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v16, data, v18);
  memset(v18, 0, v8);
  v19 = EMITC_STRUCT_MEMBER_ADDRESS(v5, results);
  v20 = iree_alloca(v10);
  v21 = (uint8_t*) v20;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v19, data_length, v10);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v19, data, v21);
  memset(v21, 0, v10);
  v22 = EMITC_STRUCT_MEMBER(v5, arguments);
  v23 = EMITC_STRUCT_MEMBER(v22, data);
  v24 = (iree_vm_ref_t*) v23;
  iree_vm_ref_assign(v3, v24);
  v25 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v26 = EMITC_STRUCT_PTR_MEMBER_CALL(v25, begin_call, v25, v1, v5);
  v27 = (bool) v26;
  v28 = vm_cmp_nz_i32(v27);
  v29 = (bool) v28;
  if (v29) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v30 = EMITC_STRUCT_MEMBER(v5, results);
  v31 = EMITC_STRUCT_MEMBER(v30, data);
  v32 = (iree_vm_ref_t*) v31;
  iree_vm_ref_move(v32, v4);
  v33 = iree_ok_status();
  return v33;
  label4:
  iree_vm_ref_release(v3);
  v34 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v34;
  label5:
  iree_vm_ref_release(v3);
  return v26;
}

static iree_status_t module_call_0riii_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, int32_t v6, iree_vm_ref_t* v7) {
  iree_vm_function_call_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_vm_module_t* v20;
  bool v21;
  int32_t v22;
  bool v23;
  iree_vm_function_t v24;
  iree_byte_span_t* v25;
  void* v26;
  uint8_t* v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t v31;
  uint8_t* v32;
  iree_vm_ref_t* v33;
  iree_host_size_t v34;
  uint8_t* v35;
  iree_host_size_t v36;
  int32_t* v37;
  iree_host_size_t v38;
  uint8_t* v39;
  iree_host_size_t v40;
  int32_t* v41;
  iree_host_size_t v42;
  uint8_t* v43;
  iree_host_size_t v44;
  int32_t* v45;
  iree_vm_module_t* v46;
  iree_status_t v47;
  bool v48;
  int32_t v49;
  bool v50;
  iree_byte_span_t v51;
  uint8_t* v52;
  iree_vm_ref_t* v53;
  iree_status_t v54;
  iree_status_t v55;
  ;
  v9 = 0;
  v10 = sizeof(iree_vm_ref_t);
  v11 = EMITC_BINARY(+, v9, v10);
  v12 = sizeof(int32_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(int32_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int32_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v9, v18);
  v20 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v21 = EMITC_UNARY(!, v20);
  v22 = vm_cmp_nz_i32(v21);
  v23 = (bool) v22;
  if (v23) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v24 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v8, function, v24);
  v25 = EMITC_STRUCT_MEMBER_ADDRESS(v8, arguments);
  v26 = iree_alloca(v17);
  v27 = (uint8_t*) v26;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data_length, v17);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data, v27);
  memset(v27, 0, v17);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v8, results);
  v29 = iree_alloca(v19);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v19);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v19);
  v31 = EMITC_STRUCT_MEMBER(v8, arguments);
  v32 = EMITC_STRUCT_MEMBER(v31, data);
  v33 = (iree_vm_ref_t*) v32;
  iree_vm_ref_assign(v3, v33);
  v34 = sizeof(iree_vm_ref_t);
  v35 = EMITC_BINARY(+, v32, v34);
  v36 = sizeof(int32_t);
  v37 = &v4;
  memcpy(v35, v37, v36);
  v38 = sizeof(int32_t);
  v39 = EMITC_BINARY(+, v35, v38);
  v40 = sizeof(int32_t);
  v41 = &v5;
  memcpy(v39, v41, v40);
  v42 = sizeof(int32_t);
  v43 = EMITC_BINARY(+, v39, v42);
  v44 = sizeof(int32_t);
  v45 = &v6;
  memcpy(v43, v45, v44);
  v46 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v47 = EMITC_STRUCT_PTR_MEMBER_CALL(v46, begin_call, v46, v1, v8);
  v48 = (bool) v47;
  v49 = vm_cmp_nz_i32(v48);
  v50 = (bool) v49;
  if (v50) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v51 = EMITC_STRUCT_MEMBER(v8, results);
  v52 = EMITC_STRUCT_MEMBER(v51, data);
  v53 = (iree_vm_ref_t*) v52;
  iree_vm_ref_move(v53, v7);
  v54 = iree_ok_status();
  return v54;
  label4:
  iree_vm_ref_release(v3);
  v55 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v55;
  label5:
  iree_vm_ref_release(v3);
  return v47;
}

static iree_status_t module_call_0r_v_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3) {
  iree_vm_function_call_t v4;
  iree_host_size_t v5;
  iree_host_size_t v6;
  iree_host_size_t v7;
  iree_vm_module_t* v8;
  bool v9;
  int32_t v10;
  bool v11;
  iree_vm_function_t v12;
  iree_byte_span_t* v13;
  void* v14;
  uint8_t* v15;
  iree_byte_span_t* v16;
  void* v17;
  uint8_t* v18;
  iree_byte_span_t v19;
  uint8_t* v20;
  iree_vm_ref_t* v21;
  iree_vm_module_t* v22;
  iree_status_t v23;
  bool v24;
  int32_t v25;
  bool v26;
  iree_status_t v27;
  iree_status_t v28;
  ;
  v5 = 0;
  v6 = sizeof(iree_vm_ref_t);
  v7 = EMITC_BINARY(+, v5, v6);
  v8 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v9 = EMITC_UNARY(!, v8);
  v10 = vm_cmp_nz_i32(v9);
  v11 = (bool) v10;
  if (v11) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v12 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v4, function, v12);
  v13 = EMITC_STRUCT_MEMBER_ADDRESS(v4, arguments);
  v14 = iree_alloca(v7);
  v15 = (uint8_t*) v14;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v13, data_length, v7);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v13, data, v15);
  memset(v15, 0, v7);
  v16 = EMITC_STRUCT_MEMBER_ADDRESS(v4, results);
  v17 = iree_alloca(v5);
  v18 = (uint8_t*) v17;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v16, data_length, v5);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v16, data, v18);
  memset(v18, 0, v5);
  v19 = EMITC_STRUCT_MEMBER(v4, arguments);
  v20 = EMITC_STRUCT_MEMBER(v19, data);
  v21 = (iree_vm_ref_t*) v20;
  iree_vm_ref_assign(v3, v21);
  v22 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v23 = EMITC_STRUCT_PTR_MEMBER_CALL(v22, begin_call, v22, v1, v4);
  v24 = (bool) v23;
  v25 = vm_cmp_nz_i32(v24);
  v26 = (bool) v25;
  if (v26) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v27 = iree_ok_status();
  return v27;
  label4:
  iree_vm_ref_release(v3);
  v28 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v28;
  label5:
  iree_vm_ref_release(v3);
  return v23;
}

static iree_status_t module_call_0riii_v_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, int32_t v6) {
  iree_vm_function_call_t v7;
  iree_host_size_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_vm_module_t* v17;
  bool v18;
  int32_t v19;
  bool v20;
  iree_vm_function_t v21;
  iree_byte_span_t* v22;
  void* v23;
  uint8_t* v24;
  iree_byte_span_t* v25;
  void* v26;
  uint8_t* v27;
  iree_byte_span_t v28;
  uint8_t* v29;
  iree_vm_ref_t* v30;
  iree_host_size_t v31;
  uint8_t* v32;
  iree_host_size_t v33;
  int32_t* v34;
  iree_host_size_t v35;
  uint8_t* v36;
  iree_host_size_t v37;
  int32_t* v38;
  iree_host_size_t v39;
  uint8_t* v40;
  iree_host_size_t v41;
  int32_t* v42;
  iree_vm_module_t* v43;
  iree_status_t v44;
  bool v45;
  int32_t v46;
  bool v47;
  iree_status_t v48;
  iree_status_t v49;
  ;
  v8 = 0;
  v9 = sizeof(iree_vm_ref_t);
  v10 = EMITC_BINARY(+, v8, v9);
  v11 = sizeof(int32_t);
  v12 = EMITC_BINARY(+, v10, v11);
  v13 = sizeof(int32_t);
  v14 = EMITC_BINARY(+, v12, v13);
  v15 = sizeof(int32_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v18 = EMITC_UNARY(!, v17);
  v19 = vm_cmp_nz_i32(v18);
  v20 = (bool) v19;
  if (v20) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v21 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v7, function, v21);
  v22 = EMITC_STRUCT_MEMBER_ADDRESS(v7, arguments);
  v23 = iree_alloca(v16);
  v24 = (uint8_t*) v23;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v22, data_length, v16);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v22, data, v24);
  memset(v24, 0, v16);
  v25 = EMITC_STRUCT_MEMBER_ADDRESS(v7, results);
  v26 = iree_alloca(v8);
  v27 = (uint8_t*) v26;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data_length, v8);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data, v27);
  memset(v27, 0, v8);
  v28 = EMITC_STRUCT_MEMBER(v7, arguments);
  v29 = EMITC_STRUCT_MEMBER(v28, data);
  v30 = (iree_vm_ref_t*) v29;
  iree_vm_ref_assign(v3, v30);
  v31 = sizeof(iree_vm_ref_t);
  v32 = EMITC_BINARY(+, v29, v31);
  v33 = sizeof(int32_t);
  v34 = &v4;
  memcpy(v32, v34, v33);
  v35 = sizeof(int32_t);
  v36 = EMITC_BINARY(+, v32, v35);
  v37 = sizeof(int32_t);
  v38 = &v5;
  memcpy(v36, v38, v37);
  v39 = sizeof(int32_t);
  v40 = EMITC_BINARY(+, v36, v39);
  v41 = sizeof(int32_t);
  v42 = &v6;
  memcpy(v40, v42, v41);
  v43 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v44 = EMITC_STRUCT_PTR_MEMBER_CALL(v43, begin_call, v43, v1, v7);
  v45 = (bool) v44;
  v46 = vm_cmp_nz_i32(v45);
  v47 = (bool) v46;
  if (v47) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v48 = iree_ok_status();
  return v48;
  label4:
  iree_vm_ref_release(v3);
  v49 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v49;
  label5:
  iree_vm_ref_release(v3);
  return v44;
}

static iree_status_t module_call_0rriCiirIID_v_2_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int32_t v5, int32_t v6, int32_t v7, int32_t v8, iree_vm_ref_t* v9, int64_t v10, int64_t v11, int32_t v12, int32_t v13, iree_vm_ref_t* v14, int64_t v15, int64_t v16) {
  iree_vm_function_call_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_host_size_t v23;
  iree_host_size_t v24;
  iree_host_size_t v25;
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_host_size_t v29;
  iree_host_size_t v30;
  iree_host_size_t v31;
  iree_host_size_t v32;
  iree_host_size_t v33;
  iree_host_size_t v34;
  iree_host_size_t v35;
  iree_host_size_t v36;
  iree_host_size_t v37;
  iree_host_size_t v38;
  iree_host_size_t v39;
  iree_host_size_t v40;
  iree_host_size_t v41;
  iree_host_size_t v42;
  iree_host_size_t v43;
  iree_host_size_t v44;
  iree_host_size_t v45;
  iree_host_size_t v46;
  iree_vm_module_t* v47;
  bool v48;
  int32_t v49;
  bool v50;
  iree_vm_function_t v51;
  iree_byte_span_t* v52;
  void* v53;
  uint8_t* v54;
  iree_byte_span_t* v55;
  void* v56;
  uint8_t* v57;
  iree_byte_span_t v58;
  uint8_t* v59;
  iree_vm_ref_t* v60;
  iree_host_size_t v61;
  uint8_t* v62;
  iree_vm_ref_t* v63;
  iree_host_size_t v64;
  uint8_t* v65;
  iree_host_size_t v66;
  int32_t* v67;
  iree_host_size_t v68;
  uint8_t* v69;
  iree_host_size_t v70;
  int32_t* v71;
  iree_host_size_t v72;
  uint8_t* v73;
  iree_host_size_t v74;
  int32_t* v75;
  iree_host_size_t v76;
  uint8_t* v77;
  iree_host_size_t v78;
  int32_t* v79;
  iree_host_size_t v80;
  uint8_t* v81;
  iree_vm_ref_t* v82;
  iree_host_size_t v83;
  uint8_t* v84;
  iree_host_size_t v85;
  int64_t* v86;
  iree_host_size_t v87;
  uint8_t* v88;
  iree_host_size_t v89;
  int64_t* v90;
  iree_host_size_t v91;
  uint8_t* v92;
  iree_host_size_t v93;
  int32_t* v94;
  iree_host_size_t v95;
  uint8_t* v96;
  iree_host_size_t v97;
  int32_t* v98;
  iree_host_size_t v99;
  uint8_t* v100;
  iree_vm_ref_t* v101;
  iree_host_size_t v102;
  uint8_t* v103;
  iree_host_size_t v104;
  int64_t* v105;
  iree_host_size_t v106;
  uint8_t* v107;
  iree_host_size_t v108;
  int64_t* v109;
  iree_vm_module_t* v110;
  iree_status_t v111;
  bool v112;
  int32_t v113;
  bool v114;
  iree_status_t v115;
  iree_status_t v116;
  ;
  v18 = 0;
  v19 = sizeof(iree_vm_ref_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(iree_vm_ref_t);
  v22 = EMITC_BINARY(+, v20, v21);
  v23 = sizeof(int32_t);
  v24 = EMITC_BINARY(+, v22, v23);
  v25 = sizeof(int32_t);
  v26 = EMITC_BINARY(+, v24, v25);
  v27 = sizeof(int32_t);
  v28 = EMITC_BINARY(+, v26, v27);
  v29 = sizeof(int32_t);
  v30 = EMITC_BINARY(+, v28, v29);
  v31 = sizeof(iree_vm_ref_t);
  v32 = EMITC_BINARY(+, v30, v31);
  v33 = sizeof(int64_t);
  v34 = EMITC_BINARY(+, v32, v33);
  v35 = sizeof(int64_t);
  v36 = EMITC_BINARY(+, v34, v35);
  v37 = sizeof(int32_t);
  v38 = EMITC_BINARY(+, v36, v37);
  v39 = sizeof(int32_t);
  v40 = EMITC_BINARY(+, v38, v39);
  v41 = sizeof(iree_vm_ref_t);
  v42 = EMITC_BINARY(+, v40, v41);
  v43 = sizeof(int64_t);
  v44 = EMITC_BINARY(+, v42, v43);
  v45 = sizeof(int64_t);
  v46 = EMITC_BINARY(+, v44, v45);
  v47 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v48 = EMITC_UNARY(!, v47);
  v49 = vm_cmp_nz_i32(v48);
  v50 = (bool) v49;
  if (v50) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v51 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v17, function, v51);
  v52 = EMITC_STRUCT_MEMBER_ADDRESS(v17, arguments);
  v53 = iree_alloca(v46);
  v54 = (uint8_t*) v53;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v52, data_length, v46);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v52, data, v54);
  memset(v54, 0, v46);
  v55 = EMITC_STRUCT_MEMBER_ADDRESS(v17, results);
  v56 = iree_alloca(v18);
  v57 = (uint8_t*) v56;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v55, data_length, v18);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v55, data, v57);
  memset(v57, 0, v18);
  v58 = EMITC_STRUCT_MEMBER(v17, arguments);
  v59 = EMITC_STRUCT_MEMBER(v58, data);
  v60 = (iree_vm_ref_t*) v59;
  iree_vm_ref_assign(v3, v60);
  v61 = sizeof(iree_vm_ref_t);
  v62 = EMITC_BINARY(+, v59, v61);
  v63 = (iree_vm_ref_t*) v62;
  iree_vm_ref_assign(v4, v63);
  v64 = sizeof(iree_vm_ref_t);
  v65 = EMITC_BINARY(+, v62, v64);
  v66 = sizeof(int32_t);
  v67 = &v5;
  memcpy(v65, v67, v66);
  v68 = sizeof(int32_t);
  v69 = EMITC_BINARY(+, v65, v68);
  v70 = sizeof(int32_t);
  v71 = &v6;
  memcpy(v69, v71, v70);
  v72 = sizeof(int32_t);
  v73 = EMITC_BINARY(+, v69, v72);
  v74 = sizeof(int32_t);
  v75 = &v7;
  memcpy(v73, v75, v74);
  v76 = sizeof(int32_t);
  v77 = EMITC_BINARY(+, v73, v76);
  v78 = sizeof(int32_t);
  v79 = &v8;
  memcpy(v77, v79, v78);
  v80 = sizeof(int32_t);
  v81 = EMITC_BINARY(+, v77, v80);
  v82 = (iree_vm_ref_t*) v81;
  iree_vm_ref_assign(v9, v82);
  v83 = sizeof(iree_vm_ref_t);
  v84 = EMITC_BINARY(+, v81, v83);
  v85 = sizeof(int64_t);
  v86 = &v10;
  memcpy(v84, v86, v85);
  v87 = sizeof(int64_t);
  v88 = EMITC_BINARY(+, v84, v87);
  v89 = sizeof(int64_t);
  v90 = &v11;
  memcpy(v88, v90, v89);
  v91 = sizeof(int64_t);
  v92 = EMITC_BINARY(+, v88, v91);
  v93 = sizeof(int32_t);
  v94 = &v12;
  memcpy(v92, v94, v93);
  v95 = sizeof(int32_t);
  v96 = EMITC_BINARY(+, v92, v95);
  v97 = sizeof(int32_t);
  v98 = &v13;
  memcpy(v96, v98, v97);
  v99 = sizeof(int32_t);
  v100 = EMITC_BINARY(+, v96, v99);
  v101 = (iree_vm_ref_t*) v100;
  iree_vm_ref_assign(v14, v101);
  v102 = sizeof(iree_vm_ref_t);
  v103 = EMITC_BINARY(+, v100, v102);
  v104 = sizeof(int64_t);
  v105 = &v15;
  memcpy(v103, v105, v104);
  v106 = sizeof(int64_t);
  v107 = EMITC_BINARY(+, v103, v106);
  v108 = sizeof(int64_t);
  v109 = &v16;
  memcpy(v107, v109, v108);
  v110 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v111 = EMITC_STRUCT_PTR_MEMBER_CALL(v110, begin_call, v110, v1, v17);
  v112 = (bool) v111;
  v113 = vm_cmp_nz_i32(v112);
  v114 = (bool) v113;
  if (v114) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v115 = iree_ok_status();
  return v115;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  v116 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v116;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  return v111;
}

static iree_status_t module_call_0rriiii_v_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int32_t v5, int32_t v6, int32_t v7, int32_t v8) {
  iree_vm_function_call_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_vm_module_t* v23;
  bool v24;
  int32_t v25;
  bool v26;
  iree_vm_function_t v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t* v31;
  void* v32;
  uint8_t* v33;
  iree_byte_span_t v34;
  uint8_t* v35;
  iree_vm_ref_t* v36;
  iree_host_size_t v37;
  uint8_t* v38;
  iree_vm_ref_t* v39;
  iree_host_size_t v40;
  uint8_t* v41;
  iree_host_size_t v42;
  int32_t* v43;
  iree_host_size_t v44;
  uint8_t* v45;
  iree_host_size_t v46;
  int32_t* v47;
  iree_host_size_t v48;
  uint8_t* v49;
  iree_host_size_t v50;
  int32_t* v51;
  iree_host_size_t v52;
  uint8_t* v53;
  iree_host_size_t v54;
  int32_t* v55;
  iree_vm_module_t* v56;
  iree_status_t v57;
  bool v58;
  int32_t v59;
  bool v60;
  iree_status_t v61;
  iree_status_t v62;
  ;
  v10 = 0;
  v11 = sizeof(iree_vm_ref_t);
  v12 = EMITC_BINARY(+, v10, v11);
  v13 = sizeof(iree_vm_ref_t);
  v14 = EMITC_BINARY(+, v12, v13);
  v15 = sizeof(int32_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = sizeof(int32_t);
  v18 = EMITC_BINARY(+, v16, v17);
  v19 = sizeof(int32_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(int32_t);
  v22 = EMITC_BINARY(+, v20, v21);
  v23 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v24 = EMITC_UNARY(!, v23);
  v25 = vm_cmp_nz_i32(v24);
  v26 = (bool) v25;
  if (v26) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v27 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v9, function, v27);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v9, arguments);
  v29 = iree_alloca(v22);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v22);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v22);
  v31 = EMITC_STRUCT_MEMBER_ADDRESS(v9, results);
  v32 = iree_alloca(v10);
  v33 = (uint8_t*) v32;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data_length, v10);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data, v33);
  memset(v33, 0, v10);
  v34 = EMITC_STRUCT_MEMBER(v9, arguments);
  v35 = EMITC_STRUCT_MEMBER(v34, data);
  v36 = (iree_vm_ref_t*) v35;
  iree_vm_ref_assign(v3, v36);
  v37 = sizeof(iree_vm_ref_t);
  v38 = EMITC_BINARY(+, v35, v37);
  v39 = (iree_vm_ref_t*) v38;
  iree_vm_ref_assign(v4, v39);
  v40 = sizeof(iree_vm_ref_t);
  v41 = EMITC_BINARY(+, v38, v40);
  v42 = sizeof(int32_t);
  v43 = &v5;
  memcpy(v41, v43, v42);
  v44 = sizeof(int32_t);
  v45 = EMITC_BINARY(+, v41, v44);
  v46 = sizeof(int32_t);
  v47 = &v6;
  memcpy(v45, v47, v46);
  v48 = sizeof(int32_t);
  v49 = EMITC_BINARY(+, v45, v48);
  v50 = sizeof(int32_t);
  v51 = &v7;
  memcpy(v49, v51, v50);
  v52 = sizeof(int32_t);
  v53 = EMITC_BINARY(+, v49, v52);
  v54 = sizeof(int32_t);
  v55 = &v8;
  memcpy(v53, v55, v54);
  v56 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v57 = EMITC_STRUCT_PTR_MEMBER_CALL(v56, begin_call, v56, v1, v9);
  v58 = (bool) v57;
  v59 = vm_cmp_nz_i32(v58);
  v60 = (bool) v59;
  if (v60) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v61 = iree_ok_status();
  return v61;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  v62 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v62;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  return v57;
}

static iree_status_t module_call_0riCiiiD_r_2_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, int32_t v6, int32_t v7, int32_t v8, int32_t v9, int32_t v10, int32_t v11, iree_vm_ref_t* v12) {
  iree_vm_function_call_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_host_size_t v23;
  iree_host_size_t v24;
  iree_host_size_t v25;
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_host_size_t v29;
  iree_host_size_t v30;
  iree_host_size_t v31;
  iree_host_size_t v32;
  iree_host_size_t v33;
  iree_host_size_t v34;
  iree_vm_module_t* v35;
  bool v36;
  int32_t v37;
  bool v38;
  iree_vm_function_t v39;
  iree_byte_span_t* v40;
  void* v41;
  uint8_t* v42;
  iree_byte_span_t* v43;
  void* v44;
  uint8_t* v45;
  iree_byte_span_t v46;
  uint8_t* v47;
  iree_vm_ref_t* v48;
  iree_host_size_t v49;
  uint8_t* v50;
  iree_host_size_t v51;
  int32_t* v52;
  iree_host_size_t v53;
  uint8_t* v54;
  iree_host_size_t v55;
  int32_t* v56;
  iree_host_size_t v57;
  uint8_t* v58;
  iree_host_size_t v59;
  int32_t* v60;
  iree_host_size_t v61;
  uint8_t* v62;
  iree_host_size_t v63;
  int32_t* v64;
  iree_host_size_t v65;
  uint8_t* v66;
  iree_host_size_t v67;
  int32_t* v68;
  iree_host_size_t v69;
  uint8_t* v70;
  iree_host_size_t v71;
  int32_t* v72;
  iree_host_size_t v73;
  uint8_t* v74;
  iree_host_size_t v75;
  int32_t* v76;
  iree_host_size_t v77;
  uint8_t* v78;
  iree_host_size_t v79;
  int32_t* v80;
  iree_vm_module_t* v81;
  iree_status_t v82;
  bool v83;
  int32_t v84;
  bool v85;
  iree_byte_span_t v86;
  uint8_t* v87;
  iree_vm_ref_t* v88;
  iree_status_t v89;
  iree_status_t v90;
  ;
  v14 = 0;
  v15 = sizeof(iree_vm_ref_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = sizeof(int32_t);
  v18 = EMITC_BINARY(+, v16, v17);
  v19 = sizeof(int32_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(int32_t);
  v22 = EMITC_BINARY(+, v20, v21);
  v23 = sizeof(int32_t);
  v24 = EMITC_BINARY(+, v22, v23);
  v25 = sizeof(int32_t);
  v26 = EMITC_BINARY(+, v24, v25);
  v27 = sizeof(int32_t);
  v28 = EMITC_BINARY(+, v26, v27);
  v29 = sizeof(int32_t);
  v30 = EMITC_BINARY(+, v28, v29);
  v31 = sizeof(int32_t);
  v32 = EMITC_BINARY(+, v30, v31);
  v33 = sizeof(iree_vm_ref_t);
  v34 = EMITC_BINARY(+, v14, v33);
  v35 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v36 = EMITC_UNARY(!, v35);
  v37 = vm_cmp_nz_i32(v36);
  v38 = (bool) v37;
  if (v38) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v39 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v13, function, v39);
  v40 = EMITC_STRUCT_MEMBER_ADDRESS(v13, arguments);
  v41 = iree_alloca(v32);
  v42 = (uint8_t*) v41;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data_length, v32);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data, v42);
  memset(v42, 0, v32);
  v43 = EMITC_STRUCT_MEMBER_ADDRESS(v13, results);
  v44 = iree_alloca(v34);
  v45 = (uint8_t*) v44;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v43, data_length, v34);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v43, data, v45);
  memset(v45, 0, v34);
  v46 = EMITC_STRUCT_MEMBER(v13, arguments);
  v47 = EMITC_STRUCT_MEMBER(v46, data);
  v48 = (iree_vm_ref_t*) v47;
  iree_vm_ref_assign(v3, v48);
  v49 = sizeof(iree_vm_ref_t);
  v50 = EMITC_BINARY(+, v47, v49);
  v51 = sizeof(int32_t);
  v52 = &v4;
  memcpy(v50, v52, v51);
  v53 = sizeof(int32_t);
  v54 = EMITC_BINARY(+, v50, v53);
  v55 = sizeof(int32_t);
  v56 = &v5;
  memcpy(v54, v56, v55);
  v57 = sizeof(int32_t);
  v58 = EMITC_BINARY(+, v54, v57);
  v59 = sizeof(int32_t);
  v60 = &v6;
  memcpy(v58, v60, v59);
  v61 = sizeof(int32_t);
  v62 = EMITC_BINARY(+, v58, v61);
  v63 = sizeof(int32_t);
  v64 = &v7;
  memcpy(v62, v64, v63);
  v65 = sizeof(int32_t);
  v66 = EMITC_BINARY(+, v62, v65);
  v67 = sizeof(int32_t);
  v68 = &v8;
  memcpy(v66, v68, v67);
  v69 = sizeof(int32_t);
  v70 = EMITC_BINARY(+, v66, v69);
  v71 = sizeof(int32_t);
  v72 = &v9;
  memcpy(v70, v72, v71);
  v73 = sizeof(int32_t);
  v74 = EMITC_BINARY(+, v70, v73);
  v75 = sizeof(int32_t);
  v76 = &v10;
  memcpy(v74, v76, v75);
  v77 = sizeof(int32_t);
  v78 = EMITC_BINARY(+, v74, v77);
  v79 = sizeof(int32_t);
  v80 = &v11;
  memcpy(v78, v80, v79);
  v81 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v82 = EMITC_STRUCT_PTR_MEMBER_CALL(v81, begin_call, v81, v1, v13);
  v83 = (bool) v82;
  v84 = vm_cmp_nz_i32(v83);
  v85 = (bool) v84;
  if (v85) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v86 = EMITC_STRUCT_MEMBER(v13, results);
  v87 = EMITC_STRUCT_MEMBER(v86, data);
  v88 = (iree_vm_ref_t*) v87;
  iree_vm_ref_move(v88, v12);
  v89 = iree_ok_status();
  return v89;
  label4:
  iree_vm_ref_release(v3);
  v90 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v90;
  label5:
  iree_vm_ref_release(v3);
  return v82;
}

static iree_status_t module_call_0rrr_iI_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, iree_vm_ref_t* v5, int32_t* v6, int64_t* v7) {
  iree_vm_function_call_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_vm_module_t* v20;
  bool v21;
  int32_t v22;
  bool v23;
  iree_vm_function_t v24;
  iree_byte_span_t* v25;
  void* v26;
  uint8_t* v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t v31;
  uint8_t* v32;
  iree_vm_ref_t* v33;
  iree_host_size_t v34;
  uint8_t* v35;
  iree_vm_ref_t* v36;
  iree_host_size_t v37;
  uint8_t* v38;
  iree_vm_ref_t* v39;
  iree_vm_module_t* v40;
  iree_status_t v41;
  bool v42;
  int32_t v43;
  bool v44;
  iree_byte_span_t v45;
  uint8_t* v46;
  iree_host_size_t v47;
  iree_host_size_t v48;
  uint8_t* v49;
  iree_host_size_t v50;
  iree_status_t v51;
  iree_status_t v52;
  ;
  v9 = 0;
  v10 = sizeof(iree_vm_ref_t);
  v11 = EMITC_BINARY(+, v9, v10);
  v12 = sizeof(iree_vm_ref_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(iree_vm_ref_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int32_t);
  v17 = EMITC_BINARY(+, v9, v16);
  v18 = sizeof(int64_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v21 = EMITC_UNARY(!, v20);
  v22 = vm_cmp_nz_i32(v21);
  v23 = (bool) v22;
  if (v23) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v24 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v8, function, v24);
  v25 = EMITC_STRUCT_MEMBER_ADDRESS(v8, arguments);
  v26 = iree_alloca(v15);
  v27 = (uint8_t*) v26;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data_length, v15);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data, v27);
  memset(v27, 0, v15);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v8, results);
  v29 = iree_alloca(v19);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v19);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v19);
  v31 = EMITC_STRUCT_MEMBER(v8, arguments);
  v32 = EMITC_STRUCT_MEMBER(v31, data);
  v33 = (iree_vm_ref_t*) v32;
  iree_vm_ref_assign(v3, v33);
  v34 = sizeof(iree_vm_ref_t);
  v35 = EMITC_BINARY(+, v32, v34);
  v36 = (iree_vm_ref_t*) v35;
  iree_vm_ref_assign(v4, v36);
  v37 = sizeof(iree_vm_ref_t);
  v38 = EMITC_BINARY(+, v35, v37);
  v39 = (iree_vm_ref_t*) v38;
  iree_vm_ref_assign(v5, v39);
  v40 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v41 = EMITC_STRUCT_PTR_MEMBER_CALL(v40, begin_call, v40, v1, v8);
  v42 = (bool) v41;
  v43 = vm_cmp_nz_i32(v42);
  v44 = (bool) v43;
  if (v44) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v45 = EMITC_STRUCT_MEMBER(v8, results);
  v46 = EMITC_STRUCT_MEMBER(v45, data);
  v47 = sizeof(int32_t);
  memcpy(v6, v46, v47);
  v48 = sizeof(int32_t);
  v49 = EMITC_BINARY(+, v46, v48);
  v50 = sizeof(int64_t);
  memcpy(v7, v49, v50);
  v51 = iree_ok_status();
  return v51;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  v52 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v52;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  return v41;
}

static iree_status_t module_call_0rIrrCrD_v_1_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int64_t v4, iree_vm_ref_t* v5, iree_vm_ref_t* v6, int32_t v7, iree_vm_ref_t* v8) {
  iree_vm_function_call_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_vm_module_t* v23;
  bool v24;
  int32_t v25;
  bool v26;
  iree_vm_function_t v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t* v31;
  void* v32;
  uint8_t* v33;
  iree_byte_span_t v34;
  uint8_t* v35;
  iree_vm_ref_t* v36;
  iree_host_size_t v37;
  uint8_t* v38;
  iree_host_size_t v39;
  int64_t* v40;
  iree_host_size_t v41;
  uint8_t* v42;
  iree_vm_ref_t* v43;
  iree_host_size_t v44;
  uint8_t* v45;
  iree_vm_ref_t* v46;
  iree_host_size_t v47;
  uint8_t* v48;
  iree_host_size_t v49;
  int32_t* v50;
  iree_host_size_t v51;
  uint8_t* v52;
  iree_vm_ref_t* v53;
  iree_vm_module_t* v54;
  iree_status_t v55;
  bool v56;
  int32_t v57;
  bool v58;
  iree_status_t v59;
  iree_status_t v60;
  ;
  v10 = 0;
  v11 = sizeof(iree_vm_ref_t);
  v12 = EMITC_BINARY(+, v10, v11);
  v13 = sizeof(int64_t);
  v14 = EMITC_BINARY(+, v12, v13);
  v15 = sizeof(iree_vm_ref_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = sizeof(iree_vm_ref_t);
  v18 = EMITC_BINARY(+, v16, v17);
  v19 = sizeof(int32_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(iree_vm_ref_t);
  v22 = EMITC_BINARY(+, v20, v21);
  v23 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v24 = EMITC_UNARY(!, v23);
  v25 = vm_cmp_nz_i32(v24);
  v26 = (bool) v25;
  if (v26) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v27 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v9, function, v27);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v9, arguments);
  v29 = iree_alloca(v22);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v22);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v22);
  v31 = EMITC_STRUCT_MEMBER_ADDRESS(v9, results);
  v32 = iree_alloca(v10);
  v33 = (uint8_t*) v32;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data_length, v10);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data, v33);
  memset(v33, 0, v10);
  v34 = EMITC_STRUCT_MEMBER(v9, arguments);
  v35 = EMITC_STRUCT_MEMBER(v34, data);
  v36 = (iree_vm_ref_t*) v35;
  iree_vm_ref_assign(v3, v36);
  v37 = sizeof(iree_vm_ref_t);
  v38 = EMITC_BINARY(+, v35, v37);
  v39 = sizeof(int64_t);
  v40 = &v4;
  memcpy(v38, v40, v39);
  v41 = sizeof(int64_t);
  v42 = EMITC_BINARY(+, v38, v41);
  v43 = (iree_vm_ref_t*) v42;
  iree_vm_ref_assign(v5, v43);
  v44 = sizeof(iree_vm_ref_t);
  v45 = EMITC_BINARY(+, v42, v44);
  v46 = (iree_vm_ref_t*) v45;
  iree_vm_ref_assign(v6, v46);
  v47 = sizeof(iree_vm_ref_t);
  v48 = EMITC_BINARY(+, v45, v47);
  v49 = sizeof(int32_t);
  v50 = &v7;
  memcpy(v48, v50, v49);
  v51 = sizeof(int32_t);
  v52 = EMITC_BINARY(+, v48, v51);
  v53 = (iree_vm_ref_t*) v52;
  iree_vm_ref_assign(v8, v53);
  v54 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v55 = EMITC_STRUCT_PTR_MEMBER_CALL(v54, begin_call, v54, v1, v9);
  v56 = (bool) v55;
  v57 = vm_cmp_nz_i32(v56);
  v58 = (bool) v57;
  if (v58) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v59 = iree_ok_status();
  return v59;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v8);
  v60 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v60;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v8);
  return v55;
}

static iree_status_t module_call_0rrrrCrD_r_1_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, iree_vm_ref_t* v5, iree_vm_ref_t* v6, int32_t v7, iree_vm_ref_t* v8, iree_vm_ref_t* v9) {
  iree_vm_function_call_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_host_size_t v20;
  iree_host_size_t v21;
  iree_host_size_t v22;
  iree_host_size_t v23;
  iree_host_size_t v24;
  iree_host_size_t v25;
  iree_vm_module_t* v26;
  bool v27;
  int32_t v28;
  bool v29;
  iree_vm_function_t v30;
  iree_byte_span_t* v31;
  void* v32;
  uint8_t* v33;
  iree_byte_span_t* v34;
  void* v35;
  uint8_t* v36;
  iree_byte_span_t v37;
  uint8_t* v38;
  iree_vm_ref_t* v39;
  iree_host_size_t v40;
  uint8_t* v41;
  iree_vm_ref_t* v42;
  iree_host_size_t v43;
  uint8_t* v44;
  iree_vm_ref_t* v45;
  iree_host_size_t v46;
  uint8_t* v47;
  iree_vm_ref_t* v48;
  iree_host_size_t v49;
  uint8_t* v50;
  iree_host_size_t v51;
  int32_t* v52;
  iree_host_size_t v53;
  uint8_t* v54;
  iree_vm_ref_t* v55;
  iree_vm_module_t* v56;
  iree_status_t v57;
  bool v58;
  int32_t v59;
  bool v60;
  iree_byte_span_t v61;
  uint8_t* v62;
  iree_vm_ref_t* v63;
  iree_status_t v64;
  iree_status_t v65;
  ;
  v11 = 0;
  v12 = sizeof(iree_vm_ref_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(iree_vm_ref_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(iree_vm_ref_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = sizeof(int32_t);
  v21 = EMITC_BINARY(+, v19, v20);
  v22 = sizeof(iree_vm_ref_t);
  v23 = EMITC_BINARY(+, v21, v22);
  v24 = sizeof(iree_vm_ref_t);
  v25 = EMITC_BINARY(+, v11, v24);
  v26 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v27 = EMITC_UNARY(!, v26);
  v28 = vm_cmp_nz_i32(v27);
  v29 = (bool) v28;
  if (v29) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v30 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v10, function, v30);
  v31 = EMITC_STRUCT_MEMBER_ADDRESS(v10, arguments);
  v32 = iree_alloca(v23);
  v33 = (uint8_t*) v32;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data_length, v23);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data, v33);
  memset(v33, 0, v23);
  v34 = EMITC_STRUCT_MEMBER_ADDRESS(v10, results);
  v35 = iree_alloca(v25);
  v36 = (uint8_t*) v35;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v34, data_length, v25);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v34, data, v36);
  memset(v36, 0, v25);
  v37 = EMITC_STRUCT_MEMBER(v10, arguments);
  v38 = EMITC_STRUCT_MEMBER(v37, data);
  v39 = (iree_vm_ref_t*) v38;
  iree_vm_ref_assign(v3, v39);
  v40 = sizeof(iree_vm_ref_t);
  v41 = EMITC_BINARY(+, v38, v40);
  v42 = (iree_vm_ref_t*) v41;
  iree_vm_ref_assign(v4, v42);
  v43 = sizeof(iree_vm_ref_t);
  v44 = EMITC_BINARY(+, v41, v43);
  v45 = (iree_vm_ref_t*) v44;
  iree_vm_ref_assign(v5, v45);
  v46 = sizeof(iree_vm_ref_t);
  v47 = EMITC_BINARY(+, v44, v46);
  v48 = (iree_vm_ref_t*) v47;
  iree_vm_ref_assign(v6, v48);
  v49 = sizeof(iree_vm_ref_t);
  v50 = EMITC_BINARY(+, v47, v49);
  v51 = sizeof(int32_t);
  v52 = &v7;
  memcpy(v50, v52, v51);
  v53 = sizeof(int32_t);
  v54 = EMITC_BINARY(+, v50, v53);
  v55 = (iree_vm_ref_t*) v54;
  iree_vm_ref_assign(v8, v55);
  v56 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v57 = EMITC_STRUCT_PTR_MEMBER_CALL(v56, begin_call, v56, v1, v10);
  v58 = (bool) v57;
  v59 = vm_cmp_nz_i32(v58);
  v60 = (bool) v59;
  if (v60) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v61 = EMITC_STRUCT_MEMBER(v10, results);
  v62 = EMITC_STRUCT_MEMBER(v61, data);
  v63 = (iree_vm_ref_t*) v62;
  iree_vm_ref_move(v63, v9);
  v64 = iree_ok_status();
  return v64;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v8);
  v65 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v65;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v8);
  return v57;
}

static iree_status_t module_call_0ri_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, iree_vm_ref_t* v5) {
  iree_vm_function_call_t v6;
  iree_host_size_t v7;
  iree_host_size_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_vm_module_t* v14;
  bool v15;
  int32_t v16;
  bool v17;
  iree_vm_function_t v18;
  iree_byte_span_t* v19;
  void* v20;
  uint8_t* v21;
  iree_byte_span_t* v22;
  void* v23;
  uint8_t* v24;
  iree_byte_span_t v25;
  uint8_t* v26;
  iree_vm_ref_t* v27;
  iree_host_size_t v28;
  uint8_t* v29;
  iree_host_size_t v30;
  int32_t* v31;
  iree_vm_module_t* v32;
  iree_status_t v33;
  bool v34;
  int32_t v35;
  bool v36;
  iree_byte_span_t v37;
  uint8_t* v38;
  iree_vm_ref_t* v39;
  iree_status_t v40;
  iree_status_t v41;
  ;
  v7 = 0;
  v8 = sizeof(iree_vm_ref_t);
  v9 = EMITC_BINARY(+, v7, v8);
  v10 = sizeof(int32_t);
  v11 = EMITC_BINARY(+, v9, v10);
  v12 = sizeof(iree_vm_ref_t);
  v13 = EMITC_BINARY(+, v7, v12);
  v14 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v15 = EMITC_UNARY(!, v14);
  v16 = vm_cmp_nz_i32(v15);
  v17 = (bool) v16;
  if (v17) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v18 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v6, function, v18);
  v19 = EMITC_STRUCT_MEMBER_ADDRESS(v6, arguments);
  v20 = iree_alloca(v11);
  v21 = (uint8_t*) v20;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v19, data_length, v11);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v19, data, v21);
  memset(v21, 0, v11);
  v22 = EMITC_STRUCT_MEMBER_ADDRESS(v6, results);
  v23 = iree_alloca(v13);
  v24 = (uint8_t*) v23;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v22, data_length, v13);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v22, data, v24);
  memset(v24, 0, v13);
  v25 = EMITC_STRUCT_MEMBER(v6, arguments);
  v26 = EMITC_STRUCT_MEMBER(v25, data);
  v27 = (iree_vm_ref_t*) v26;
  iree_vm_ref_assign(v3, v27);
  v28 = sizeof(iree_vm_ref_t);
  v29 = EMITC_BINARY(+, v26, v28);
  v30 = sizeof(int32_t);
  v31 = &v4;
  memcpy(v29, v31, v30);
  v32 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v33 = EMITC_STRUCT_PTR_MEMBER_CALL(v32, begin_call, v32, v1, v6);
  v34 = (bool) v33;
  v35 = vm_cmp_nz_i32(v34);
  v36 = (bool) v35;
  if (v36) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v37 = EMITC_STRUCT_MEMBER(v6, results);
  v38 = EMITC_STRUCT_MEMBER(v37, data);
  v39 = (iree_vm_ref_t*) v38;
  iree_vm_ref_move(v39, v5);
  v40 = iree_ok_status();
  return v40;
  label4:
  iree_vm_ref_release(v3);
  v41 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v41;
  label5:
  iree_vm_ref_release(v3);
  return v33;
}

static iree_status_t module_call_0iCrD_i_1_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, int32_t v3, int32_t v4, iree_vm_ref_t* v5, int32_t* v6) {
  iree_vm_function_call_t v7;
  iree_host_size_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_vm_module_t* v17;
  bool v18;
  int32_t v19;
  bool v20;
  iree_vm_function_t v21;
  iree_byte_span_t* v22;
  void* v23;
  uint8_t* v24;
  iree_byte_span_t* v25;
  void* v26;
  uint8_t* v27;
  iree_byte_span_t v28;
  uint8_t* v29;
  iree_host_size_t v30;
  int32_t* v31;
  iree_host_size_t v32;
  uint8_t* v33;
  iree_host_size_t v34;
  int32_t* v35;
  iree_host_size_t v36;
  uint8_t* v37;
  iree_vm_ref_t* v38;
  iree_vm_module_t* v39;
  iree_status_t v40;
  bool v41;
  int32_t v42;
  bool v43;
  iree_byte_span_t v44;
  uint8_t* v45;
  iree_host_size_t v46;
  iree_status_t v47;
  iree_status_t v48;
  ;
  v8 = 0;
  v9 = sizeof(int32_t);
  v10 = EMITC_BINARY(+, v8, v9);
  v11 = sizeof(int32_t);
  v12 = EMITC_BINARY(+, v10, v11);
  v13 = sizeof(iree_vm_ref_t);
  v14 = EMITC_BINARY(+, v12, v13);
  v15 = sizeof(int32_t);
  v16 = EMITC_BINARY(+, v8, v15);
  v17 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v18 = EMITC_UNARY(!, v17);
  v19 = vm_cmp_nz_i32(v18);
  v20 = (bool) v19;
  if (v20) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v21 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v7, function, v21);
  v22 = EMITC_STRUCT_MEMBER_ADDRESS(v7, arguments);
  v23 = iree_alloca(v14);
  v24 = (uint8_t*) v23;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v22, data_length, v14);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v22, data, v24);
  memset(v24, 0, v14);
  v25 = EMITC_STRUCT_MEMBER_ADDRESS(v7, results);
  v26 = iree_alloca(v16);
  v27 = (uint8_t*) v26;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data_length, v16);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data, v27);
  memset(v27, 0, v16);
  v28 = EMITC_STRUCT_MEMBER(v7, arguments);
  v29 = EMITC_STRUCT_MEMBER(v28, data);
  v30 = sizeof(int32_t);
  v31 = &v3;
  memcpy(v29, v31, v30);
  v32 = sizeof(int32_t);
  v33 = EMITC_BINARY(+, v29, v32);
  v34 = sizeof(int32_t);
  v35 = &v4;
  memcpy(v33, v35, v34);
  v36 = sizeof(int32_t);
  v37 = EMITC_BINARY(+, v33, v36);
  v38 = (iree_vm_ref_t*) v37;
  iree_vm_ref_assign(v5, v38);
  v39 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v40 = EMITC_STRUCT_PTR_MEMBER_CALL(v39, begin_call, v39, v1, v7);
  v41 = (bool) v40;
  v42 = vm_cmp_nz_i32(v41);
  v43 = (bool) v42;
  if (v43) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v44 = EMITC_STRUCT_MEMBER(v7, results);
  v45 = EMITC_STRUCT_MEMBER(v44, data);
  v46 = sizeof(int32_t);
  memcpy(v6, v45, v46);
  v47 = iree_ok_status();
  return v47;
  label4:
  iree_vm_ref_release(v5);
  v48 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v48;
  label5:
  iree_vm_ref_release(v5);
  return v40;
}

static iree_status_t module_call_0riCrD_r_1_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, iree_vm_ref_t* v6, iree_vm_ref_t* v7) {
  iree_vm_function_call_t v8;
  iree_host_size_t v9;
  iree_host_size_t v10;
  iree_host_size_t v11;
  iree_host_size_t v12;
  iree_host_size_t v13;
  iree_host_size_t v14;
  iree_host_size_t v15;
  iree_host_size_t v16;
  iree_host_size_t v17;
  iree_host_size_t v18;
  iree_host_size_t v19;
  iree_vm_module_t* v20;
  bool v21;
  int32_t v22;
  bool v23;
  iree_vm_function_t v24;
  iree_byte_span_t* v25;
  void* v26;
  uint8_t* v27;
  iree_byte_span_t* v28;
  void* v29;
  uint8_t* v30;
  iree_byte_span_t v31;
  uint8_t* v32;
  iree_vm_ref_t* v33;
  iree_host_size_t v34;
  uint8_t* v35;
  iree_host_size_t v36;
  int32_t* v37;
  iree_host_size_t v38;
  uint8_t* v39;
  iree_host_size_t v40;
  int32_t* v41;
  iree_host_size_t v42;
  uint8_t* v43;
  iree_vm_ref_t* v44;
  iree_vm_module_t* v45;
  iree_status_t v46;
  bool v47;
  int32_t v48;
  bool v49;
  iree_byte_span_t v50;
  uint8_t* v51;
  iree_vm_ref_t* v52;
  iree_status_t v53;
  iree_status_t v54;
  ;
  v9 = 0;
  v10 = sizeof(iree_vm_ref_t);
  v11 = EMITC_BINARY(+, v9, v10);
  v12 = sizeof(int32_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(int32_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(iree_vm_ref_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v9, v18);
  v20 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v21 = EMITC_UNARY(!, v20);
  v22 = vm_cmp_nz_i32(v21);
  v23 = (bool) v22;
  if (v23) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v24 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v8, function, v24);
  v25 = EMITC_STRUCT_MEMBER_ADDRESS(v8, arguments);
  v26 = iree_alloca(v17);
  v27 = (uint8_t*) v26;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data_length, v17);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v25, data, v27);
  memset(v27, 0, v17);
  v28 = EMITC_STRUCT_MEMBER_ADDRESS(v8, results);
  v29 = iree_alloca(v19);
  v30 = (uint8_t*) v29;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data_length, v19);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v28, data, v30);
  memset(v30, 0, v19);
  v31 = EMITC_STRUCT_MEMBER(v8, arguments);
  v32 = EMITC_STRUCT_MEMBER(v31, data);
  v33 = (iree_vm_ref_t*) v32;
  iree_vm_ref_assign(v3, v33);
  v34 = sizeof(iree_vm_ref_t);
  v35 = EMITC_BINARY(+, v32, v34);
  v36 = sizeof(int32_t);
  v37 = &v4;
  memcpy(v35, v37, v36);
  v38 = sizeof(int32_t);
  v39 = EMITC_BINARY(+, v35, v38);
  v40 = sizeof(int32_t);
  v41 = &v5;
  memcpy(v39, v41, v40);
  v42 = sizeof(int32_t);
  v43 = EMITC_BINARY(+, v39, v42);
  v44 = (iree_vm_ref_t*) v43;
  iree_vm_ref_assign(v6, v44);
  v45 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v46 = EMITC_STRUCT_PTR_MEMBER_CALL(v45, begin_call, v45, v1, v8);
  v47 = (bool) v46;
  v48 = vm_cmp_nz_i32(v47);
  v49 = (bool) v48;
  if (v49) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v50 = EMITC_STRUCT_MEMBER(v8, results);
  v51 = EMITC_STRUCT_MEMBER(v50, data);
  v52 = (iree_vm_ref_t*) v51;
  iree_vm_ref_move(v52, v7);
  v53 = iree_ok_status();
  return v53;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v6);
  v54 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v54;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v6);
  return v46;
}

static iree_status_t module_abs(iree_vm_stack_t* v1, module_t* v2, module_state_t* v3, iree_vm_ref_t* v4, iree_vm_ref_t* v5) {
  int32_t v6;
  int64_t v7;
  int32_t v8;
  int32_t v9;
  int32_t v10;
  int64_t v11;
  int32_t v12;
  int32_t v13;
  int32_t v14;
  int32_t v15;
  int32_t v16;
  int32_t v17;
  int64_t v18;
  int32_t v19;
  int32_t v20;
  int32_t v21;
  iree_vm_ref_t v22;
  iree_vm_ref_t* v23;
  iree_host_size_t v24;
  iree_vm_ref_t v25;
  iree_vm_ref_t* v26;
  iree_host_size_t v27;
  iree_vm_ref_t v28;
  iree_vm_ref_t* v29;
  iree_host_size_t v30;
  iree_vm_ref_t v31;
  iree_vm_ref_t* v32;
  iree_host_size_t v33;
  iree_vm_ref_t v34;
  iree_vm_ref_t* v35;
  iree_host_size_t v36;
  iree_vm_ref_t v37;
  iree_vm_ref_t* v38;
  iree_host_size_t v39;
  uint8_t* v40;
  int32_t v41;
  iree_vm_ref_t* v42;
  iree_vm_ref_t* v43;
  iree_vm_type_def_t v44;
  iree_vm_type_def_t* v45;
  iree_host_size_t v46;
  iree_string_view_t v47;
  const iree_vm_ref_type_descriptor_t* v48;
  iree_vm_ref_type_t v49;
  iree_vm_ref_type_t v50;
  iree_status_t v51;
  bool v52;
  int32_t v53;
  bool v54;
  iree_vm_ref_t* v55;
  iree_vm_ref_t* v56;
  iree_vm_type_def_t v57;
  iree_vm_type_def_t* v58;
  iree_host_size_t v59;
  iree_string_view_t v60;
  const iree_vm_ref_type_descriptor_t* v61;
  iree_vm_ref_type_t v62;
  iree_vm_ref_type_t v63;
  iree_status_t v64;
  bool v65;
  int32_t v66;
  bool v67;
  iree_vm_buffer_t* v68;
  iree_vm_buffer_t* v69;
  iree_vm_ref_type_t v70;
  iree_status_t v71;
  bool v72;
  int32_t v73;
  bool v74;
  iree_vm_function_t* v75;
  iree_vm_function_t* v76;
  iree_vm_ref_t v77;
  iree_vm_ref_t* v78;
  iree_host_size_t v79;
  iree_vm_ref_t v80;
  iree_vm_ref_t* v81;
  iree_host_size_t v82;
  iree_status_t v83;
  bool v84;
  int32_t v85;
  bool v86;
  iree_vm_function_t* v87;
  iree_vm_function_t* v88;
  iree_vm_ref_t v89;
  iree_vm_ref_t* v90;
  iree_host_size_t v91;
  iree_status_t v92;
  bool v93;
  int32_t v94;
  bool v95;
  iree_vm_function_t* v96;
  iree_vm_function_t* v97;
  iree_status_t v98;
  bool v99;
  int32_t v100;
  bool v101;
  iree_vm_function_t* v102;
  iree_vm_function_t* v103;
  iree_vm_ref_t v104;
  iree_vm_ref_t* v105;
  iree_host_size_t v106;
  iree_status_t v107;
  bool v108;
  int32_t v109;
  bool v110;
  iree_vm_function_t* v111;
  iree_vm_function_t* v112;
  iree_vm_ref_t v113;
  iree_vm_ref_t* v114;
  iree_host_size_t v115;
  iree_vm_ref_t v116;
  iree_vm_ref_t* v117;
  iree_host_size_t v118;
  iree_vm_ref_t v119;
  iree_vm_ref_t* v120;
  iree_host_size_t v121;
  iree_status_t v122;
  bool v123;
  int32_t v124;
  bool v125;
  iree_vm_function_t* v126;
  iree_vm_function_t* v127;
  iree_vm_ref_t v128;
  iree_vm_ref_t* v129;
  iree_host_size_t v130;
  iree_status_t v131;
  bool v132;
  int32_t v133;
  bool v134;
  iree_vm_function_t* v135;
  iree_vm_function_t* v136;
  iree_vm_ref_t v137;
  iree_vm_ref_t* v138;
  iree_host_size_t v139;
  iree_status_t v140;
  bool v141;
  int32_t v142;
  bool v143;
  int32_t v144;
  bool v145;
  iree_vm_function_t* v146;
  iree_vm_function_t* v147;
  iree_vm_ref_t v148;
  iree_vm_ref_t* v149;
  iree_host_size_t v150;
  iree_vm_ref_t v151;
  iree_vm_ref_t* v152;
  iree_host_size_t v153;
  iree_vm_ref_t v154;
  iree_vm_ref_t* v155;
  iree_host_size_t v156;
  iree_vm_ref_t v157;
  iree_vm_ref_t* v158;
  iree_host_size_t v159;
  iree_status_t v160;
  bool v161;
  int32_t v162;
  bool v163;
  iree_vm_function_t* v164;
  iree_vm_function_t* v165;
  iree_vm_ref_t v166;
  iree_vm_ref_t* v167;
  iree_host_size_t v168;
  iree_vm_ref_t v169;
  iree_vm_ref_t* v170;
  iree_host_size_t v171;
  iree_status_t v172;
  bool v173;
  int32_t v174;
  bool v175;
  iree_vm_function_t* v176;
  iree_vm_function_t* v177;
  iree_vm_ref_t v178;
  iree_vm_ref_t* v179;
  iree_host_size_t v180;
  iree_status_t v181;
  bool v182;
  int32_t v183;
  bool v184;
  iree_vm_function_t* v185;
  iree_vm_function_t* v186;
  iree_vm_ref_t v187;
  iree_vm_ref_t* v188;
  iree_host_size_t v189;
  iree_status_t v190;
  bool v191;
  int32_t v192;
  bool v193;
  iree_vm_function_t* v194;
  iree_vm_function_t* v195;
  iree_vm_ref_t v196;
  iree_vm_ref_t* v197;
  iree_host_size_t v198;
  iree_status_t v199;
  bool v200;
  int32_t v201;
  bool v202;
  iree_vm_function_t* v203;
  iree_vm_function_t* v204;
  iree_vm_ref_t v205;
  iree_vm_ref_t* v206;
  iree_host_size_t v207;
  iree_vm_ref_t v208;
  iree_vm_ref_t* v209;
  iree_host_size_t v210;
  iree_vm_ref_t v211;
  iree_vm_ref_t* v212;
  iree_host_size_t v213;
  iree_vm_ref_t v214;
  iree_vm_ref_t* v215;
  iree_host_size_t v216;
  iree_status_t v217;
  bool v218;
  int32_t v219;
  bool v220;
  iree_vm_function_t* v221;
  iree_vm_function_t* v222;
  iree_vm_ref_t v223;
  iree_vm_ref_t* v224;
  iree_host_size_t v225;
  int32_t v226;
  int32_t* v227;
  iree_status_t v228;
  bool v229;
  int32_t v230;
  bool v231;
  int32_t v232;
  bool v233;
  iree_vm_function_t* v234;
  iree_vm_function_t* v235;
  iree_vm_ref_t v236;
  iree_vm_ref_t* v237;
  iree_host_size_t v238;
  iree_status_t v239;
  bool v240;
  int32_t v241;
  bool v242;
  iree_vm_ref_t v243;
  iree_vm_ref_t* v244;
  iree_host_size_t v245;
  iree_status_t v246;
  bool v247;
  bool v248;
  iree_status_t v249;
  iree_string_view_t v250;
  iree_host_size_t v251;
  int32_t v252;
  const char* v253;
  iree_status_t v254;
  iree_string_view_t v255;
  iree_host_size_t v256;
  int32_t v257;
  const char* v258;
  iree_status_t v259;
  iree_status_t v260;
  v6 = -1;
  v7 = -1;
  v8 = 0;
  v9 = 553648160;
  v10 = 1;
  v11 = 4;
  v12 = 16;
  v13 = 3075;
  v14 = 50;
  v15 = 150998019;
  v16 = 17;
  v17 = 3;
  v18 = 0;
  v19 = 28;
  v20 = 13;
  v21 = 2;
  ;
  v23 = &v22;
  v24 = sizeof(iree_vm_ref_t);
  memset(v23, 0, v24);
  ;
  v26 = &v25;
  v27 = sizeof(iree_vm_ref_t);
  memset(v26, 0, v27);
  ;
  v29 = &v28;
  v30 = sizeof(iree_vm_ref_t);
  memset(v29, 0, v30);
  ;
  v32 = &v31;
  v33 = sizeof(iree_vm_ref_t);
  memset(v32, 0, v33);
  ;
  v35 = &v34;
  v36 = sizeof(iree_vm_ref_t);
  memset(v35, 0, v36);
  ;
  v38 = &v37;
  v39 = sizeof(iree_vm_ref_t);
  memset(v38, 0, v39);
  iree_vm_ref_release(v5);
  v40 = EMITC_STRUCT_PTR_MEMBER(v3, rwdata);
  v41 = vm_global_load_i32(v40, 0);
  v42 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v43 = EMITC_ARRAY_ELEMENT_ADDRESS(v42, 0);
  ;
  v45 = &v44;
  v46 = sizeof(iree_vm_type_def_t);
  memset(v45, 0, v46);
  v47 = iree_make_cstring_view("hal.pipeline_layout");
  v48 = iree_vm_ref_lookup_registered_type(v47);
  v49 = EMITC_STRUCT_PTR_MEMBER(v48, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v44, ref_type, v49);
  v50 = EMITC_STRUCT_PTR_MEMBER(v45, ref_type);
  v51 = iree_vm_ref_retain_or_move_checked(false, v43, v50, v26);
  v52 = (bool) v51;
  v53 = vm_cmp_nz_i32(v52);
  v54 = (bool) v53;
  if (v54) {
  v260 = v51;
  goto label24;
  } else {
  goto label2;
  }
  label2:
  v55 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v56 = EMITC_ARRAY_ELEMENT_ADDRESS(v55, 1);
  ;
  v58 = &v57;
  v59 = sizeof(iree_vm_type_def_t);
  memset(v58, 0, v59);
  v60 = iree_make_cstring_view("hal.executable");
  v61 = iree_vm_ref_lookup_registered_type(v60);
  v62 = EMITC_STRUCT_PTR_MEMBER(v61, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v57, ref_type, v62);
  v63 = EMITC_STRUCT_PTR_MEMBER(v58, ref_type);
  v64 = iree_vm_ref_retain_or_move_checked(false, v56, v63, v29);
  v65 = (bool) v64;
  v66 = vm_cmp_nz_i32(v65);
  v67 = (bool) v66;
  if (v67) {
  v260 = v64;
  goto label24;
  } else {
  goto label3;
  }
  label3:
  v68 = EMITC_STRUCT_PTR_MEMBER(v3, rodata_buffers);
  v69 = EMITC_ARRAY_ELEMENT_ADDRESS(v68, 3);
  v70 = iree_vm_buffer_type_id();
  v71 = iree_vm_ref_wrap_retain(v69, v70, v32);
  v72 = (bool) v71;
  v73 = vm_cmp_nz_i32(v72);
  v74 = (bool) v73;
  if (v74) {
  v260 = v71;
  goto label24;
  } else {
  goto label4;
  }
  label4:
  v75 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v76 = EMITC_ARRAY_ELEMENT_ADDRESS(v75, 4);
  ;
  v78 = &v77;
  v79 = sizeof(iree_vm_ref_t);
  memset(v78, 0, v79);
  iree_vm_ref_assign(v4, v78);
  ;
  v81 = &v80;
  v82 = sizeof(iree_vm_ref_t);
  memset(v81, 0, v82);
  iree_vm_ref_assign(v32, v81);
  v83 = module_call_0rriiCID_v_0_import_shim(v1, v76, v78, v81, v9, v10, v8);
  v84 = (bool) v83;
  v85 = vm_cmp_nz_i32(v84);
  v86 = (bool) v85;
  if (v86) {
  v260 = v83;
  goto label24;
  } else {
  goto label5;
  }
  label5:
  v87 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v88 = EMITC_ARRAY_ELEMENT_ADDRESS(v87, 5);
  ;
  v90 = &v89;
  v91 = sizeof(iree_vm_ref_t);
  memset(v90, 0, v91);
  iree_vm_ref_assign(v4, v90);
  v92 = module_call_0r_r_import_shim(v1, v88, v90, v4);
  v93 = (bool) v92;
  v94 = vm_cmp_nz_i32(v93);
  v95 = (bool) v94;
  if (v95) {
  v260 = v92;
  goto label24;
  } else {
  goto label6;
  }
  label6:
  v96 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v97 = EMITC_ARRAY_ELEMENT_ADDRESS(v96, 0);
  v98 = module_call_0v_r_import_shim(v1, v97, v35);
  v99 = (bool) v98;
  v100 = vm_cmp_nz_i32(v99);
  v101 = (bool) v100;
  if (v101) {
  v260 = v98;
  goto label24;
  } else {
  goto label7;
  }
  label7:
  v102 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v103 = EMITC_ARRAY_ELEMENT_ADDRESS(v102, 12);
  ;
  v105 = &v104;
  v106 = sizeof(iree_vm_ref_t);
  memset(v105, 0, v106);
  iree_vm_ref_assign(v35, v105);
  v107 = module_call_0r_r_import_shim(v1, v103, v105, v38);
  v108 = (bool) v107;
  v109 = vm_cmp_nz_i32(v108);
  v110 = (bool) v109;
  if (v110) {
  v260 = v107;
  goto label24;
  } else {
  goto label8;
  }
  label8:
  v111 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v112 = EMITC_ARRAY_ELEMENT_ADDRESS(v111, 2);
  ;
  v114 = &v113;
  v115 = sizeof(iree_vm_ref_t);
  memset(v114, 0, v115);
  iree_vm_ref_assign(v4, v114);
  ;
  v117 = &v116;
  v118 = sizeof(iree_vm_ref_t);
  memset(v117, 0, v118);
  iree_vm_ref_assign(v32, v117);
  ;
  v120 = &v119;
  v121 = sizeof(iree_vm_ref_t);
  memset(v120, 0, v121);
  iree_vm_ref_assign(v38, v120);
  v122 = module_call_0rrrIii_v_import_shim(v1, v112, v114, v117, v120, v11, v12, v13);
  v123 = (bool) v122;
  v124 = vm_cmp_nz_i32(v123);
  v125 = (bool) v124;
  if (v125) {
  v260 = v122;
  goto label24;
  } else {
  goto label9;
  }
  label9:
  v126 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v127 = EMITC_ARRAY_ELEMENT_ADDRESS(v126, 1);
  ;
  v129 = &v128;
  v130 = sizeof(iree_vm_ref_t);
  memset(v129, 0, v130);
  iree_vm_ref_assign(v38, v129);
  v131 = module_call_0riiI_r_import_shim(v1, v127, v129, v14, v15, v11, v32);
  v132 = (bool) v131;
  v133 = vm_cmp_nz_i32(v132);
  v134 = (bool) v133;
  if (v134) {
  v260 = v131;
  goto label24;
  } else {
  goto label10;
  }
  label10:
  v135 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v136 = EMITC_ARRAY_ELEMENT_ADDRESS(v135, 6);
  ;
  v138 = &v137;
  v139 = sizeof(iree_vm_ref_t);
  memset(v138, 0, v139);
  iree_vm_ref_assign(v35, v138);
  v140 = module_call_0riii_r_import_shim(v1, v136, v138, v16, v17, v8, v38);
  v141 = (bool) v140;
  v142 = vm_cmp_nz_i32(v141);
  v143 = (bool) v142;
  if (v143) {
  v260 = v140;
  goto label24;
  } else {
  goto label11;
  }
  label11:
  v144 = vm_cmp_nz_i32(v41);
  v145 = (bool) v144;
  if (v145) {
  goto label12;
  } else {
  goto label23;
  }
  label12:
  v146 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v147 = EMITC_ARRAY_ELEMENT_ADDRESS(v146, 9);
  ;
  v149 = &v148;
  v150 = sizeof(iree_vm_ref_t);
  memset(v149, 0, v150);
  iree_vm_ref_assign(v38, v149);
  ;
  v152 = &v151;
  v153 = sizeof(iree_vm_ref_t);
  memset(v152, 0, v153);
  iree_vm_ref_assign(v26, v152);
  ;
  v155 = &v154;
  v156 = sizeof(iree_vm_ref_t);
  memset(v155, 0, v156);
  iree_vm_ref_assign(v4, v155);
  ;
  v158 = &v157;
  v159 = sizeof(iree_vm_ref_t);
  memset(v158, 0, v159);
  iree_vm_ref_assign(v32, v158);
  v160 = module_call_0rriCiirIID_v_2_import_shim(v1, v147, v149, v152, v8, v21, v8, v8, v155, v18, v11, v10, v8, v158, v18, v11);
  v161 = (bool) v160;
  v162 = vm_cmp_nz_i32(v161);
  v163 = (bool) v162;
  if (v163) {
  v260 = v160;
  goto label24;
  } else {
  goto label13;
  }
  label13:
  v164 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v165 = EMITC_ARRAY_ELEMENT_ADDRESS(v164, 10);
  ;
  v167 = &v166;
  v168 = sizeof(iree_vm_ref_t);
  memset(v167, 0, v168);
  iree_vm_ref_assign(v38, v167);
  ;
  v170 = &v169;
  v171 = sizeof(iree_vm_ref_t);
  memset(v170, 0, v171);
  iree_vm_ref_assign(v29, v170);
  v172 = module_call_0rriiii_v_import_shim(v1, v165, v167, v170, v8, v10, v10, v10);
  v173 = (bool) v172;
  v174 = vm_cmp_nz_i32(v173);
  v175 = (bool) v174;
  if (v175) {
  v260 = v172;
  goto label24;
  } else {
  goto label14;
  }
  label14:
  v176 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v177 = EMITC_ARRAY_ELEMENT_ADDRESS(v176, 8);
  ;
  v179 = &v178;
  v180 = sizeof(iree_vm_ref_t);
  memset(v179, 0, v180);
  iree_vm_ref_assign(v38, v179);
  v181 = module_call_0riii_v_import_shim(v1, v177, v179, v19, v20, v8);
  v182 = (bool) v181;
  v183 = vm_cmp_nz_i32(v182);
  v184 = (bool) v183;
  if (v184) {
  v260 = v181;
  goto label24;
  } else {
  goto label15;
  }
  label15:
  v185 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v186 = EMITC_ARRAY_ELEMENT_ADDRESS(v185, 7);
  ;
  v188 = &v187;
  v189 = sizeof(iree_vm_ref_t);
  memset(v188, 0, v189);
  iree_vm_ref_assign(v38, v188);
  v190 = module_call_0r_v_import_shim(v1, v186, v188);
  v191 = (bool) v190;
  v192 = vm_cmp_nz_i32(v191);
  v193 = (bool) v192;
  if (v193) {
  v260 = v190;
  goto label24;
  } else {
  goto label16;
  }
  label16:
  v194 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v195 = EMITC_ARRAY_ELEMENT_ADDRESS(v194, 16);
  ;
  v197 = &v196;
  v198 = sizeof(iree_vm_ref_t);
  memset(v197, 0, v198);
  iree_vm_ref_assign(v35, v197);
  v199 = module_call_0ri_r_import_shim(v1, v195, v197, v8, v4);
  v200 = (bool) v199;
  v201 = vm_cmp_nz_i32(v200);
  v202 = (bool) v201;
  if (v202) {
  v260 = v199;
  goto label24;
  } else {
  goto label17;
  }
  label17:
  v203 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v204 = EMITC_ARRAY_ELEMENT_ADDRESS(v203, 14);
  ;
  v206 = &v205;
  v207 = sizeof(iree_vm_ref_t);
  memset(v206, 0, v207);
  iree_vm_ref_assign(v35, v206);
  ;
  v209 = &v208;
  v210 = sizeof(iree_vm_ref_t);
  memset(v209, 0, v210);
  iree_vm_ref_assign(v5, v209);
  ;
  v212 = &v211;
  v213 = sizeof(iree_vm_ref_t);
  memset(v212, 0, v213);
  iree_vm_ref_assign(v4, v212);
  ;
  v215 = &v214;
  v216 = sizeof(iree_vm_ref_t);
  memset(v215, 0, v216);
  iree_vm_ref_assign(v38, v215);
  v217 = module_call_0rIrrCrD_v_1_import_shim(v1, v204, v206, v7, v209, v212, v10, v215);
  v218 = (bool) v217;
  v219 = vm_cmp_nz_i32(v218);
  v220 = (bool) v219;
  if (v220) {
  v260 = v217;
  goto label24;
  } else {
  goto label18;
  }
  label18:
  v221 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v222 = EMITC_ARRAY_ELEMENT_ADDRESS(v221, 17);
  ;
  v224 = &v223;
  v225 = sizeof(iree_vm_ref_t);
  memset(v224, 0, v225);
  iree_vm_ref_assign(v4, v224);
  ;
  v227 = &v226;
  v228 = module_call_0iCrD_i_1_import_shim(v1, v222, v6, v10, v224, v227);
  v229 = (bool) v228;
  v230 = vm_cmp_nz_i32(v229);
  v231 = (bool) v230;
  if (v231) {
  v260 = v228;
  goto label24;
  } else {
  goto label19;
  }
  label19:
  v232 = vm_cmp_nz_i32(v226);
  v233 = (bool) v232;
  if (v233) {
  goto label22;
  } else {
  goto label20;
  }
  label20:
  v234 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v235 = EMITC_ARRAY_ELEMENT_ADDRESS(v234, 3);
  ;
  v237 = &v236;
  v238 = sizeof(iree_vm_ref_t);
  memset(v237, 0, v238);
  iree_vm_ref_assign(v32, v237);
  v239 = module_call_0rIIiiCID_r_0_import_shim(v1, v235, v237, v18, v11, v9, v10, v8, v4);
  v240 = (bool) v239;
  v241 = vm_cmp_nz_i32(v240);
  v242 = (bool) v241;
  if (v242) {
  v260 = v239;
  goto label24;
  } else {
  goto label21;
  }
  label21:
  ;
  v244 = &v243;
  v245 = sizeof(iree_vm_ref_t);
  memset(v244, 0, v245);
  iree_vm_ref_move(v4, v244);
  iree_vm_ref_move(v244, v5);
  iree_vm_ref_release(v26);
  iree_vm_ref_release(v32);
  iree_vm_ref_release(v38);
  iree_vm_ref_release(v23);
  iree_vm_ref_release(v29);
  iree_vm_ref_release(v35);
  iree_vm_ref_release(v4);
  v246 = iree_ok_status();
  return v246;
  label22:
  v247 = (bool) v226;
  if (v247) {
  goto label27;
  } else {
  goto label25;
  }
  label23:
  v248 = (bool) v21;
  if (v248) {
  goto label26;
  } else {
  goto label25;
  }
  label24:
  iree_vm_ref_release(v26);
  iree_vm_ref_release(v32);
  iree_vm_ref_release(v38);
  iree_vm_ref_release(v23);
  iree_vm_ref_release(v29);
  iree_vm_ref_release(v35);
  iree_vm_ref_release(v4);
  return v260;
  label25:
  iree_vm_ref_release(v26);
  iree_vm_ref_release(v32);
  iree_vm_ref_release(v38);
  iree_vm_ref_release(v23);
  iree_vm_ref_release(v29);
  iree_vm_ref_release(v35);
  iree_vm_ref_release(v4);
  v249 = iree_ok_status();
  return v249;
  label26:
  iree_vm_ref_release(v26);
  iree_vm_ref_release(v32);
  iree_vm_ref_release(v38);
  iree_vm_ref_release(v23);
  iree_vm_ref_release(v29);
  iree_vm_ref_release(v35);
  iree_vm_ref_release(v4);
  v250 = iree_make_cstring_view("device not supported in the compiled configuration");
  v251 = EMITC_STRUCT_MEMBER(v250, size);
  v252 = (int32_t) v251;
  v253 = EMITC_STRUCT_MEMBER(v250, data);
  v254 = iree_status_allocate_f(IREE_STATUS_FAILED_PRECONDITION, "<vm>", 0, "%.*s", v252, v253);
  return v254;
  label27:
  iree_vm_ref_release(v26);
  iree_vm_ref_release(v32);
  iree_vm_ref_release(v38);
  iree_vm_ref_release(v23);
  iree_vm_ref_release(v29);
  iree_vm_ref_release(v35);
  iree_vm_ref_release(v4);
  v255 = iree_make_cstring_view("failed to wait on timepoint");
  v256 = EMITC_STRUCT_MEMBER(v255, size);
  v257 = (int32_t) v256;
  v258 = EMITC_STRUCT_MEMBER(v255, data);
  v259 = iree_status_allocate_f(IREE_STATUS_FAILED_PRECONDITION, "<vm>", 0, "%.*s", v257, v258);
  return v259;
}

EMITC_TYPEDEF_STRUCT(module_abs_args_t, iree_vm_ref_t arg0;)
EMITC_TYPEDEF_STRUCT(module_abs_result_t, iree_vm_ref_t res0;)
static iree_status_t module_abs_export_shim(iree_vm_stack_t* v1, uint32_t v2, iree_byte_span_t v3, iree_byte_span_t v4, void* v5, void* v6) {
  module_t* v7;
  module_state_t* v8;
  uint8_t* v9;
  module_abs_args_t* v10;
  uint8_t* v11;
  module_abs_result_t* v12;
  iree_vm_ref_t* v13;
  iree_vm_ref_t* v14;
  iree_status_t v15;
  bool v16;
  int32_t v17;
  bool v18;
  iree_status_t v19;
  v7 = (module_t*) v5;
  v8 = (module_state_t*) v6;
  v9 = EMITC_STRUCT_MEMBER(v3, data);
  v10 = (module_abs_args_t*) v9;
  v11 = EMITC_STRUCT_MEMBER(v4, data);
  v12 = (module_abs_result_t*) v11;
  v13 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v10, arg0);
  v14 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v12, res0);
  v15 = module_abs(v1, v7, v8, v13, v14);
  v16 = (bool) v15;
  v17 = vm_cmp_nz_i32(v16);
  v18 = (bool) v17;
  if (v18) {
  goto label3;
  } else {
  goto label2;
  }
  label2:
  v19 = iree_ok_status();
  return v19;
  label3:
  return v15;
}

static iree_status_t module___init_export_shim(iree_vm_stack_t* v1, uint32_t v2, iree_byte_span_t v3, iree_byte_span_t v4, void* v5, void* v6) {
  module_t* v7;
  module_state_t* v8;
  iree_status_t v9;
  bool v10;
  int32_t v11;
  bool v12;
  iree_status_t v13;
  v7 = (module_t*) v5;
  v8 = (module_state_t*) v6;
  v9 = module___init(v1, v7, v8);
  v10 = (bool) v9;
  v11 = vm_cmp_nz_i32(v10);
  v12 = (bool) v11;
  if (v12) {
  goto label3;
  } else {
  goto label2;
  }
  label2:
  v13 = iree_ok_status();
  return v13;
  label3:
  return v9;
}

static iree_status_t module___init(iree_vm_stack_t* v1, module_t* v2, module_state_t* v3) {
  int32_t v4;
  int32_t v5;
  int32_t v6;
  int32_t v7;
  iree_vm_ref_t v8;
  iree_vm_ref_t* v9;
  iree_host_size_t v10;
  iree_vm_ref_t v11;
  iree_vm_ref_t* v12;
  iree_host_size_t v13;
  iree_vm_ref_t v14;
  iree_vm_ref_t* v15;
  iree_host_size_t v16;
  iree_vm_ref_t v17;
  iree_vm_ref_t* v18;
  iree_host_size_t v19;
  iree_vm_ref_t v20;
  iree_vm_ref_t* v21;
  iree_host_size_t v22;
  iree_vm_function_t* v23;
  iree_vm_function_t* v24;
  iree_status_t v25;
  bool v26;
  int32_t v27;
  bool v28;
  iree_vm_buffer_t* v29;
  iree_vm_buffer_t* v30;
  iree_vm_ref_type_t v31;
  iree_status_t v32;
  bool v33;
  int32_t v34;
  bool v35;
  iree_vm_buffer_t* v36;
  iree_vm_buffer_t* v37;
  iree_vm_ref_type_t v38;
  iree_status_t v39;
  bool v40;
  int32_t v41;
  bool v42;
  iree_vm_function_t* v43;
  iree_vm_function_t* v44;
  iree_vm_ref_t v45;
  iree_vm_ref_t* v46;
  iree_host_size_t v47;
  iree_vm_ref_t v48;
  iree_vm_ref_t* v49;
  iree_host_size_t v50;
  iree_vm_ref_t v51;
  iree_vm_ref_t* v52;
  iree_host_size_t v53;
  int32_t v54;
  int32_t* v55;
  int64_t v56;
  int64_t* v57;
  iree_status_t v58;
  bool v59;
  int32_t v60;
  bool v61;
  int32_t v62;
  int32_t v63;
  int32_t v64;
  iree_vm_function_t* v65;
  iree_vm_function_t* v66;
  iree_vm_ref_t v67;
  iree_vm_ref_t* v68;
  iree_host_size_t v69;
  iree_status_t v70;
  bool v71;
  int32_t v72;
  bool v73;
  iree_vm_function_t* v74;
  iree_vm_function_t* v75;
  iree_vm_ref_t v76;
  iree_vm_ref_t* v77;
  iree_host_size_t v78;
  iree_vm_ref_t v79;
  iree_vm_ref_t* v80;
  iree_host_size_t v81;
  iree_status_t v82;
  bool v83;
  int32_t v84;
  bool v85;
  uint8_t* v86;
  iree_vm_ref_t* v87;
  iree_vm_ref_t* v88;
  iree_vm_type_def_t v89;
  iree_vm_type_def_t* v90;
  iree_host_size_t v91;
  iree_string_view_t v92;
  const iree_vm_ref_type_descriptor_t* v93;
  iree_vm_ref_type_t v94;
  iree_vm_ref_type_t v95;
  iree_status_t v96;
  bool v97;
  int32_t v98;
  bool v99;
  int32_t v100;
  bool v101;
  iree_vm_ref_t* v102;
  iree_vm_ref_t* v103;
  iree_vm_type_def_t v104;
  iree_vm_type_def_t* v105;
  iree_host_size_t v106;
  iree_string_view_t v107;
  const iree_vm_ref_type_descriptor_t* v108;
  iree_vm_ref_type_t v109;
  iree_vm_ref_type_t v110;
  iree_status_t v111;
  bool v112;
  int32_t v113;
  bool v114;
  iree_vm_buffer_t* v115;
  iree_vm_buffer_t* v116;
  iree_vm_ref_type_t v117;
  iree_status_t v118;
  bool v119;
  int32_t v120;
  bool v121;
  iree_vm_function_t* v122;
  iree_vm_function_t* v123;
  iree_vm_ref_t v124;
  iree_vm_ref_t* v125;
  iree_host_size_t v126;
  iree_vm_ref_t v127;
  iree_vm_ref_t* v128;
  iree_host_size_t v129;
  iree_vm_ref_t v130;
  iree_vm_ref_t* v131;
  iree_host_size_t v132;
  iree_vm_ref_t v133;
  iree_vm_ref_t* v134;
  iree_host_size_t v135;
  iree_vm_ref_t v136;
  iree_vm_ref_t* v137;
  iree_host_size_t v138;
  iree_status_t v139;
  bool v140;
  int32_t v141;
  bool v142;
  iree_vm_ref_t v143;
  iree_vm_ref_t* v144;
  iree_host_size_t v145;
  iree_vm_ref_t* v146;
  iree_vm_ref_t* v147;
  iree_vm_type_def_t v148;
  iree_vm_type_def_t* v149;
  iree_host_size_t v150;
  iree_string_view_t v151;
  const iree_vm_ref_type_descriptor_t* v152;
  iree_vm_ref_type_t v153;
  iree_vm_ref_type_t v154;
  iree_status_t v155;
  bool v156;
  int32_t v157;
  bool v158;
  iree_status_t v159;
  iree_status_t v160;
  v4 = 2;
  v5 = 1;
  v6 = 0;
  v7 = 7;
  ;
  v9 = &v8;
  v10 = sizeof(iree_vm_ref_t);
  memset(v9, 0, v10);
  ;
  v12 = &v11;
  v13 = sizeof(iree_vm_ref_t);
  memset(v12, 0, v13);
  ;
  v15 = &v14;
  v16 = sizeof(iree_vm_ref_t);
  memset(v15, 0, v16);
  ;
  v18 = &v17;
  v19 = sizeof(iree_vm_ref_t);
  memset(v18, 0, v19);
  ;
  v21 = &v20;
  v22 = sizeof(iree_vm_ref_t);
  memset(v21, 0, v22);
  iree_vm_ref_release(v9);
  iree_vm_ref_release(v12);
  v23 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v24 = EMITC_ARRAY_ELEMENT_ADDRESS(v23, 0);
  v25 = module_call_0v_r_import_shim(v1, v24, v15);
  v26 = (bool) v25;
  v27 = vm_cmp_nz_i32(v26);
  v28 = (bool) v27;
  if (v28) {
  v160 = v25;
  goto label14;
  } else {
  goto label2;
  }
  label2:
  v29 = EMITC_STRUCT_PTR_MEMBER(v3, rodata_buffers);
  v30 = EMITC_ARRAY_ELEMENT_ADDRESS(v29, 1);
  v31 = iree_vm_buffer_type_id();
  v32 = iree_vm_ref_wrap_retain(v30, v31, v18);
  v33 = (bool) v32;
  v34 = vm_cmp_nz_i32(v33);
  v35 = (bool) v34;
  if (v35) {
  v160 = v32;
  goto label14;
  } else {
  goto label3;
  }
  label3:
  v36 = EMITC_STRUCT_PTR_MEMBER(v3, rodata_buffers);
  v37 = EMITC_ARRAY_ELEMENT_ADDRESS(v36, 2);
  v38 = iree_vm_buffer_type_id();
  v39 = iree_vm_ref_wrap_retain(v37, v38, v21);
  v40 = (bool) v39;
  v41 = vm_cmp_nz_i32(v40);
  v42 = (bool) v41;
  if (v42) {
  v160 = v39;
  goto label14;
  } else {
  goto label4;
  }
  label4:
  v43 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v44 = EMITC_ARRAY_ELEMENT_ADDRESS(v43, 13);
  ;
  v46 = &v45;
  v47 = sizeof(iree_vm_ref_t);
  memset(v46, 0, v47);
  iree_vm_ref_assign(v15, v46);
  ;
  v49 = &v48;
  v50 = sizeof(iree_vm_ref_t);
  memset(v49, 0, v50);
  iree_vm_ref_assign(v18, v49);
  ;
  v52 = &v51;
  v53 = sizeof(iree_vm_ref_t);
  memset(v52, 0, v53);
  iree_vm_ref_assign(v21, v52);
  ;
  v55 = &v54;
  ;
  v57 = &v56;
  v58 = module_call_0rrr_iI_import_shim(v1, v44, v46, v49, v52, v55, v57);
  v59 = (bool) v58;
  v60 = vm_cmp_nz_i32(v59);
  v61 = (bool) v60;
  if (v61) {
  v160 = v58;
  goto label14;
  } else {
  goto label5;
  }
  label5:
  v62 = vm_trunc_i64i32(v56);
  v63 = vm_and_i32(v62, v5);
  v64 = vm_select_i32(v54, v63, v6);
  v65 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v66 = EMITC_ARRAY_ELEMENT_ADDRESS(v65, 11);
  ;
  v68 = &v67;
  v69 = sizeof(iree_vm_ref_t);
  memset(v68, 0, v69);
  iree_vm_ref_assign(v15, v68);
  v70 = module_call_0riCiiiD_r_2_import_shim(v1, v66, v68, v6, v4, v6, v7, v5, v5, v7, v6, v18);
  v71 = (bool) v70;
  v72 = vm_cmp_nz_i32(v71);
  v73 = (bool) v72;
  if (v73) {
  v160 = v70;
  goto label14;
  } else {
  goto label6;
  }
  label6:
  v74 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v75 = EMITC_ARRAY_ELEMENT_ADDRESS(v74, 18);
  ;
  v77 = &v76;
  v78 = sizeof(iree_vm_ref_t);
  memset(v77, 0, v78);
  iree_vm_ref_assign(v15, v77);
  ;
  v80 = &v79;
  v81 = sizeof(iree_vm_ref_t);
  memset(v80, 0, v81);
  iree_vm_ref_assign(v18, v80);
  v82 = module_call_0riCrD_r_1_import_shim(v1, v75, v77, v6, v5, v80, v18);
  v83 = (bool) v82;
  v84 = vm_cmp_nz_i32(v83);
  v85 = (bool) v84;
  if (v85) {
  v160 = v82;
  goto label14;
  } else {
  goto label7;
  }
  label7:
  v86 = EMITC_STRUCT_PTR_MEMBER(v3, rwdata);
  vm_global_store_i32(v86, 0, v64);
  v87 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v88 = EMITC_ARRAY_ELEMENT_ADDRESS(v87, 0);
  ;
  v90 = &v89;
  v91 = sizeof(iree_vm_type_def_t);
  memset(v90, 0, v91);
  v92 = iree_make_cstring_view("hal.pipeline_layout");
  v93 = iree_vm_ref_lookup_registered_type(v92);
  v94 = EMITC_STRUCT_PTR_MEMBER(v93, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v89, ref_type, v94);
  v95 = EMITC_STRUCT_PTR_MEMBER(v90, ref_type);
  v96 = iree_vm_ref_retain_or_move_checked(false, v18, v95, v88);
  v97 = (bool) v96;
  v98 = vm_cmp_nz_i32(v97);
  v99 = (bool) v98;
  if (v99) {
  v160 = v96;
  goto label14;
  } else {
  goto label8;
  }
  label8:
  v100 = vm_cmp_nz_i32(v64);
  v101 = (bool) v100;
  if (v101) {
  goto label9;
  } else {
  goto label12;
  }
  label9:
  v102 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v103 = EMITC_ARRAY_ELEMENT_ADDRESS(v102, 0);
  ;
  v105 = &v104;
  v106 = sizeof(iree_vm_type_def_t);
  memset(v105, 0, v106);
  v107 = iree_make_cstring_view("hal.pipeline_layout");
  v108 = iree_vm_ref_lookup_registered_type(v107);
  v109 = EMITC_STRUCT_PTR_MEMBER(v108, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v104, ref_type, v109);
  v110 = EMITC_STRUCT_PTR_MEMBER(v105, ref_type);
  v111 = iree_vm_ref_retain_or_move_checked(false, v103, v110, v9);
  v112 = (bool) v111;
  v113 = vm_cmp_nz_i32(v112);
  v114 = (bool) v113;
  if (v114) {
  v160 = v111;
  goto label14;
  } else {
  goto label10;
  }
  label10:
  v115 = EMITC_STRUCT_PTR_MEMBER(v3, rodata_buffers);
  v116 = EMITC_ARRAY_ELEMENT_ADDRESS(v115, 0);
  v117 = iree_vm_buffer_type_id();
  v118 = iree_vm_ref_wrap_retain(v116, v117, v18);
  v119 = (bool) v118;
  v120 = vm_cmp_nz_i32(v119);
  v121 = (bool) v120;
  if (v121) {
  v160 = v118;
  goto label14;
  } else {
  goto label11;
  }
  label11:
  v122 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v123 = EMITC_ARRAY_ELEMENT_ADDRESS(v122, 15);
  ;
  v125 = &v124;
  v126 = sizeof(iree_vm_ref_t);
  memset(v125, 0, v126);
  iree_vm_ref_assign(v15, v125);
  ;
  v128 = &v127;
  v129 = sizeof(iree_vm_ref_t);
  memset(v128, 0, v129);
  iree_vm_ref_assign(v21, v128);
  ;
  v131 = &v130;
  v132 = sizeof(iree_vm_ref_t);
  memset(v131, 0, v132);
  iree_vm_ref_assign(v18, v131);
  ;
  v134 = &v133;
  v135 = sizeof(iree_vm_ref_t);
  memset(v134, 0, v135);
  iree_vm_ref_assign(v12, v134);
  ;
  v137 = &v136;
  v138 = sizeof(iree_vm_ref_t);
  memset(v137, 0, v138);
  iree_vm_ref_assign(v9, v137);
  v139 = module_call_0rrrrCrD_r_1_import_shim(v1, v123, v125, v128, v131, v134, v5, v137, v9);
  v140 = (bool) v139;
  v141 = vm_cmp_nz_i32(v140);
  v142 = (bool) v141;
  if (v142) {
  v160 = v139;
  goto label14;
  } else {
  goto label12;
  }
  label12:
  ;
  v144 = &v143;
  v145 = sizeof(iree_vm_ref_t);
  memset(v144, 0, v145);
  iree_vm_ref_retain(v9, v144);
  iree_vm_ref_assign(v144, v9);
  v146 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v147 = EMITC_ARRAY_ELEMENT_ADDRESS(v146, 1);
  ;
  v149 = &v148;
  v150 = sizeof(iree_vm_type_def_t);
  memset(v149, 0, v150);
  v151 = iree_make_cstring_view("hal.executable");
  v152 = iree_vm_ref_lookup_registered_type(v151);
  v153 = EMITC_STRUCT_PTR_MEMBER(v152, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v148, ref_type, v153);
  v154 = EMITC_STRUCT_PTR_MEMBER(v149, ref_type);
  v155 = iree_vm_ref_retain_or_move_checked(false, v9, v154, v147);
  v156 = (bool) v155;
  v157 = vm_cmp_nz_i32(v156);
  v158 = (bool) v157;
  if (v158) {
  v160 = v155;
  goto label14;
  } else {
  goto label13;
  }
  label13:
  iree_vm_ref_release(v9);
  iree_vm_ref_release(v15);
  iree_vm_ref_release(v21);
  iree_vm_ref_release(v12);
  iree_vm_ref_release(v18);
  v159 = iree_ok_status();
  return v159;
  label14:
  iree_vm_ref_release(v9);
  iree_vm_ref_release(v15);
  iree_vm_ref_release(v21);
  iree_vm_ref_release(v12);
  iree_vm_ref_release(v18);
  return v160;
}

static void module_destroy(void* v1) {
  module_t* v2;
  iree_allocator_t v3;
  v2 = (module_t*) v1;
  v3 = EMITC_STRUCT_PTR_MEMBER(v2, allocator);
  iree_allocator_free(v3, v2);
  return;
}

static iree_status_t module_alloc_state(void* v1, iree_allocator_t v2, iree_vm_module_state_t** v3) {
  module_state_t* v4;
  iree_host_size_t v5;
  module_state_t** v6;
  void** v7;
  iree_status_t v8;
  bool v9;
  int32_t v10;
  bool v11;
  const uint8_t* v12;
  void* v13;
  iree_host_size_t v14;
  iree_byte_span_t v15;
  iree_allocator_t v16;
  iree_vm_buffer_t* v17;
  iree_vm_buffer_t* v18;
  const uint8_t* v19;
  void* v20;
  iree_host_size_t v21;
  iree_byte_span_t v22;
  iree_allocator_t v23;
  iree_vm_buffer_t* v24;
  iree_vm_buffer_t* v25;
  const uint8_t* v26;
  void* v27;
  iree_host_size_t v28;
  iree_byte_span_t v29;
  iree_allocator_t v30;
  iree_vm_buffer_t* v31;
  iree_vm_buffer_t* v32;
  const uint8_t* v33;
  void* v34;
  iree_host_size_t v35;
  iree_byte_span_t v36;
  iree_allocator_t v37;
  iree_vm_buffer_t* v38;
  iree_vm_buffer_t* v39;
  iree_vm_ref_t* v40;
  iree_vm_ref_t* v41;
  iree_host_size_t v42;
  iree_vm_ref_t* v43;
  iree_host_size_t v44;
  iree_vm_module_state_t* v45;
  iree_status_t v46;
  v4 = NULL;
  v5 = sizeof(module_state_t);
  v6 = &v4;
  v7 = (void**) v6;
  v8 = iree_allocator_malloc(v2, v5, v7);
  v9 = (bool) v8;
  v10 = vm_cmp_nz_i32(v9);
  v11 = (bool) v10;
  if (v11) {
  goto label3;
  } else {
  goto label2;
  }
  label2:
  memset(v4, 0, v5);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v4, allocator, v2);
  v12 = module_abs_dispatch_0_static;
  v13 = (void*) v12;
  v14 = sizeof(module_abs_dispatch_0_static);
  v15 = iree_make_byte_span(v13, v14);
  v16 = iree_allocator_null();
  v17 = EMITC_STRUCT_PTR_MEMBER(v4, rodata_buffers);
  v18 = EMITC_ARRAY_ELEMENT_ADDRESS(v17, 0);
  iree_vm_buffer_initialize(IREE_VM_BUFFER_ACCESS_ORIGIN_MODULE, v15, v16, v18);
  v19 = module__utf8_hal_executable_format_EAB228F999C2D3A1;
  v20 = (void*) v19;
  v21 = sizeof(module__utf8_hal_executable_format_EAB228F999C2D3A1);
  v22 = iree_make_byte_span(v20, v21);
  v23 = iree_allocator_null();
  v24 = EMITC_STRUCT_PTR_MEMBER(v4, rodata_buffers);
  v25 = EMITC_ARRAY_ELEMENT_ADDRESS(v24, 1);
  iree_vm_buffer_initialize(IREE_VM_BUFFER_ACCESS_ORIGIN_MODULE, v22, v23, v25);
  v26 = module__utf8_static_96B31E405495E0B6;
  v27 = (void*) v26;
  v28 = sizeof(module__utf8_static_96B31E405495E0B6);
  v29 = iree_make_byte_span(v27, v28);
  v30 = iree_allocator_null();
  v31 = EMITC_STRUCT_PTR_MEMBER(v4, rodata_buffers);
  v32 = EMITC_ARRAY_ELEMENT_ADDRESS(v31, 2);
  iree_vm_buffer_initialize(IREE_VM_BUFFER_ACCESS_ORIGIN_MODULE, v29, v30, v32);
  v33 = module__utf8_tensor_3C6209B4FD120BDC;
  v34 = (void*) v33;
  v35 = sizeof(module__utf8_tensor_3C6209B4FD120BDC);
  v36 = iree_make_byte_span(v34, v35);
  v37 = iree_allocator_null();
  v38 = EMITC_STRUCT_PTR_MEMBER(v4, rodata_buffers);
  v39 = EMITC_ARRAY_ELEMENT_ADDRESS(v38, 3);
  iree_vm_buffer_initialize(IREE_VM_BUFFER_ACCESS_ORIGIN_MODULE, v36, v37, v39);
  v40 = EMITC_STRUCT_PTR_MEMBER(v4, refs);
  v41 = EMITC_ARRAY_ELEMENT_ADDRESS(v40, 0);
  v42 = sizeof(iree_vm_ref_t);
  memset(v41, 0, v42);
  v43 = EMITC_ARRAY_ELEMENT_ADDRESS(v40, 1);
  v44 = sizeof(iree_vm_ref_t);
  memset(v43, 0, v44);
  v45 = (iree_vm_module_state_t*) v4;
  EMITC_DEREF_ASSIGN_VALUE(v3, v45);
  v46 = iree_ok_status();
  return v46;
  label3:
  return v8;
}

static void module_free_state(void* v1, iree_vm_module_state_t* v2) {
  module_state_t* v3;
  iree_vm_ref_t* v4;
  iree_vm_ref_t* v5;
  iree_vm_ref_t* v6;
  iree_allocator_t v7;
  v3 = (module_state_t*) v2;
  v4 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v5 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 0);
  iree_vm_ref_release(v5);
  v6 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 1);
  iree_vm_ref_release(v6);
  v7 = EMITC_STRUCT_PTR_MEMBER(v3, allocator);
  iree_allocator_free(v7, v3);
  return;
}

static iree_status_t module_resolve_import(void* v1, iree_vm_module_state_t* v2, iree_host_size_t v3, const iree_vm_function_t* v4, const iree_vm_function_signature_t* v5) {
  module_state_t* v6;
  iree_vm_function_t* v7;
  iree_vm_function_t* v8;
  iree_status_t v9;
  v6 = (module_state_t*) v2;
  v7 = EMITC_STRUCT_PTR_MEMBER(v6, imports);
  v8 = EMITC_ARRAY_ELEMENT_ADDRESS(v7, v3);
  EMITC_DEREF_ASSIGN_PTR(v8, v4);
  v9 = iree_ok_status();
  return v9;
}


static const iree_vm_module_dependency_t module_dependencies_[] = {
{{"hal", 3}, 0, IREE_VM_MODULE_DEPENDENCY_FLAG_REQUIRED},
};

static const iree_vm_native_import_descriptor_t module_imports_[] = {
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.ex.shared_device", 20}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.allocator.allocate", 22}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.buffer.assert", 17}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.buffer_view.create", 22}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.buffer_view.assert", 22}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.buffer_view.buffer", 22}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.create", 25}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.finalize", 27}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.execution_barrier", 36}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.push_descriptor_set", 38}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.dispatch", 27}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.descriptor_set_layout.create", 32}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.device.allocator", 20}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.device.query.i64", 20}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.device.queue.execute", 24}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.executable.create", 21}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.fence.create", 16}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.fence.await", 15}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.pipeline_layout.create", 26}},
};

static const iree_vm_native_export_descriptor_t module_exports_[] = {
{{"__init", 6}, {"0v_v", 4}, 0, NULL},
{{"abs", 3}, {"0r_r", 4}, 0, NULL},
};

static const iree_vm_native_function_ptr_t module_funcs_[] = {
{(iree_vm_native_function_shim_t)iree_emitc_shim, (iree_vm_native_function_target_t)module___init_export_shim},
{(iree_vm_native_function_shim_t)iree_emitc_shim, (iree_vm_native_function_target_t)module_abs_export_shim},
};

static const iree_vm_native_module_descriptor_t module_descriptor_ = {
{"module", 6},
0,
0,
NULL,
1,
module_dependencies_,
19,
module_imports_,
2,
module_exports_,
2,
module_funcs_,
};

iree_status_t module_create(iree_vm_instance_t* v1, iree_allocator_t v2, iree_vm_module_t** v3) {
  module_t* v4;
  iree_host_size_t v5;
  module_t** v6;
  void** v7;
  iree_status_t v8;
  bool v9;
  int32_t v10;
  bool v11;
  iree_vm_module_t v12;
  iree_vm_module_t* v13;
  iree_status_t v14;
  bool v15;
  int32_t v16;
  bool v17;
  iree_status_t v18;
  v4 = NULL;
  v5 = sizeof(module_t);
  v6 = &v4;
  v7 = (void**) v6;
  v8 = iree_allocator_malloc(v2, v5, v7);
  v9 = (bool) v8;
  v10 = vm_cmp_nz_i32(v9);
  v11 = (bool) v10;
  if (v11) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  memset(v4, 0, v5);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v4, allocator, v2);
  ;
  v13 = &v12;
  v14 = iree_vm_module_initialize(v13, v4);
  v15 = iree_status_is_ok(v14);
  v16 = vm_cmp_nz_i32(v15);
  v17 = (bool) v16;
  if (v17) {
  goto label3;
  } else {
  goto label5;
  }
  label3:
  EMITC_STRUCT_MEMBER_ASSIGN(v12, destroy, module_destroy);
  EMITC_STRUCT_MEMBER_ASSIGN(v12, alloc_state, module_alloc_state);
  EMITC_STRUCT_MEMBER_ASSIGN(v12, free_state, module_free_state);
  EMITC_STRUCT_MEMBER_ASSIGN(v12, resolve_import, module_resolve_import);
  v18 = iree_vm_native_module_create(v13, &module_descriptor_, v1, v2, v3);
  return v18;
  label4:
  return v8;
  label5:
  iree_allocator_free(v2, v4);
  return v14;
}

#endif  // EMITC_IMPLEMENTATION
