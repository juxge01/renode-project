// === [mobilenet_v1_linked_llvm_cpu] static library ===
//
// To use:
//  - Include this header and generated object into your program 
//  - At runtime: retrieve library name from host binary 
//  - Query library from mobilenet_v1_linked_llvm_cpu_library_query()<< 
//  - Feed library into static_library_loader 
//
// === Automatically generated file. DO NOT EDIT! === 

#ifndef IREE_GENERATED_STATIC_EXECUTABLE_LIBRARY_MOBILENET_V1_LINKED_LLVM_CPU_
#define IREE_GENERATED_STATIC_EXECUTABLE_LIBRARY_MOBILENET_V1_LINKED_LLVM_CPU_

#include "iree/hal/local/executable_library.h"

#if __cplusplus
extern "C" {
#endif // __cplusplus

const iree_hal_executable_library_header_t**
mobilenet_v1_linked_llvm_cpu_library_query(
iree_hal_executable_library_version_t max_version, const iree_hal_executable_environment_v0_t* environment);

#if __cplusplus
}
#endif // __cplusplus

#endif // IREE_GENERATED_STATIC_EXECUTABLE_LIBRARY_MOBILENET_V1_LINKED_LLVM_CPU_
