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

iree_alignas(16) static const uint8_t module_ecg_small_fp32_linked_llvm_cpu_static[] = {101, 99, 103, 95, 115, 109, 97, 108, 108, 95, 102, 112, 51, 50, 95, 108, 105, 110, 107, 101, 100, 95, 108, 108, 118, 109, 95, 99, 112, 117};
iree_alignas(1) static const uint8_t module__utf8_hal_executable_format_EAB228F999C2D3A1[] = {104, 97, 108, 46, 101, 120, 101, 99, 117, 116, 97, 98, 108, 101, 46, 102, 111, 114, 109, 97, 116};
iree_alignas(1) static const uint8_t module__utf8_static_96B31E405495E0B6[] = {115, 116, 97, 116, 105, 99};
iree_alignas(64) static const uint8_t module__const[] = {65, 151, 173, 189, 184, 114, 150, 189, 141, 169, 49, 60, 133, 225, 146, 189, 30, 112, 131, 189, 133, 81, 86, 60, 232, 78, 68, 188, 70, 226, 22, 190, 108, 238, 188, 189, 38, 150, 13, 190, 210, 56, 181, 189, 199, 139, 157, 189, 76, 183, 224, 187, 99, 78, 158, 189, 242, 225, 142, 189, 245, 200, 130, 60, 215, 153, 139, 188, 224, 175, 28, 190, 95, 238, 218, 189, 229, 36, 27, 190, 125, 50, 188, 189, 160, 70, 161, 189, 180, 79, 222, 188, 176, 82, 161, 189, 41, 185, 143, 189, 198, 213, 168, 60, 40, 196, 87, 188, 231, 67, 20, 190, 161, 153, 210, 189, 2, 112, 18, 190, 15, 125, 177, 189, 223, 240, 143, 189, 13, 122, 242, 187, 63, 241, 164, 189, 59, 215, 132, 189, 107, 187, 153, 60, 110, 196, 5, 188, 82, 158, 18, 190, 226, 14, 230, 189, 86, 68, 12, 190, 250, 172, 157, 189, 199, 27, 87, 189, 238, 24, 40, 61, 90, 179, 145, 189, 54, 10, 91, 189, 20, 222, 120, 60, 19, 132, 159, 186, 174, 248, 16, 190, 157, 190, 0, 190, 21, 159, 1, 190, 48, 252, 157, 189, 114, 65, 68, 189, 215, 150, 155, 61, 14, 217, 135, 189, 3, 119, 91, 189, 222, 79, 48, 60, 124, 169, 87, 59, 124, 147, 22, 190, 69, 34, 25, 190, 86, 91, 246, 189, 98, 201, 31, 189, 90, 225, 207, 188, 8, 107, 202, 61, 152, 47, 14, 189, 168, 86, 246, 188, 38, 105, 12, 59, 209, 202, 194, 59, 16, 195, 247, 189, 244, 24, 17, 190, 200, 163, 163, 189, 251, 149, 158, 188, 12, 198, 166, 188, 247, 48, 220, 61, 239, 114, 201, 188, 113, 205, 165, 188, 170, 142, 182, 186, 175, 66, 35, 60, 226, 15, 216, 189, 223, 129, 252, 189, 139, 241, 113, 189, 74, 120, 62, 59, 223, 216, 26, 187, 40, 143, 238, 61, 152, 42, 117, 188, 179, 191, 72, 187, 186, 151, 222, 187, 197, 104, 79, 60, 142, 227, 164, 189, 186, 189, 180, 189, 73, 175, 31, 189, 82, 215, 160, 61, 208, 75, 122, 61, 246, 12, 228, 61, 251, 80, 235, 60, 98, 89, 97, 61, 44, 255, 79, 188, 23, 171, 199, 60, 56, 77, 40, 60, 9, 1, 7, 61, 206, 201, 201, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 210, 182, 191, 203, 130, 84, 190, 59, 75, 211, 191, 211, 241, 228, 191, 36, 122, 254, 62, 223, 25, 10, 61, 7, 132, 221, 189, 139, 215, 5, 192, 229, 187, 252, 63, 65, 9, 64, 63, 33, 244, 91, 191, 164, 80, 194, 63, 31, 8, 131, 63, 55, 152, 18, 192, 150, 123, 34, 64, 64, 208, 35, 192, 205, 148, 253, 62, 79, 225, 165, 189, 236, 71, 26, 191, 238, 64, 204, 191, 80, 110, 68, 191, 103, 77, 64, 191, 186, 208, 134, 192, 138, 236, 255, 63, 50, 35, 103, 192, 3, 198, 173, 191, 32, 194, 197, 191, 50, 182, 215, 63, 92, 120, 148, 63, 36, 104, 84, 191, 7, 244, 138, 191, 99, 250, 67, 191, 248, 69, 4, 192, 20, 167, 221, 191, 176, 254, 156, 63, 162, 180, 47, 64, 170, 104, 180, 63, 70, 82, 133, 191, 91, 207, 89, 60, 51, 136, 34, 191, 148, 95, 103, 191, 39, 25, 150, 190, 56, 186, 246, 62, 183, 178, 36, 62, 89, 252, 189, 190, 254, 125, 33, 190, 76, 104, 106, 64, 72, 179, 23, 64, 31, 172, 230, 62, 59, 10, 52, 191, 78, 10, 251, 63, 152, 98, 107, 64, 97, 155, 180, 63, 204, 6, 25, 64, 64, 200, 53, 191, 239, 131, 180, 62, 218, 99, 202, 63, 53, 63, 121, 63, 96, 192, 4, 64, 204, 211, 143, 192, 29, 196, 158, 191, 101, 12, 129, 63, 114, 10, 99, 192, 250, 139, 203, 191, 55, 21, 164, 63, 125, 181, 218, 191, 50, 62, 251, 61, 17, 252, 127, 63, 105, 6, 152, 63, 158, 55, 206, 63, 102, 5, 57, 61, 66, 167, 123, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 97, 4, 190, 240, 51, 156, 61, 97, 53, 132, 190, 116, 1, 139, 61, 90, 216, 231, 61, 38, 184, 8, 189, 95, 232, 67, 60, 109, 158, 192, 61, 42, 30, 183, 189, 136, 234, 88, 61, 213, 16, 26, 190, 164, 122, 137, 189, 98, 209, 43, 61, 221, 149, 52, 61, 107, 78, 151, 60, 141, 48, 182, 61, 72, 1, 35, 61, 11, 207, 181, 60, 174, 250, 60, 62, 72, 40, 225, 61, 250, 229, 236, 61, 28, 139, 16, 189, 222, 28, 57, 190, 65, 208, 193, 189, 249, 85, 166, 189, 227, 102, 185, 189, 141, 3, 235, 189, 177, 26, 187, 60, 72, 231, 171, 61, 133, 67, 50, 60, 221, 174, 32, 190, 138, 143, 93, 189, 24, 22, 87, 189, 156, 125, 130, 61, 173, 152, 168, 61, 106, 99, 131, 61, 157, 70, 61, 62, 177, 134, 33, 189, 90, 197, 0, 62, 219, 97, 88, 60, 240, 105, 39, 190, 209, 190, 229, 61, 197, 206, 242, 187, 124, 208, 230, 189, 85, 245, 213, 189, 95, 202, 93, 189, 180, 146, 169, 189, 17, 94, 122, 188, 210, 172, 76, 189, 83, 16, 159, 60, 33, 215, 78, 188, 169, 176, 250, 189, 141, 55, 140, 189, 2, 246, 74, 61, 28, 22, 51, 188, 171, 231, 13, 190, 244, 247, 165, 189, 91, 123, 32, 189, 241, 145, 145, 60, 128, 74, 115, 188, 183, 249, 87, 190, 240, 205, 65, 189, 119, 193, 248, 188, 115, 137, 141, 189, 170, 215, 255, 189, 63, 123, 211, 61, 107, 201, 45, 60, 116, 125, 31, 189, 224, 36, 69, 62, 94, 119, 211, 60, 14, 82, 137, 189, 30, 179, 47, 187, 102, 118, 23, 190, 95, 218, 142, 188, 83, 245, 141, 189, 225, 20, 203, 61, 191, 243, 70, 190, 223, 125, 105, 189, 68, 134, 150, 61, 233, 248, 242, 189, 12, 129, 194, 59, 220, 220, 46, 61, 87, 165, 81, 61, 106, 38, 195, 61, 175, 25, 65, 61, 228, 24, 113, 189, 172, 194, 198, 61, 189, 84, 108, 189, 182, 133, 70, 189, 237, 109, 73, 61, 237, 186, 16, 60, 82, 240, 44, 189, 91, 100, 24, 189, 100, 27, 241, 61, 199, 7, 171, 61, 232, 164, 37, 188, 250, 117, 154, 61, 14, 84, 4, 57, 216, 162, 183, 60, 136, 220, 12, 188, 184, 57, 158, 61, 176, 192, 6, 60, 236, 130, 165, 61, 215, 45, 56, 59, 236, 24, 200, 61, 156, 73, 42, 61, 132, 157, 6, 62, 145, 128, 7, 59, 201, 78, 111, 61, 140, 232, 181, 188, 245, 174, 163, 189, 68, 193, 70, 189, 43, 136, 172, 60, 5, 203, 250, 61, 25, 11, 201, 189, 226, 113, 112, 61, 4, 211, 45, 190, 167, 179, 136, 61, 32, 209, 217, 61, 31, 245, 75, 189, 62, 40, 49, 190, 207, 187, 93, 61, 91, 165, 141, 61, 149, 114, 169, 188, 126, 31, 149, 61, 243, 14, 133, 188, 97, 168, 185, 189, 219, 24, 121, 61, 47, 77, 83, 62, 6, 249, 98, 61, 184, 158, 75, 189, 76, 217, 13, 60, 228, 219, 113, 189, 5, 151, 240, 188, 254, 17, 19, 62, 72, 57, 150, 189, 146, 196, 164, 60, 3, 200, 242, 189, 248, 196, 86, 190, 218, 113, 141, 189, 48, 48, 224, 59, 35, 169, 1, 62, 169, 222, 126, 189, 35, 5, 116, 61, 201, 179, 71, 61, 7, 147, 22, 189, 109, 93, 7, 189, 181, 105, 150, 189, 122, 3, 99, 61, 189, 182, 252, 188, 213, 193, 158, 60, 245, 13, 187, 61, 106, 204, 30, 62, 20, 184, 33, 62, 250, 74, 178, 189, 144, 252, 32, 61, 49, 141, 216, 189, 65, 84, 14, 190, 253, 138, 176, 187, 212, 23, 139, 189, 180, 10, 96, 61, 115, 103, 249, 187, 237, 155, 132, 61, 208, 224, 14, 61, 248, 186, 194, 187, 224, 181, 211, 189, 111, 228, 65, 61, 43, 163, 235, 186, 86, 91, 179, 189, 42, 50, 147, 190, 34, 198, 38, 61, 244, 108, 80, 61, 130, 100, 33, 190, 194, 9, 88, 189, 88, 117, 137, 60, 190, 74, 158, 60, 22, 187, 195, 60, 151, 176, 132, 189, 55, 66, 8, 189, 154, 224, 54, 189, 75, 2, 97, 60, 0, 165, 245, 189, 100, 88, 90, 189, 254, 243, 82, 189, 12, 165, 36, 189, 51, 0, 187, 189, 139, 25, 39, 61, 167, 188, 127, 61, 222, 185, 41, 60, 208, 161, 3, 61, 123, 42, 187, 189, 130, 142, 183, 186, 104, 22, 45, 190, 121, 5, 89, 188, 133, 4, 139, 189, 118, 214, 154, 189, 131, 115, 128, 189, 140, 46, 193, 184, 128, 216, 111, 189, 55, 55, 162, 189, 111, 139, 107, 188, 69, 41, 34, 190, 41, 59, 36, 190, 141, 23, 171, 189, 209, 108, 145, 61, 76, 131, 15, 189, 55, 60, 139, 189, 17, 12, 62, 62, 172, 67, 242, 188, 49, 220, 8, 60, 15, 175, 230, 60, 207, 22, 47, 188, 151, 230, 17, 190, 32, 59, 252, 61, 174, 32, 189, 60, 121, 220, 84, 189, 206, 242, 166, 189, 168, 217, 34, 59, 158, 142, 162, 61, 50, 100, 12, 61, 125, 170, 144, 188, 215, 133, 74, 189, 134, 15, 161, 61, 120, 64, 203, 60, 185, 181, 181, 61, 112, 173, 147, 189, 241, 119, 156, 189, 109, 234, 156, 189, 252, 161, 49, 189, 126, 203, 188, 60, 5, 183, 198, 61, 206, 48, 135, 60, 73, 38, 22, 61, 180, 233, 26, 190, 242, 248, 197, 188, 204, 174, 167, 189, 94, 142, 176, 61, 92, 4, 9, 190, 76, 141, 72, 61, 124, 63, 116, 61, 115, 224, 127, 61, 173, 75, 1, 62, 121, 190, 180, 60, 82, 201, 107, 60, 148, 228, 78, 60, 106, 92, 1, 61, 18, 192, 22, 190, 218, 106, 165, 189, 125, 172, 176, 59, 101, 206, 245, 188, 241, 73, 12, 62, 108, 229, 14, 61, 160, 154, 235, 188, 219, 66, 45, 61, 182, 122, 188, 61, 219, 131, 6, 188, 31, 90, 182, 189, 148, 251, 154, 189, 174, 212, 52, 190, 195, 185, 34, 190, 167, 204, 137, 59, 104, 195, 25, 189, 68, 36, 137, 190, 56, 154, 6, 189, 153, 132, 167, 189, 7, 156, 126, 189, 83, 47, 123, 61, 135, 119, 255, 189, 128, 226, 142, 60, 11, 193, 212, 189, 199, 198, 151, 189, 206, 206, 106, 189, 185, 32, 45, 189, 231, 31, 232, 61, 136, 0, 156, 61, 222, 92, 159, 59, 99, 180, 199, 189, 212, 110, 218, 61, 182, 132, 34, 190, 75, 47, 188, 189, 30, 92, 114, 189, 117, 11, 162, 189, 113, 156, 47, 190, 228, 64, 232, 188, 191, 99, 209, 61, 169, 223, 149, 60, 253, 81, 53, 62, 103, 56, 86, 60, 150, 52, 231, 189, 151, 72, 137, 61, 17, 78, 50, 190, 243, 11, 4, 62, 198, 3, 189, 189, 22, 65, 123, 189, 252, 73, 98, 62, 52, 136, 125, 190, 100, 203, 93, 189, 251, 68, 245, 189, 153, 196, 199, 187, 71, 241, 15, 190, 72, 53, 19, 62, 157, 185, 121, 190, 93, 138, 241, 189, 20, 189, 167, 189, 120, 155, 62, 62, 249, 224, 21, 189, 12, 146, 207, 189, 128, 35, 82, 190, 175, 24, 200, 189, 140, 194, 226, 61, 144, 74, 130, 189, 201, 165, 32, 188, 57, 128, 124, 189, 77, 250, 109, 61, 21, 203, 60, 59, 47, 185, 38, 190, 234, 202, 139, 60, 187, 81, 90, 189, 128, 195, 20, 190, 110, 8, 115, 62, 53, 94, 88, 189, 179, 75, 169, 190, 127, 110, 108, 190, 192, 211, 200, 61, 178, 15, 1, 190, 100, 204, 166, 189, 165, 25, 20, 190, 45, 144, 131, 190, 247, 199, 94, 59, 157, 101, 59, 190, 171, 202, 2, 62, 89, 41, 59, 190, 222, 251, 179, 189, 92, 190, 63, 62, 220, 205, 36, 60, 246, 149, 149, 190, 195, 104, 134, 190, 28, 65, 128, 190, 31, 78, 197, 189, 170, 42, 133, 190, 52, 114, 103, 62, 119, 169, 64, 190, 92, 118, 116, 190, 159, 216, 127, 61, 202, 152, 54, 61, 226, 41, 201, 60, 14, 35, 6, 190, 111, 145, 132, 189, 116, 12, 236, 60, 234, 252, 12, 189, 90, 175, 126, 61, 142, 6, 214, 61, 62, 116, 37, 190, 202, 58, 61, 62, 186, 62, 21, 190, 15, 241, 35, 190, 126, 199, 92, 190, 162, 178, 133, 190, 118, 33, 163, 61, 189, 187, 230, 189, 214, 230, 245, 59, 246, 190, 59, 189, 24, 55, 36, 189, 65, 94, 88, 188, 153, 41, 90, 59, 127, 176, 83, 189, 112, 244, 12, 57, 112, 81, 37, 189, 212, 155, 129, 61, 251, 27, 158, 189, 49, 29, 190, 189, 174, 87, 90, 189, 160, 19, 49, 189, 255, 64, 219, 61, 10, 135, 101, 61, 254, 87, 177, 60, 23, 146, 26, 61, 164, 66, 151, 189, 47, 204, 100, 188, 147, 126, 240, 188, 29, 33, 57, 189, 22, 35, 99, 185, 153, 116, 172, 57, 197, 201, 4, 62, 79, 78, 245, 188, 236, 171, 110, 189, 83, 22, 88, 189, 17, 1, 193, 189, 227, 38, 5, 188, 38, 103, 69, 61, 113, 56, 153, 189, 40, 200, 82, 189, 143, 85, 46, 188, 98, 44, 31, 62, 61, 157, 214, 189, 158, 60, 63, 189, 99, 4, 121, 189, 94, 207, 37, 190, 19, 227, 202, 61, 64, 78, 148, 189, 114, 75, 45, 186, 234, 100, 9, 190, 85, 178, 9, 190, 247, 156, 84, 62, 37, 28, 192, 187, 130, 65, 233, 188, 130, 9, 80, 189, 94, 200, 66, 190, 139, 53, 126, 61, 199, 201, 55, 190, 69, 119, 222, 189, 95, 138, 144, 189, 255, 29, 94, 189, 167, 162, 58, 189, 123, 54, 69, 189, 12, 223, 202, 188, 43, 165, 13, 190, 13, 211, 145, 189, 172, 219, 111, 61, 51, 164, 23, 189, 166, 50, 213, 187, 21, 124, 31, 189, 134, 248, 112, 189, 248, 70, 85, 60, 160, 98, 250, 58, 7, 31, 222, 189, 150, 156, 93, 189, 184, 177, 233, 189, 236, 210, 46, 189, 156, 237, 165, 61, 197, 28, 85, 62, 174, 198, 50, 60, 4, 137, 158, 189, 201, 245, 171, 190, 119, 216, 154, 62, 42, 100, 47, 188, 30, 234, 32, 190, 66, 174, 208, 60, 158, 6, 230, 61, 73, 212, 39, 61, 119, 205, 15, 189, 29, 163, 188, 188, 56, 189, 4, 190, 80, 238, 183, 60, 83, 157, 237, 187, 165, 225, 117, 190, 37, 104, 243, 188, 201, 216, 0, 190, 224, 120, 22, 62, 130, 170, 140, 61, 110, 66, 122, 61, 108, 50, 10, 190, 72, 210, 46, 190, 71, 100, 187, 61, 91, 149, 131, 189, 53, 85, 5, 62, 39, 186, 216, 189, 153, 58, 226, 189, 40, 39, 108, 61, 178, 192, 64, 189, 90, 87, 76, 189, 71, 210, 217, 189, 19, 19, 49, 189, 36, 226, 142, 62, 10, 159, 51, 188, 35, 4, 141, 190, 142, 179, 100, 190, 195, 199, 161, 190, 176, 230, 182, 60, 88, 73, 225, 59, 225, 184, 17, 62, 185, 246, 197, 189, 41, 157, 96, 190, 94, 160, 99, 188, 156, 60, 127, 189, 77, 124, 60, 189, 130, 158, 165, 189, 120, 13, 90, 189, 162, 92, 12, 62, 251, 169, 148, 60, 63, 177, 106, 189, 180, 160, 230, 188, 144, 255, 15, 190, 86, 1, 103, 61, 2, 247, 28, 188, 85, 165, 89, 60, 217, 163, 76, 190, 194, 219, 210, 189, 234, 175, 87, 62, 50, 7, 65, 190, 248, 60, 18, 190, 224, 253, 0, 61, 211, 14, 94, 190, 61, 144, 31, 187, 170, 226, 203, 189, 34, 222, 214, 59, 121, 205, 94, 58, 47, 248, 89, 60, 146, 39, 143, 62, 59, 136, 128, 190, 85, 122, 40, 61, 106, 217, 0, 190, 64, 230, 93, 190, 138, 85, 102, 62, 72, 170, 139, 190, 255, 174, 13, 189, 254, 192, 192, 189, 255, 174, 210, 190, 178, 175, 132, 56, 92, 18, 46, 184, 75, 252, 157, 183, 56, 58, 130, 182, 236, 130, 171, 180, 248, 17, 0, 0, 143, 56, 1, 128, 0, 184, 4, 128, 163, 0, 6, 128, 79, 208, 4, 0, 144, 177, 2, 0, 97, 13, 4, 0, 123, 206, 5, 0, 238, 128, 3, 0, 190, 136, 5, 128, 51, 95, 1, 128, 33, 169, 2, 0, 220, 143, 0, 0, 59, 176, 3, 0, 254, 161, 3, 0, 255, 88, 212, 53, 193, 113, 159, 181, 203, 208, 152, 180, 153, 8, 240, 179, 169, 251, 164, 177, 88, 137, 5, 128, 165, 64, 1, 0, 31, 127, 2, 128, 177, 186, 5, 128, 75, 121, 0, 0, 46, 11, 35, 62, 73, 114, 28, 190, 224, 228, 4, 61, 53, 222, 101, 189, 206, 200, 49, 190, 36, 26, 2, 62, 55, 229, 183, 189, 217, 255, 210, 189, 176, 79, 159, 60, 161, 159, 53, 189, 158, 10, 88, 189, 53, 140, 65, 61, 243, 4, 5, 188, 242, 152, 228, 61, 181, 65, 226, 189, 58, 222, 239, 188, 87, 50, 4, 61, 232, 164, 140, 61, 116, 106, 46, 61, 133, 159, 146, 188, 79, 39, 234, 188, 52, 214, 19, 62, 8, 246, 238, 61, 229, 33, 84, 190, 68, 204, 174, 60, 223, 65, 226, 188, 142, 31, 218, 60, 218, 32, 135, 188, 117, 47, 89, 61, 185, 8, 150, 60, 26, 194, 48, 61, 7, 194, 167, 61, 111, 28, 151, 60, 33, 32, 17, 59, 222, 90, 182, 189, 227, 84, 246, 60, 181, 235, 70, 61, 91, 211, 41, 60, 160, 158, 71, 190, 199, 137, 88, 190, 5, 40, 0, 61, 145, 236, 38, 61, 186, 174, 202, 61, 189, 161, 93, 189, 241, 109, 31, 190, 239, 213, 224, 60, 203, 254, 144, 189, 217, 207, 171, 188, 27, 85, 177, 189, 29, 229, 218, 60, 242, 47, 142, 61, 150, 44, 197, 61, 113, 113, 60, 189, 43, 249, 13, 189, 159, 237, 137, 189, 91, 14, 1, 62, 70, 77, 18, 190, 26, 230, 4, 189, 113, 137, 53, 190, 67, 50, 85, 190, 64, 206, 16, 62, 22, 169, 1, 190, 230, 239, 156, 188, 184, 62, 129, 60, 88, 3, 222, 59, 127, 167, 162, 61, 68, 83, 94, 61, 124, 73, 248, 188, 168, 67, 161, 189, 59, 140, 58, 190, 131, 214, 40, 62, 65, 2, 204, 61, 183, 250, 2, 189, 74, 73, 5, 190, 235, 98, 18, 190, 55, 150, 131, 62, 169, 112, 20, 190, 162, 138, 85, 190, 224, 86, 199, 190, 61, 16, 130, 190, 191, 204, 112, 60, 53, 232, 130, 188, 54, 108, 175, 187, 223, 3, 75, 187, 239, 62, 16, 185, 51, 98, 156, 62, 141, 135, 172, 190, 79, 16, 130, 189, 32, 109, 131, 189, 231, 162, 186, 190, 220, 135, 71, 62, 75, 226, 212, 190, 134, 76, 144, 61, 125, 185, 123, 190, 91, 81, 210, 190, 0, 160, 4, 128, 78, 197, 3, 0, 122, 145, 5, 128, 210, 93, 5, 128, 104, 108, 2, 128, 213, 113, 4, 128, 89, 184, 4, 128, 72, 21, 5, 0, 207, 144, 4, 0, 57, 141, 4, 0, 123, 230, 5, 128, 16, 77, 6, 0, 63, 245, 0, 0, 82, 234, 0, 0, 95, 238, 3, 128, 254, 245, 3, 0, 63, 23, 6, 128, 187, 138, 2, 0, 28, 236, 2, 128, 31, 13, 3, 0, 56, 114, 5, 128, 172, 211, 0, 0, 206, 239, 2, 128, 113, 223, 1, 0, 246, 166, 6, 0, 118, 224, 5, 128, 54, 40, 6, 128, 247, 210, 4, 0, 225, 186, 4, 128, 71, 231, 5, 128, 119, 220, 108, 188, 202, 47, 172, 189, 147, 164, 20, 61, 225, 100, 21, 189, 52, 134, 201, 189, 235, 158, 36, 190, 170, 215, 39, 190, 179, 241, 42, 62, 34, 101, 35, 61, 3, 207, 139, 58, 91, 6, 115, 190, 71, 131, 31, 60, 178, 227, 3, 62, 126, 118, 243, 61, 124, 106, 21, 61, 75, 65, 204, 189, 13, 122, 45, 190, 210, 65, 80, 62, 50, 188, 175, 189, 121, 177, 58, 59, 144, 218, 100, 62, 138, 93, 13, 190, 40, 242, 130, 189, 45, 93, 93, 190, 181, 62, 192, 189, 179, 10, 103, 189, 42, 206, 96, 189, 15, 253, 82, 62, 16, 185, 207, 60, 102, 91, 1, 190, 225, 253, 167, 189, 5, 54, 44, 189, 72, 247, 48, 62, 144, 57, 154, 61, 29, 14, 165, 189, 113, 197, 29, 188, 120, 28, 238, 61, 101, 24, 199, 189, 86, 250, 48, 190, 11, 93, 205, 189, 185, 4, 159, 60, 244, 75, 134, 189, 165, 70, 74, 60, 89, 58, 13, 190, 210, 137, 1, 60, 189, 250, 55, 190, 77, 50, 46, 189, 14, 101, 97, 62, 191, 204, 2, 62, 242, 226, 136, 189, 65, 170, 100, 190, 154, 115, 1, 189, 170, 64, 70, 62, 242, 73, 167, 189, 230, 161, 238, 188, 35, 251, 116, 189, 45, 18, 59, 190, 192, 165, 112, 62, 208, 147, 11, 189, 81, 145, 169, 189, 248, 156, 225, 60, 211, 42, 37, 190, 124, 241, 59, 62, 30, 83, 88, 189, 230, 186, 28, 61, 137, 77, 35, 189, 142, 95, 40, 189, 58, 15, 26, 62, 106, 0, 50, 190, 158, 74, 177, 189, 187, 37, 96, 190, 166, 185, 157, 188, 112, 122, 39, 62, 164, 79, 30, 190, 255, 217, 62, 190, 187, 125, 112, 190, 153, 197, 131, 60, 44, 237, 112, 62, 168, 101, 94, 190, 89, 51, 88, 190, 119, 145, 179, 190, 4, 108, 191, 61, 131, 95, 66, 61, 42, 1, 155, 189, 206, 240, 89, 190, 101, 18, 194, 61, 208, 46, 233, 188, 141, 148, 180, 61, 166, 154, 47, 61, 188, 105, 117, 189, 47, 37, 241, 188, 90, 86, 0, 190, 133, 181, 143, 61, 191, 7, 12, 190, 59, 132, 176, 190, 122, 26, 132, 190, 213, 134, 23, 61, 137, 165, 54, 61, 13, 164, 2, 189, 227, 156, 17, 190, 60, 49, 53, 189, 225, 197, 49, 62, 132, 158, 10, 62, 135, 182, 61, 189, 139, 183, 143, 189, 68, 46, 19, 62, 201, 22, 152, 189, 1, 121, 54, 190, 36, 38, 231, 60, 25, 5, 226, 189, 214, 33, 173, 189, 80, 150, 57, 62, 75, 80, 240, 61, 153, 31, 26, 190, 58, 203, 117, 190, 121, 52, 152, 190, 177, 53, 108, 62, 210, 64, 161, 61, 58, 186, 157, 189, 200, 68, 11, 190, 158, 61, 155, 190, 116, 62, 191, 61, 164, 153, 13, 61, 0, 210, 15, 60, 242, 144, 52, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
iree_alignas(1) static const uint8_t module__utf8_tensor_3C6209B4FD120BDC[] = {116, 101, 110, 115, 111, 114};

struct module_t {
iree_allocator_t allocator;
};
struct module_state_t {
iree_allocator_t allocator;
uint8_t rwdata[4];
iree_vm_ref_t refs[9];
iree_vm_buffer_t rodata_buffers[5];
iree_vm_function_t imports[26];
};
typedef struct module_t module_t;
typedef struct module_state_t module_state_t;

// DECLARE FUNCTIONS
static iree_status_t module_call_0v_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*);
static iree_status_t module_call_0riiI_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int64_t, iree_vm_ref_t*);
static iree_status_t module_call_0riirII_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t, iree_vm_ref_t*);
static iree_status_t module_call_0riiirII_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t, iree_vm_ref_t*);
static iree_status_t module_call_0rrrIii_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, int64_t, int32_t, int32_t);
static iree_status_t module_call_0rIIiiCID_r_2_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int64_t, int64_t, int32_t, int32_t, int32_t, int64_t, int64_t, iree_vm_ref_t*);
static iree_status_t module_call_0rriiCID_v_3_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int64_t, int64_t, int64_t);
static iree_status_t module_call_0rriiCID_v_2_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int64_t, int64_t);
static iree_status_t module_call_0r_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*);
static iree_status_t module_call_0riii_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0r_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*);
static iree_status_t module_call_0riii_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t);
static iree_status_t module_call_0rrIIii_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int64_t, int64_t, int32_t, int32_t);
static iree_status_t module_call_0rrIrII_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int64_t, iree_vm_ref_t*, int64_t, int64_t);
static iree_status_t module_call_0rriCiD_v_1_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t);
static iree_status_t module_call_0rriCiD_v_2_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int32_t);
static iree_status_t module_call_0rriCiirIID_v_2_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t);
static iree_status_t module_call_0rriCiirIID_v_3_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t, int32_t, int32_t, iree_vm_ref_t*, int64_t, int64_t);
static iree_status_t module_call_0rriiii_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int32_t);
static iree_status_t module_call_0riCiiiD_r_3_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0riCiiiD_r_2_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0rrr_iI_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t*, int64_t*);
static iree_status_t module_call_0rIrriiiI_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int64_t, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, int32_t, int32_t, int64_t, iree_vm_ref_t*);
static iree_status_t module_call_0rIrrr_v_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int64_t, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*);
static iree_status_t module_call_0rIrrCrD_v_1_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int64_t, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0rrrrCrD_r_18_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, int32_t, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*);
static iree_status_t module_call_0ri_r_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, iree_vm_ref_t*);
static iree_status_t module_call_0iCrD_i_1_import_shim(iree_vm_stack_t*, iree_vm_function_t*, int32_t, int32_t, iree_vm_ref_t*, int32_t*);
static iree_status_t module_call_0riCrD_r_1_import_shim(iree_vm_stack_t*, iree_vm_function_t*, iree_vm_ref_t*, int32_t, int32_t, iree_vm_ref_t*, iree_vm_ref_t*);
static iree_status_t module_main(iree_vm_stack_t*, module_t*, module_state_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*, iree_vm_ref_t*);
static iree_status_t module_main_export_shim(iree_vm_stack_t*, uint32_t, iree_byte_span_t, iree_byte_span_t, void*, void*);
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

static iree_status_t module_call_0riirII_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, iree_vm_ref_t* v6, int64_t v7, int64_t v8, iree_vm_ref_t* v9) {
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
  int32_t* v43;
  iree_host_size_t v44;
  uint8_t* v45;
  iree_host_size_t v46;
  int32_t* v47;
  iree_host_size_t v48;
  uint8_t* v49;
  iree_vm_ref_t* v50;
  iree_host_size_t v51;
  uint8_t* v52;
  iree_host_size_t v53;
  int64_t* v54;
  iree_host_size_t v55;
  uint8_t* v56;
  iree_host_size_t v57;
  int64_t* v58;
  iree_vm_module_t* v59;
  iree_status_t v60;
  bool v61;
  int32_t v62;
  bool v63;
  iree_byte_span_t v64;
  uint8_t* v65;
  iree_vm_ref_t* v66;
  iree_status_t v67;
  iree_status_t v68;
  ;
  v11 = 0;
  v12 = sizeof(iree_vm_ref_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(int32_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int32_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = sizeof(int64_t);
  v21 = EMITC_BINARY(+, v19, v20);
  v22 = sizeof(int64_t);
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
  v42 = sizeof(int32_t);
  v43 = &v4;
  memcpy(v41, v43, v42);
  v44 = sizeof(int32_t);
  v45 = EMITC_BINARY(+, v41, v44);
  v46 = sizeof(int32_t);
  v47 = &v5;
  memcpy(v45, v47, v46);
  v48 = sizeof(int32_t);
  v49 = EMITC_BINARY(+, v45, v48);
  v50 = (iree_vm_ref_t*) v49;
  iree_vm_ref_assign(v6, v50);
  v51 = sizeof(iree_vm_ref_t);
  v52 = EMITC_BINARY(+, v49, v51);
  v53 = sizeof(int64_t);
  v54 = &v7;
  memcpy(v52, v54, v53);
  v55 = sizeof(int64_t);
  v56 = EMITC_BINARY(+, v52, v55);
  v57 = sizeof(int64_t);
  v58 = &v8;
  memcpy(v56, v58, v57);
  v59 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v60 = EMITC_STRUCT_PTR_MEMBER_CALL(v59, begin_call, v59, v1, v10);
  v61 = (bool) v60;
  v62 = vm_cmp_nz_i32(v61);
  v63 = (bool) v62;
  if (v63) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v64 = EMITC_STRUCT_MEMBER(v10, results);
  v65 = EMITC_STRUCT_MEMBER(v64, data);
  v66 = (iree_vm_ref_t*) v65;
  iree_vm_ref_move(v66, v9);
  v67 = iree_ok_status();
  return v67;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v6);
  v68 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v68;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v6);
  return v60;
}

static iree_status_t module_call_0riiirII_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, int32_t v6, iree_vm_ref_t* v7, int64_t v8, int64_t v9, iree_vm_ref_t* v10) {
  iree_vm_function_call_t v11;
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
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_vm_module_t* v29;
  bool v30;
  int32_t v31;
  bool v32;
  iree_vm_function_t v33;
  iree_byte_span_t* v34;
  void* v35;
  uint8_t* v36;
  iree_byte_span_t* v37;
  void* v38;
  uint8_t* v39;
  iree_byte_span_t v40;
  uint8_t* v41;
  iree_vm_ref_t* v42;
  iree_host_size_t v43;
  uint8_t* v44;
  iree_host_size_t v45;
  int32_t* v46;
  iree_host_size_t v47;
  uint8_t* v48;
  iree_host_size_t v49;
  int32_t* v50;
  iree_host_size_t v51;
  uint8_t* v52;
  iree_host_size_t v53;
  int32_t* v54;
  iree_host_size_t v55;
  uint8_t* v56;
  iree_vm_ref_t* v57;
  iree_host_size_t v58;
  uint8_t* v59;
  iree_host_size_t v60;
  int64_t* v61;
  iree_host_size_t v62;
  uint8_t* v63;
  iree_host_size_t v64;
  int64_t* v65;
  iree_vm_module_t* v66;
  iree_status_t v67;
  bool v68;
  int32_t v69;
  bool v70;
  iree_byte_span_t v71;
  uint8_t* v72;
  iree_vm_ref_t* v73;
  iree_status_t v74;
  iree_status_t v75;
  ;
  v12 = 0;
  v13 = sizeof(iree_vm_ref_t);
  v14 = EMITC_BINARY(+, v12, v13);
  v15 = sizeof(int32_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = sizeof(int32_t);
  v18 = EMITC_BINARY(+, v16, v17);
  v19 = sizeof(int32_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(iree_vm_ref_t);
  v22 = EMITC_BINARY(+, v20, v21);
  v23 = sizeof(int64_t);
  v24 = EMITC_BINARY(+, v22, v23);
  v25 = sizeof(int64_t);
  v26 = EMITC_BINARY(+, v24, v25);
  v27 = sizeof(iree_vm_ref_t);
  v28 = EMITC_BINARY(+, v12, v27);
  v29 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v30 = EMITC_UNARY(!, v29);
  v31 = vm_cmp_nz_i32(v30);
  v32 = (bool) v31;
  if (v32) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v33 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v11, function, v33);
  v34 = EMITC_STRUCT_MEMBER_ADDRESS(v11, arguments);
  v35 = iree_alloca(v26);
  v36 = (uint8_t*) v35;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v34, data_length, v26);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v34, data, v36);
  memset(v36, 0, v26);
  v37 = EMITC_STRUCT_MEMBER_ADDRESS(v11, results);
  v38 = iree_alloca(v28);
  v39 = (uint8_t*) v38;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data_length, v28);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data, v39);
  memset(v39, 0, v28);
  v40 = EMITC_STRUCT_MEMBER(v11, arguments);
  v41 = EMITC_STRUCT_MEMBER(v40, data);
  v42 = (iree_vm_ref_t*) v41;
  iree_vm_ref_assign(v3, v42);
  v43 = sizeof(iree_vm_ref_t);
  v44 = EMITC_BINARY(+, v41, v43);
  v45 = sizeof(int32_t);
  v46 = &v4;
  memcpy(v44, v46, v45);
  v47 = sizeof(int32_t);
  v48 = EMITC_BINARY(+, v44, v47);
  v49 = sizeof(int32_t);
  v50 = &v5;
  memcpy(v48, v50, v49);
  v51 = sizeof(int32_t);
  v52 = EMITC_BINARY(+, v48, v51);
  v53 = sizeof(int32_t);
  v54 = &v6;
  memcpy(v52, v54, v53);
  v55 = sizeof(int32_t);
  v56 = EMITC_BINARY(+, v52, v55);
  v57 = (iree_vm_ref_t*) v56;
  iree_vm_ref_assign(v7, v57);
  v58 = sizeof(iree_vm_ref_t);
  v59 = EMITC_BINARY(+, v56, v58);
  v60 = sizeof(int64_t);
  v61 = &v8;
  memcpy(v59, v61, v60);
  v62 = sizeof(int64_t);
  v63 = EMITC_BINARY(+, v59, v62);
  v64 = sizeof(int64_t);
  v65 = &v9;
  memcpy(v63, v65, v64);
  v66 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v67 = EMITC_STRUCT_PTR_MEMBER_CALL(v66, begin_call, v66, v1, v11);
  v68 = (bool) v67;
  v69 = vm_cmp_nz_i32(v68);
  v70 = (bool) v69;
  if (v70) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v71 = EMITC_STRUCT_MEMBER(v11, results);
  v72 = EMITC_STRUCT_MEMBER(v71, data);
  v73 = (iree_vm_ref_t*) v72;
  iree_vm_ref_move(v73, v10);
  v74 = iree_ok_status();
  return v74;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v7);
  v75 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v75;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v7);
  return v67;
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

static iree_status_t module_call_0rIIiiCID_r_2_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int64_t v4, int64_t v5, int32_t v6, int32_t v7, int32_t v8, int64_t v9, int64_t v10, iree_vm_ref_t* v11) {
  iree_vm_function_call_t v12;
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
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_host_size_t v29;
  iree_host_size_t v30;
  iree_host_size_t v31;
  iree_vm_module_t* v32;
  bool v33;
  int32_t v34;
  bool v35;
  iree_vm_function_t v36;
  iree_byte_span_t* v37;
  void* v38;
  uint8_t* v39;
  iree_byte_span_t* v40;
  void* v41;
  uint8_t* v42;
  iree_byte_span_t v43;
  uint8_t* v44;
  iree_vm_ref_t* v45;
  iree_host_size_t v46;
  uint8_t* v47;
  iree_host_size_t v48;
  int64_t* v49;
  iree_host_size_t v50;
  uint8_t* v51;
  iree_host_size_t v52;
  int64_t* v53;
  iree_host_size_t v54;
  uint8_t* v55;
  iree_host_size_t v56;
  int32_t* v57;
  iree_host_size_t v58;
  uint8_t* v59;
  iree_host_size_t v60;
  int32_t* v61;
  iree_host_size_t v62;
  uint8_t* v63;
  iree_host_size_t v64;
  int32_t* v65;
  iree_host_size_t v66;
  uint8_t* v67;
  iree_host_size_t v68;
  int64_t* v69;
  iree_host_size_t v70;
  uint8_t* v71;
  iree_host_size_t v72;
  int64_t* v73;
  iree_vm_module_t* v74;
  iree_status_t v75;
  bool v76;
  int32_t v77;
  bool v78;
  iree_byte_span_t v79;
  uint8_t* v80;
  iree_vm_ref_t* v81;
  iree_status_t v82;
  iree_status_t v83;
  ;
  v13 = 0;
  v14 = sizeof(iree_vm_ref_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int64_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(int64_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = sizeof(int32_t);
  v21 = EMITC_BINARY(+, v19, v20);
  v22 = sizeof(int32_t);
  v23 = EMITC_BINARY(+, v21, v22);
  v24 = sizeof(int32_t);
  v25 = EMITC_BINARY(+, v23, v24);
  v26 = sizeof(int64_t);
  v27 = EMITC_BINARY(+, v25, v26);
  v28 = sizeof(int64_t);
  v29 = EMITC_BINARY(+, v27, v28);
  v30 = sizeof(iree_vm_ref_t);
  v31 = EMITC_BINARY(+, v13, v30);
  v32 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v33 = EMITC_UNARY(!, v32);
  v34 = vm_cmp_nz_i32(v33);
  v35 = (bool) v34;
  if (v35) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v36 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v12, function, v36);
  v37 = EMITC_STRUCT_MEMBER_ADDRESS(v12, arguments);
  v38 = iree_alloca(v29);
  v39 = (uint8_t*) v38;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data_length, v29);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data, v39);
  memset(v39, 0, v29);
  v40 = EMITC_STRUCT_MEMBER_ADDRESS(v12, results);
  v41 = iree_alloca(v31);
  v42 = (uint8_t*) v41;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data_length, v31);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data, v42);
  memset(v42, 0, v31);
  v43 = EMITC_STRUCT_MEMBER(v12, arguments);
  v44 = EMITC_STRUCT_MEMBER(v43, data);
  v45 = (iree_vm_ref_t*) v44;
  iree_vm_ref_assign(v3, v45);
  v46 = sizeof(iree_vm_ref_t);
  v47 = EMITC_BINARY(+, v44, v46);
  v48 = sizeof(int64_t);
  v49 = &v4;
  memcpy(v47, v49, v48);
  v50 = sizeof(int64_t);
  v51 = EMITC_BINARY(+, v47, v50);
  v52 = sizeof(int64_t);
  v53 = &v5;
  memcpy(v51, v53, v52);
  v54 = sizeof(int64_t);
  v55 = EMITC_BINARY(+, v51, v54);
  v56 = sizeof(int32_t);
  v57 = &v6;
  memcpy(v55, v57, v56);
  v58 = sizeof(int32_t);
  v59 = EMITC_BINARY(+, v55, v58);
  v60 = sizeof(int32_t);
  v61 = &v7;
  memcpy(v59, v61, v60);
  v62 = sizeof(int32_t);
  v63 = EMITC_BINARY(+, v59, v62);
  v64 = sizeof(int32_t);
  v65 = &v8;
  memcpy(v63, v65, v64);
  v66 = sizeof(int32_t);
  v67 = EMITC_BINARY(+, v63, v66);
  v68 = sizeof(int64_t);
  v69 = &v9;
  memcpy(v67, v69, v68);
  v70 = sizeof(int64_t);
  v71 = EMITC_BINARY(+, v67, v70);
  v72 = sizeof(int64_t);
  v73 = &v10;
  memcpy(v71, v73, v72);
  v74 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v75 = EMITC_STRUCT_PTR_MEMBER_CALL(v74, begin_call, v74, v1, v12);
  v76 = (bool) v75;
  v77 = vm_cmp_nz_i32(v76);
  v78 = (bool) v77;
  if (v78) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v79 = EMITC_STRUCT_MEMBER(v12, results);
  v80 = EMITC_STRUCT_MEMBER(v79, data);
  v81 = (iree_vm_ref_t*) v80;
  iree_vm_ref_move(v81, v11);
  v82 = iree_ok_status();
  return v82;
  label4:
  iree_vm_ref_release(v3);
  v83 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v83;
  label5:
  iree_vm_ref_release(v3);
  return v75;
}

static iree_status_t module_call_0rriiCID_v_3_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int32_t v5, int32_t v6, int32_t v7, int64_t v8, int64_t v9, int64_t v10) {
  iree_vm_function_call_t v11;
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
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_vm_module_t* v29;
  bool v30;
  int32_t v31;
  bool v32;
  iree_vm_function_t v33;
  iree_byte_span_t* v34;
  void* v35;
  uint8_t* v36;
  iree_byte_span_t* v37;
  void* v38;
  uint8_t* v39;
  iree_byte_span_t v40;
  uint8_t* v41;
  iree_vm_ref_t* v42;
  iree_host_size_t v43;
  uint8_t* v44;
  iree_vm_ref_t* v45;
  iree_host_size_t v46;
  uint8_t* v47;
  iree_host_size_t v48;
  int32_t* v49;
  iree_host_size_t v50;
  uint8_t* v51;
  iree_host_size_t v52;
  int32_t* v53;
  iree_host_size_t v54;
  uint8_t* v55;
  iree_host_size_t v56;
  int32_t* v57;
  iree_host_size_t v58;
  uint8_t* v59;
  iree_host_size_t v60;
  int64_t* v61;
  iree_host_size_t v62;
  uint8_t* v63;
  iree_host_size_t v64;
  int64_t* v65;
  iree_host_size_t v66;
  uint8_t* v67;
  iree_host_size_t v68;
  int64_t* v69;
  iree_vm_module_t* v70;
  iree_status_t v71;
  bool v72;
  int32_t v73;
  bool v74;
  iree_status_t v75;
  iree_status_t v76;
  ;
  v12 = 0;
  v13 = sizeof(iree_vm_ref_t);
  v14 = EMITC_BINARY(+, v12, v13);
  v15 = sizeof(iree_vm_ref_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = sizeof(int32_t);
  v18 = EMITC_BINARY(+, v16, v17);
  v19 = sizeof(int32_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(int32_t);
  v22 = EMITC_BINARY(+, v20, v21);
  v23 = sizeof(int64_t);
  v24 = EMITC_BINARY(+, v22, v23);
  v25 = sizeof(int64_t);
  v26 = EMITC_BINARY(+, v24, v25);
  v27 = sizeof(int64_t);
  v28 = EMITC_BINARY(+, v26, v27);
  v29 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v30 = EMITC_UNARY(!, v29);
  v31 = vm_cmp_nz_i32(v30);
  v32 = (bool) v31;
  if (v32) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v33 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v11, function, v33);
  v34 = EMITC_STRUCT_MEMBER_ADDRESS(v11, arguments);
  v35 = iree_alloca(v28);
  v36 = (uint8_t*) v35;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v34, data_length, v28);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v34, data, v36);
  memset(v36, 0, v28);
  v37 = EMITC_STRUCT_MEMBER_ADDRESS(v11, results);
  v38 = iree_alloca(v12);
  v39 = (uint8_t*) v38;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data_length, v12);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data, v39);
  memset(v39, 0, v12);
  v40 = EMITC_STRUCT_MEMBER(v11, arguments);
  v41 = EMITC_STRUCT_MEMBER(v40, data);
  v42 = (iree_vm_ref_t*) v41;
  iree_vm_ref_assign(v3, v42);
  v43 = sizeof(iree_vm_ref_t);
  v44 = EMITC_BINARY(+, v41, v43);
  v45 = (iree_vm_ref_t*) v44;
  iree_vm_ref_assign(v4, v45);
  v46 = sizeof(iree_vm_ref_t);
  v47 = EMITC_BINARY(+, v44, v46);
  v48 = sizeof(int32_t);
  v49 = &v5;
  memcpy(v47, v49, v48);
  v50 = sizeof(int32_t);
  v51 = EMITC_BINARY(+, v47, v50);
  v52 = sizeof(int32_t);
  v53 = &v6;
  memcpy(v51, v53, v52);
  v54 = sizeof(int32_t);
  v55 = EMITC_BINARY(+, v51, v54);
  v56 = sizeof(int32_t);
  v57 = &v7;
  memcpy(v55, v57, v56);
  v58 = sizeof(int32_t);
  v59 = EMITC_BINARY(+, v55, v58);
  v60 = sizeof(int64_t);
  v61 = &v8;
  memcpy(v59, v61, v60);
  v62 = sizeof(int64_t);
  v63 = EMITC_BINARY(+, v59, v62);
  v64 = sizeof(int64_t);
  v65 = &v9;
  memcpy(v63, v65, v64);
  v66 = sizeof(int64_t);
  v67 = EMITC_BINARY(+, v63, v66);
  v68 = sizeof(int64_t);
  v69 = &v10;
  memcpy(v67, v69, v68);
  v70 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v71 = EMITC_STRUCT_PTR_MEMBER_CALL(v70, begin_call, v70, v1, v11);
  v72 = (bool) v71;
  v73 = vm_cmp_nz_i32(v72);
  v74 = (bool) v73;
  if (v74) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v75 = iree_ok_status();
  return v75;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  v76 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v76;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  return v71;
}

static iree_status_t module_call_0rriiCID_v_2_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int32_t v5, int32_t v6, int32_t v7, int64_t v8, int64_t v9) {
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
  iree_host_size_t v45;
  int32_t* v46;
  iree_host_size_t v47;
  uint8_t* v48;
  iree_host_size_t v49;
  int32_t* v50;
  iree_host_size_t v51;
  uint8_t* v52;
  iree_host_size_t v53;
  int32_t* v54;
  iree_host_size_t v55;
  uint8_t* v56;
  iree_host_size_t v57;
  int64_t* v58;
  iree_host_size_t v59;
  uint8_t* v60;
  iree_host_size_t v61;
  int64_t* v62;
  iree_vm_module_t* v63;
  iree_status_t v64;
  bool v65;
  int32_t v66;
  bool v67;
  iree_status_t v68;
  iree_status_t v69;
  ;
  v11 = 0;
  v12 = sizeof(iree_vm_ref_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(iree_vm_ref_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int32_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(int32_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = sizeof(int32_t);
  v21 = EMITC_BINARY(+, v19, v20);
  v22 = sizeof(int64_t);
  v23 = EMITC_BINARY(+, v21, v22);
  v24 = sizeof(int64_t);
  v25 = EMITC_BINARY(+, v23, v24);
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
  v32 = iree_alloca(v25);
  v33 = (uint8_t*) v32;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data_length, v25);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v31, data, v33);
  memset(v33, 0, v25);
  v34 = EMITC_STRUCT_MEMBER_ADDRESS(v10, results);
  v35 = iree_alloca(v11);
  v36 = (uint8_t*) v35;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v34, data_length, v11);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v34, data, v36);
  memset(v36, 0, v11);
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
  v45 = sizeof(int32_t);
  v46 = &v5;
  memcpy(v44, v46, v45);
  v47 = sizeof(int32_t);
  v48 = EMITC_BINARY(+, v44, v47);
  v49 = sizeof(int32_t);
  v50 = &v6;
  memcpy(v48, v50, v49);
  v51 = sizeof(int32_t);
  v52 = EMITC_BINARY(+, v48, v51);
  v53 = sizeof(int32_t);
  v54 = &v7;
  memcpy(v52, v54, v53);
  v55 = sizeof(int32_t);
  v56 = EMITC_BINARY(+, v52, v55);
  v57 = sizeof(int64_t);
  v58 = &v8;
  memcpy(v56, v58, v57);
  v59 = sizeof(int64_t);
  v60 = EMITC_BINARY(+, v56, v59);
  v61 = sizeof(int64_t);
  v62 = &v9;
  memcpy(v60, v62, v61);
  v63 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v64 = EMITC_STRUCT_PTR_MEMBER_CALL(v63, begin_call, v63, v1, v10);
  v65 = (bool) v64;
  v66 = vm_cmp_nz_i32(v65);
  v67 = (bool) v66;
  if (v67) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v68 = iree_ok_status();
  return v68;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  v69 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v69;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  return v64;
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

static iree_status_t module_call_0rrIIii_v_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int64_t v5, int64_t v6, int32_t v7, int32_t v8) {
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
  v15 = sizeof(int64_t);
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
  v42 = sizeof(int64_t);
  v43 = &v5;
  memcpy(v41, v43, v42);
  v44 = sizeof(int64_t);
  v45 = EMITC_BINARY(+, v41, v44);
  v46 = sizeof(int64_t);
  v47 = &v6;
  memcpy(v45, v47, v46);
  v48 = sizeof(int64_t);
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

static iree_status_t module_call_0rrIrII_v_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int64_t v5, iree_vm_ref_t* v6, int64_t v7, int64_t v8) {
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
  int64_t* v43;
  iree_host_size_t v44;
  uint8_t* v45;
  iree_vm_ref_t* v46;
  iree_host_size_t v47;
  uint8_t* v48;
  iree_host_size_t v49;
  int64_t* v50;
  iree_host_size_t v51;
  uint8_t* v52;
  iree_host_size_t v53;
  int64_t* v54;
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
  v15 = sizeof(int64_t);
  v16 = EMITC_BINARY(+, v14, v15);
  v17 = sizeof(iree_vm_ref_t);
  v18 = EMITC_BINARY(+, v16, v17);
  v19 = sizeof(int64_t);
  v20 = EMITC_BINARY(+, v18, v19);
  v21 = sizeof(int64_t);
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
  v42 = sizeof(int64_t);
  v43 = &v5;
  memcpy(v41, v43, v42);
  v44 = sizeof(int64_t);
  v45 = EMITC_BINARY(+, v41, v44);
  v46 = (iree_vm_ref_t*) v45;
  iree_vm_ref_assign(v6, v46);
  v47 = sizeof(iree_vm_ref_t);
  v48 = EMITC_BINARY(+, v45, v47);
  v49 = sizeof(int64_t);
  v50 = &v7;
  memcpy(v48, v50, v49);
  v51 = sizeof(int64_t);
  v52 = EMITC_BINARY(+, v48, v51);
  v53 = sizeof(int64_t);
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
  iree_vm_ref_release(v6);
  v61 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v61;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v6);
  return v56;
}

static iree_status_t module_call_0rriCiD_v_1_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int32_t v5, int32_t v6, int32_t v7) {
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

static iree_status_t module_call_0rriCiD_v_2_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int32_t v5, int32_t v6, int32_t v7, int32_t v8) {
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

static iree_status_t module_call_0rriCiirIID_v_3_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, int32_t v5, int32_t v6, int32_t v7, int32_t v8, iree_vm_ref_t* v9, int64_t v10, int64_t v11, int32_t v12, int32_t v13, iree_vm_ref_t* v14, int64_t v15, int64_t v16, int32_t v17, int32_t v18, iree_vm_ref_t* v19, int64_t v20, int64_t v21) {
  iree_vm_function_call_t v22;
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
  iree_host_size_t v47;
  iree_host_size_t v48;
  iree_host_size_t v49;
  iree_host_size_t v50;
  iree_host_size_t v51;
  iree_host_size_t v52;
  iree_host_size_t v53;
  iree_host_size_t v54;
  iree_host_size_t v55;
  iree_host_size_t v56;
  iree_host_size_t v57;
  iree_host_size_t v58;
  iree_host_size_t v59;
  iree_host_size_t v60;
  iree_host_size_t v61;
  iree_vm_module_t* v62;
  bool v63;
  int32_t v64;
  bool v65;
  iree_vm_function_t v66;
  iree_byte_span_t* v67;
  void* v68;
  uint8_t* v69;
  iree_byte_span_t* v70;
  void* v71;
  uint8_t* v72;
  iree_byte_span_t v73;
  uint8_t* v74;
  iree_vm_ref_t* v75;
  iree_host_size_t v76;
  uint8_t* v77;
  iree_vm_ref_t* v78;
  iree_host_size_t v79;
  uint8_t* v80;
  iree_host_size_t v81;
  int32_t* v82;
  iree_host_size_t v83;
  uint8_t* v84;
  iree_host_size_t v85;
  int32_t* v86;
  iree_host_size_t v87;
  uint8_t* v88;
  iree_host_size_t v89;
  int32_t* v90;
  iree_host_size_t v91;
  uint8_t* v92;
  iree_host_size_t v93;
  int32_t* v94;
  iree_host_size_t v95;
  uint8_t* v96;
  iree_vm_ref_t* v97;
  iree_host_size_t v98;
  uint8_t* v99;
  iree_host_size_t v100;
  int64_t* v101;
  iree_host_size_t v102;
  uint8_t* v103;
  iree_host_size_t v104;
  int64_t* v105;
  iree_host_size_t v106;
  uint8_t* v107;
  iree_host_size_t v108;
  int32_t* v109;
  iree_host_size_t v110;
  uint8_t* v111;
  iree_host_size_t v112;
  int32_t* v113;
  iree_host_size_t v114;
  uint8_t* v115;
  iree_vm_ref_t* v116;
  iree_host_size_t v117;
  uint8_t* v118;
  iree_host_size_t v119;
  int64_t* v120;
  iree_host_size_t v121;
  uint8_t* v122;
  iree_host_size_t v123;
  int64_t* v124;
  iree_host_size_t v125;
  uint8_t* v126;
  iree_host_size_t v127;
  int32_t* v128;
  iree_host_size_t v129;
  uint8_t* v130;
  iree_host_size_t v131;
  int32_t* v132;
  iree_host_size_t v133;
  uint8_t* v134;
  iree_vm_ref_t* v135;
  iree_host_size_t v136;
  uint8_t* v137;
  iree_host_size_t v138;
  int64_t* v139;
  iree_host_size_t v140;
  uint8_t* v141;
  iree_host_size_t v142;
  int64_t* v143;
  iree_vm_module_t* v144;
  iree_status_t v145;
  bool v146;
  int32_t v147;
  bool v148;
  iree_status_t v149;
  iree_status_t v150;
  ;
  v23 = 0;
  v24 = sizeof(iree_vm_ref_t);
  v25 = EMITC_BINARY(+, v23, v24);
  v26 = sizeof(iree_vm_ref_t);
  v27 = EMITC_BINARY(+, v25, v26);
  v28 = sizeof(int32_t);
  v29 = EMITC_BINARY(+, v27, v28);
  v30 = sizeof(int32_t);
  v31 = EMITC_BINARY(+, v29, v30);
  v32 = sizeof(int32_t);
  v33 = EMITC_BINARY(+, v31, v32);
  v34 = sizeof(int32_t);
  v35 = EMITC_BINARY(+, v33, v34);
  v36 = sizeof(iree_vm_ref_t);
  v37 = EMITC_BINARY(+, v35, v36);
  v38 = sizeof(int64_t);
  v39 = EMITC_BINARY(+, v37, v38);
  v40 = sizeof(int64_t);
  v41 = EMITC_BINARY(+, v39, v40);
  v42 = sizeof(int32_t);
  v43 = EMITC_BINARY(+, v41, v42);
  v44 = sizeof(int32_t);
  v45 = EMITC_BINARY(+, v43, v44);
  v46 = sizeof(iree_vm_ref_t);
  v47 = EMITC_BINARY(+, v45, v46);
  v48 = sizeof(int64_t);
  v49 = EMITC_BINARY(+, v47, v48);
  v50 = sizeof(int64_t);
  v51 = EMITC_BINARY(+, v49, v50);
  v52 = sizeof(int32_t);
  v53 = EMITC_BINARY(+, v51, v52);
  v54 = sizeof(int32_t);
  v55 = EMITC_BINARY(+, v53, v54);
  v56 = sizeof(iree_vm_ref_t);
  v57 = EMITC_BINARY(+, v55, v56);
  v58 = sizeof(int64_t);
  v59 = EMITC_BINARY(+, v57, v58);
  v60 = sizeof(int64_t);
  v61 = EMITC_BINARY(+, v59, v60);
  v62 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v63 = EMITC_UNARY(!, v62);
  v64 = vm_cmp_nz_i32(v63);
  v65 = (bool) v64;
  if (v65) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v66 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v22, function, v66);
  v67 = EMITC_STRUCT_MEMBER_ADDRESS(v22, arguments);
  v68 = iree_alloca(v61);
  v69 = (uint8_t*) v68;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v67, data_length, v61);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v67, data, v69);
  memset(v69, 0, v61);
  v70 = EMITC_STRUCT_MEMBER_ADDRESS(v22, results);
  v71 = iree_alloca(v23);
  v72 = (uint8_t*) v71;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v70, data_length, v23);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v70, data, v72);
  memset(v72, 0, v23);
  v73 = EMITC_STRUCT_MEMBER(v22, arguments);
  v74 = EMITC_STRUCT_MEMBER(v73, data);
  v75 = (iree_vm_ref_t*) v74;
  iree_vm_ref_assign(v3, v75);
  v76 = sizeof(iree_vm_ref_t);
  v77 = EMITC_BINARY(+, v74, v76);
  v78 = (iree_vm_ref_t*) v77;
  iree_vm_ref_assign(v4, v78);
  v79 = sizeof(iree_vm_ref_t);
  v80 = EMITC_BINARY(+, v77, v79);
  v81 = sizeof(int32_t);
  v82 = &v5;
  memcpy(v80, v82, v81);
  v83 = sizeof(int32_t);
  v84 = EMITC_BINARY(+, v80, v83);
  v85 = sizeof(int32_t);
  v86 = &v6;
  memcpy(v84, v86, v85);
  v87 = sizeof(int32_t);
  v88 = EMITC_BINARY(+, v84, v87);
  v89 = sizeof(int32_t);
  v90 = &v7;
  memcpy(v88, v90, v89);
  v91 = sizeof(int32_t);
  v92 = EMITC_BINARY(+, v88, v91);
  v93 = sizeof(int32_t);
  v94 = &v8;
  memcpy(v92, v94, v93);
  v95 = sizeof(int32_t);
  v96 = EMITC_BINARY(+, v92, v95);
  v97 = (iree_vm_ref_t*) v96;
  iree_vm_ref_assign(v9, v97);
  v98 = sizeof(iree_vm_ref_t);
  v99 = EMITC_BINARY(+, v96, v98);
  v100 = sizeof(int64_t);
  v101 = &v10;
  memcpy(v99, v101, v100);
  v102 = sizeof(int64_t);
  v103 = EMITC_BINARY(+, v99, v102);
  v104 = sizeof(int64_t);
  v105 = &v11;
  memcpy(v103, v105, v104);
  v106 = sizeof(int64_t);
  v107 = EMITC_BINARY(+, v103, v106);
  v108 = sizeof(int32_t);
  v109 = &v12;
  memcpy(v107, v109, v108);
  v110 = sizeof(int32_t);
  v111 = EMITC_BINARY(+, v107, v110);
  v112 = sizeof(int32_t);
  v113 = &v13;
  memcpy(v111, v113, v112);
  v114 = sizeof(int32_t);
  v115 = EMITC_BINARY(+, v111, v114);
  v116 = (iree_vm_ref_t*) v115;
  iree_vm_ref_assign(v14, v116);
  v117 = sizeof(iree_vm_ref_t);
  v118 = EMITC_BINARY(+, v115, v117);
  v119 = sizeof(int64_t);
  v120 = &v15;
  memcpy(v118, v120, v119);
  v121 = sizeof(int64_t);
  v122 = EMITC_BINARY(+, v118, v121);
  v123 = sizeof(int64_t);
  v124 = &v16;
  memcpy(v122, v124, v123);
  v125 = sizeof(int64_t);
  v126 = EMITC_BINARY(+, v122, v125);
  v127 = sizeof(int32_t);
  v128 = &v17;
  memcpy(v126, v128, v127);
  v129 = sizeof(int32_t);
  v130 = EMITC_BINARY(+, v126, v129);
  v131 = sizeof(int32_t);
  v132 = &v18;
  memcpy(v130, v132, v131);
  v133 = sizeof(int32_t);
  v134 = EMITC_BINARY(+, v130, v133);
  v135 = (iree_vm_ref_t*) v134;
  iree_vm_ref_assign(v19, v135);
  v136 = sizeof(iree_vm_ref_t);
  v137 = EMITC_BINARY(+, v134, v136);
  v138 = sizeof(int64_t);
  v139 = &v20;
  memcpy(v137, v139, v138);
  v140 = sizeof(int64_t);
  v141 = EMITC_BINARY(+, v137, v140);
  v142 = sizeof(int64_t);
  v143 = &v21;
  memcpy(v141, v143, v142);
  v144 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v145 = EMITC_STRUCT_PTR_MEMBER_CALL(v144, begin_call, v144, v1, v22);
  v146 = (bool) v145;
  v147 = vm_cmp_nz_i32(v146);
  v148 = (bool) v147;
  if (v148) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v149 = iree_ok_status();
  return v149;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  v150 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v150;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  return v145;
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

static iree_status_t module_call_0riCiiiD_r_3_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int32_t v4, int32_t v5, int32_t v6, int32_t v7, int32_t v8, int32_t v9, int32_t v10, int32_t v11, int32_t v12, int32_t v13, int32_t v14, iree_vm_ref_t* v15) {
  iree_vm_function_call_t v16;
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
  iree_host_size_t v35;
  iree_host_size_t v36;
  iree_host_size_t v37;
  iree_host_size_t v38;
  iree_host_size_t v39;
  iree_host_size_t v40;
  iree_host_size_t v41;
  iree_host_size_t v42;
  iree_host_size_t v43;
  iree_vm_module_t* v44;
  bool v45;
  int32_t v46;
  bool v47;
  iree_vm_function_t v48;
  iree_byte_span_t* v49;
  void* v50;
  uint8_t* v51;
  iree_byte_span_t* v52;
  void* v53;
  uint8_t* v54;
  iree_byte_span_t v55;
  uint8_t* v56;
  iree_vm_ref_t* v57;
  iree_host_size_t v58;
  uint8_t* v59;
  iree_host_size_t v60;
  int32_t* v61;
  iree_host_size_t v62;
  uint8_t* v63;
  iree_host_size_t v64;
  int32_t* v65;
  iree_host_size_t v66;
  uint8_t* v67;
  iree_host_size_t v68;
  int32_t* v69;
  iree_host_size_t v70;
  uint8_t* v71;
  iree_host_size_t v72;
  int32_t* v73;
  iree_host_size_t v74;
  uint8_t* v75;
  iree_host_size_t v76;
  int32_t* v77;
  iree_host_size_t v78;
  uint8_t* v79;
  iree_host_size_t v80;
  int32_t* v81;
  iree_host_size_t v82;
  uint8_t* v83;
  iree_host_size_t v84;
  int32_t* v85;
  iree_host_size_t v86;
  uint8_t* v87;
  iree_host_size_t v88;
  int32_t* v89;
  iree_host_size_t v90;
  uint8_t* v91;
  iree_host_size_t v92;
  int32_t* v93;
  iree_host_size_t v94;
  uint8_t* v95;
  iree_host_size_t v96;
  int32_t* v97;
  iree_host_size_t v98;
  uint8_t* v99;
  iree_host_size_t v100;
  int32_t* v101;
  iree_vm_module_t* v102;
  iree_status_t v103;
  bool v104;
  int32_t v105;
  bool v106;
  iree_byte_span_t v107;
  uint8_t* v108;
  iree_vm_ref_t* v109;
  iree_status_t v110;
  iree_status_t v111;
  ;
  v17 = 0;
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = sizeof(int32_t);
  v21 = EMITC_BINARY(+, v19, v20);
  v22 = sizeof(int32_t);
  v23 = EMITC_BINARY(+, v21, v22);
  v24 = sizeof(int32_t);
  v25 = EMITC_BINARY(+, v23, v24);
  v26 = sizeof(int32_t);
  v27 = EMITC_BINARY(+, v25, v26);
  v28 = sizeof(int32_t);
  v29 = EMITC_BINARY(+, v27, v28);
  v30 = sizeof(int32_t);
  v31 = EMITC_BINARY(+, v29, v30);
  v32 = sizeof(int32_t);
  v33 = EMITC_BINARY(+, v31, v32);
  v34 = sizeof(int32_t);
  v35 = EMITC_BINARY(+, v33, v34);
  v36 = sizeof(int32_t);
  v37 = EMITC_BINARY(+, v35, v36);
  v38 = sizeof(int32_t);
  v39 = EMITC_BINARY(+, v37, v38);
  v40 = sizeof(int32_t);
  v41 = EMITC_BINARY(+, v39, v40);
  v42 = sizeof(iree_vm_ref_t);
  v43 = EMITC_BINARY(+, v17, v42);
  v44 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v45 = EMITC_UNARY(!, v44);
  v46 = vm_cmp_nz_i32(v45);
  v47 = (bool) v46;
  if (v47) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v48 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v16, function, v48);
  v49 = EMITC_STRUCT_MEMBER_ADDRESS(v16, arguments);
  v50 = iree_alloca(v41);
  v51 = (uint8_t*) v50;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v49, data_length, v41);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v49, data, v51);
  memset(v51, 0, v41);
  v52 = EMITC_STRUCT_MEMBER_ADDRESS(v16, results);
  v53 = iree_alloca(v43);
  v54 = (uint8_t*) v53;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v52, data_length, v43);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v52, data, v54);
  memset(v54, 0, v43);
  v55 = EMITC_STRUCT_MEMBER(v16, arguments);
  v56 = EMITC_STRUCT_MEMBER(v55, data);
  v57 = (iree_vm_ref_t*) v56;
  iree_vm_ref_assign(v3, v57);
  v58 = sizeof(iree_vm_ref_t);
  v59 = EMITC_BINARY(+, v56, v58);
  v60 = sizeof(int32_t);
  v61 = &v4;
  memcpy(v59, v61, v60);
  v62 = sizeof(int32_t);
  v63 = EMITC_BINARY(+, v59, v62);
  v64 = sizeof(int32_t);
  v65 = &v5;
  memcpy(v63, v65, v64);
  v66 = sizeof(int32_t);
  v67 = EMITC_BINARY(+, v63, v66);
  v68 = sizeof(int32_t);
  v69 = &v6;
  memcpy(v67, v69, v68);
  v70 = sizeof(int32_t);
  v71 = EMITC_BINARY(+, v67, v70);
  v72 = sizeof(int32_t);
  v73 = &v7;
  memcpy(v71, v73, v72);
  v74 = sizeof(int32_t);
  v75 = EMITC_BINARY(+, v71, v74);
  v76 = sizeof(int32_t);
  v77 = &v8;
  memcpy(v75, v77, v76);
  v78 = sizeof(int32_t);
  v79 = EMITC_BINARY(+, v75, v78);
  v80 = sizeof(int32_t);
  v81 = &v9;
  memcpy(v79, v81, v80);
  v82 = sizeof(int32_t);
  v83 = EMITC_BINARY(+, v79, v82);
  v84 = sizeof(int32_t);
  v85 = &v10;
  memcpy(v83, v85, v84);
  v86 = sizeof(int32_t);
  v87 = EMITC_BINARY(+, v83, v86);
  v88 = sizeof(int32_t);
  v89 = &v11;
  memcpy(v87, v89, v88);
  v90 = sizeof(int32_t);
  v91 = EMITC_BINARY(+, v87, v90);
  v92 = sizeof(int32_t);
  v93 = &v12;
  memcpy(v91, v93, v92);
  v94 = sizeof(int32_t);
  v95 = EMITC_BINARY(+, v91, v94);
  v96 = sizeof(int32_t);
  v97 = &v13;
  memcpy(v95, v97, v96);
  v98 = sizeof(int32_t);
  v99 = EMITC_BINARY(+, v95, v98);
  v100 = sizeof(int32_t);
  v101 = &v14;
  memcpy(v99, v101, v100);
  v102 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v103 = EMITC_STRUCT_PTR_MEMBER_CALL(v102, begin_call, v102, v1, v16);
  v104 = (bool) v103;
  v105 = vm_cmp_nz_i32(v104);
  v106 = (bool) v105;
  if (v106) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v107 = EMITC_STRUCT_MEMBER(v16, results);
  v108 = EMITC_STRUCT_MEMBER(v107, data);
  v109 = (iree_vm_ref_t*) v108;
  iree_vm_ref_move(v109, v15);
  v110 = iree_ok_status();
  return v110;
  label4:
  iree_vm_ref_release(v3);
  v111 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v111;
  label5:
  iree_vm_ref_release(v3);
  return v103;
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

static iree_status_t module_call_0rIrriiiI_r_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int64_t v4, iree_vm_ref_t* v5, iree_vm_ref_t* v6, int32_t v7, int32_t v8, int32_t v9, int64_t v10, iree_vm_ref_t* v11) {
  iree_vm_function_call_t v12;
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
  iree_host_size_t v26;
  iree_host_size_t v27;
  iree_host_size_t v28;
  iree_host_size_t v29;
  iree_host_size_t v30;
  iree_host_size_t v31;
  iree_vm_module_t* v32;
  bool v33;
  int32_t v34;
  bool v35;
  iree_vm_function_t v36;
  iree_byte_span_t* v37;
  void* v38;
  uint8_t* v39;
  iree_byte_span_t* v40;
  void* v41;
  uint8_t* v42;
  iree_byte_span_t v43;
  uint8_t* v44;
  iree_vm_ref_t* v45;
  iree_host_size_t v46;
  uint8_t* v47;
  iree_host_size_t v48;
  int64_t* v49;
  iree_host_size_t v50;
  uint8_t* v51;
  iree_vm_ref_t* v52;
  iree_host_size_t v53;
  uint8_t* v54;
  iree_vm_ref_t* v55;
  iree_host_size_t v56;
  uint8_t* v57;
  iree_host_size_t v58;
  int32_t* v59;
  iree_host_size_t v60;
  uint8_t* v61;
  iree_host_size_t v62;
  int32_t* v63;
  iree_host_size_t v64;
  uint8_t* v65;
  iree_host_size_t v66;
  int32_t* v67;
  iree_host_size_t v68;
  uint8_t* v69;
  iree_host_size_t v70;
  int64_t* v71;
  iree_vm_module_t* v72;
  iree_status_t v73;
  bool v74;
  int32_t v75;
  bool v76;
  iree_byte_span_t v77;
  uint8_t* v78;
  iree_vm_ref_t* v79;
  iree_status_t v80;
  iree_status_t v81;
  ;
  v13 = 0;
  v14 = sizeof(iree_vm_ref_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(int64_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(iree_vm_ref_t);
  v19 = EMITC_BINARY(+, v17, v18);
  v20 = sizeof(iree_vm_ref_t);
  v21 = EMITC_BINARY(+, v19, v20);
  v22 = sizeof(int32_t);
  v23 = EMITC_BINARY(+, v21, v22);
  v24 = sizeof(int32_t);
  v25 = EMITC_BINARY(+, v23, v24);
  v26 = sizeof(int32_t);
  v27 = EMITC_BINARY(+, v25, v26);
  v28 = sizeof(int64_t);
  v29 = EMITC_BINARY(+, v27, v28);
  v30 = sizeof(iree_vm_ref_t);
  v31 = EMITC_BINARY(+, v13, v30);
  v32 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v33 = EMITC_UNARY(!, v32);
  v34 = vm_cmp_nz_i32(v33);
  v35 = (bool) v34;
  if (v35) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v36 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v12, function, v36);
  v37 = EMITC_STRUCT_MEMBER_ADDRESS(v12, arguments);
  v38 = iree_alloca(v29);
  v39 = (uint8_t*) v38;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data_length, v29);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v37, data, v39);
  memset(v39, 0, v29);
  v40 = EMITC_STRUCT_MEMBER_ADDRESS(v12, results);
  v41 = iree_alloca(v31);
  v42 = (uint8_t*) v41;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data_length, v31);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v40, data, v42);
  memset(v42, 0, v31);
  v43 = EMITC_STRUCT_MEMBER(v12, arguments);
  v44 = EMITC_STRUCT_MEMBER(v43, data);
  v45 = (iree_vm_ref_t*) v44;
  iree_vm_ref_assign(v3, v45);
  v46 = sizeof(iree_vm_ref_t);
  v47 = EMITC_BINARY(+, v44, v46);
  v48 = sizeof(int64_t);
  v49 = &v4;
  memcpy(v47, v49, v48);
  v50 = sizeof(int64_t);
  v51 = EMITC_BINARY(+, v47, v50);
  v52 = (iree_vm_ref_t*) v51;
  iree_vm_ref_assign(v5, v52);
  v53 = sizeof(iree_vm_ref_t);
  v54 = EMITC_BINARY(+, v51, v53);
  v55 = (iree_vm_ref_t*) v54;
  iree_vm_ref_assign(v6, v55);
  v56 = sizeof(iree_vm_ref_t);
  v57 = EMITC_BINARY(+, v54, v56);
  v58 = sizeof(int32_t);
  v59 = &v7;
  memcpy(v57, v59, v58);
  v60 = sizeof(int32_t);
  v61 = EMITC_BINARY(+, v57, v60);
  v62 = sizeof(int32_t);
  v63 = &v8;
  memcpy(v61, v63, v62);
  v64 = sizeof(int32_t);
  v65 = EMITC_BINARY(+, v61, v64);
  v66 = sizeof(int32_t);
  v67 = &v9;
  memcpy(v65, v67, v66);
  v68 = sizeof(int32_t);
  v69 = EMITC_BINARY(+, v65, v68);
  v70 = sizeof(int64_t);
  v71 = &v10;
  memcpy(v69, v71, v70);
  v72 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v73 = EMITC_STRUCT_PTR_MEMBER_CALL(v72, begin_call, v72, v1, v12);
  v74 = (bool) v73;
  v75 = vm_cmp_nz_i32(v74);
  v76 = (bool) v75;
  if (v76) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v77 = EMITC_STRUCT_MEMBER(v12, results);
  v78 = EMITC_STRUCT_MEMBER(v77, data);
  v79 = (iree_vm_ref_t*) v78;
  iree_vm_ref_move(v79, v11);
  v80 = iree_ok_status();
  return v80;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  v81 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v81;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  return v73;
}

static iree_status_t module_call_0rIrrr_v_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, int64_t v4, iree_vm_ref_t* v5, iree_vm_ref_t* v6, iree_vm_ref_t* v7) {
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
  int64_t* v37;
  iree_host_size_t v38;
  uint8_t* v39;
  iree_vm_ref_t* v40;
  iree_host_size_t v41;
  uint8_t* v42;
  iree_vm_ref_t* v43;
  iree_host_size_t v44;
  uint8_t* v45;
  iree_vm_ref_t* v46;
  iree_vm_module_t* v47;
  iree_status_t v48;
  bool v49;
  int32_t v50;
  bool v51;
  iree_status_t v52;
  iree_status_t v53;
  ;
  v9 = 0;
  v10 = sizeof(iree_vm_ref_t);
  v11 = EMITC_BINARY(+, v9, v10);
  v12 = sizeof(int64_t);
  v13 = EMITC_BINARY(+, v11, v12);
  v14 = sizeof(iree_vm_ref_t);
  v15 = EMITC_BINARY(+, v13, v14);
  v16 = sizeof(iree_vm_ref_t);
  v17 = EMITC_BINARY(+, v15, v16);
  v18 = sizeof(iree_vm_ref_t);
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
  v36 = sizeof(int64_t);
  v37 = &v4;
  memcpy(v35, v37, v36);
  v38 = sizeof(int64_t);
  v39 = EMITC_BINARY(+, v35, v38);
  v40 = (iree_vm_ref_t*) v39;
  iree_vm_ref_assign(v5, v40);
  v41 = sizeof(iree_vm_ref_t);
  v42 = EMITC_BINARY(+, v39, v41);
  v43 = (iree_vm_ref_t*) v42;
  iree_vm_ref_assign(v6, v43);
  v44 = sizeof(iree_vm_ref_t);
  v45 = EMITC_BINARY(+, v42, v44);
  v46 = (iree_vm_ref_t*) v45;
  iree_vm_ref_assign(v7, v46);
  v47 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v48 = EMITC_STRUCT_PTR_MEMBER_CALL(v47, begin_call, v47, v1, v8);
  v49 = (bool) v48;
  v50 = vm_cmp_nz_i32(v49);
  v51 = (bool) v50;
  if (v51) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v52 = iree_ok_status();
  return v52;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v7);
  v53 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v53;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v7);
  return v48;
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

static iree_status_t module_call_0rrrrCrD_r_18_import_shim(iree_vm_stack_t* v1, iree_vm_function_t* v2, iree_vm_ref_t* v3, iree_vm_ref_t* v4, iree_vm_ref_t* v5, iree_vm_ref_t* v6, int32_t v7, iree_vm_ref_t* v8, iree_vm_ref_t* v9, iree_vm_ref_t* v10, iree_vm_ref_t* v11, iree_vm_ref_t* v12, iree_vm_ref_t* v13, iree_vm_ref_t* v14, iree_vm_ref_t* v15, iree_vm_ref_t* v16, iree_vm_ref_t* v17, iree_vm_ref_t* v18, iree_vm_ref_t* v19, iree_vm_ref_t* v20, iree_vm_ref_t* v21, iree_vm_ref_t* v22, iree_vm_ref_t* v23, iree_vm_ref_t* v24, iree_vm_ref_t* v25, iree_vm_ref_t* v26) {
  iree_vm_function_call_t v27;
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
  iree_host_size_t v47;
  iree_host_size_t v48;
  iree_host_size_t v49;
  iree_host_size_t v50;
  iree_host_size_t v51;
  iree_host_size_t v52;
  iree_host_size_t v53;
  iree_host_size_t v54;
  iree_host_size_t v55;
  iree_host_size_t v56;
  iree_host_size_t v57;
  iree_host_size_t v58;
  iree_host_size_t v59;
  iree_host_size_t v60;
  iree_host_size_t v61;
  iree_host_size_t v62;
  iree_host_size_t v63;
  iree_host_size_t v64;
  iree_host_size_t v65;
  iree_host_size_t v66;
  iree_host_size_t v67;
  iree_host_size_t v68;
  iree_host_size_t v69;
  iree_host_size_t v70;
  iree_host_size_t v71;
  iree_host_size_t v72;
  iree_host_size_t v73;
  iree_host_size_t v74;
  iree_host_size_t v75;
  iree_host_size_t v76;
  iree_vm_module_t* v77;
  bool v78;
  int32_t v79;
  bool v80;
  iree_vm_function_t v81;
  iree_byte_span_t* v82;
  void* v83;
  uint8_t* v84;
  iree_byte_span_t* v85;
  void* v86;
  uint8_t* v87;
  iree_byte_span_t v88;
  uint8_t* v89;
  iree_vm_ref_t* v90;
  iree_host_size_t v91;
  uint8_t* v92;
  iree_vm_ref_t* v93;
  iree_host_size_t v94;
  uint8_t* v95;
  iree_vm_ref_t* v96;
  iree_host_size_t v97;
  uint8_t* v98;
  iree_vm_ref_t* v99;
  iree_host_size_t v100;
  uint8_t* v101;
  iree_host_size_t v102;
  int32_t* v103;
  iree_host_size_t v104;
  uint8_t* v105;
  iree_vm_ref_t* v106;
  iree_host_size_t v107;
  uint8_t* v108;
  iree_vm_ref_t* v109;
  iree_host_size_t v110;
  uint8_t* v111;
  iree_vm_ref_t* v112;
  iree_host_size_t v113;
  uint8_t* v114;
  iree_vm_ref_t* v115;
  iree_host_size_t v116;
  uint8_t* v117;
  iree_vm_ref_t* v118;
  iree_host_size_t v119;
  uint8_t* v120;
  iree_vm_ref_t* v121;
  iree_host_size_t v122;
  uint8_t* v123;
  iree_vm_ref_t* v124;
  iree_host_size_t v125;
  uint8_t* v126;
  iree_vm_ref_t* v127;
  iree_host_size_t v128;
  uint8_t* v129;
  iree_vm_ref_t* v130;
  iree_host_size_t v131;
  uint8_t* v132;
  iree_vm_ref_t* v133;
  iree_host_size_t v134;
  uint8_t* v135;
  iree_vm_ref_t* v136;
  iree_host_size_t v137;
  uint8_t* v138;
  iree_vm_ref_t* v139;
  iree_host_size_t v140;
  uint8_t* v141;
  iree_vm_ref_t* v142;
  iree_host_size_t v143;
  uint8_t* v144;
  iree_vm_ref_t* v145;
  iree_host_size_t v146;
  uint8_t* v147;
  iree_vm_ref_t* v148;
  iree_host_size_t v149;
  uint8_t* v150;
  iree_vm_ref_t* v151;
  iree_host_size_t v152;
  uint8_t* v153;
  iree_vm_ref_t* v154;
  iree_host_size_t v155;
  uint8_t* v156;
  iree_vm_ref_t* v157;
  iree_vm_module_t* v158;
  iree_status_t v159;
  bool v160;
  int32_t v161;
  bool v162;
  iree_byte_span_t v163;
  uint8_t* v164;
  iree_vm_ref_t* v165;
  iree_status_t v166;
  iree_status_t v167;
  ;
  v28 = 0;
  v29 = sizeof(iree_vm_ref_t);
  v30 = EMITC_BINARY(+, v28, v29);
  v31 = sizeof(iree_vm_ref_t);
  v32 = EMITC_BINARY(+, v30, v31);
  v33 = sizeof(iree_vm_ref_t);
  v34 = EMITC_BINARY(+, v32, v33);
  v35 = sizeof(iree_vm_ref_t);
  v36 = EMITC_BINARY(+, v34, v35);
  v37 = sizeof(int32_t);
  v38 = EMITC_BINARY(+, v36, v37);
  v39 = sizeof(iree_vm_ref_t);
  v40 = EMITC_BINARY(+, v38, v39);
  v41 = sizeof(iree_vm_ref_t);
  v42 = EMITC_BINARY(+, v40, v41);
  v43 = sizeof(iree_vm_ref_t);
  v44 = EMITC_BINARY(+, v42, v43);
  v45 = sizeof(iree_vm_ref_t);
  v46 = EMITC_BINARY(+, v44, v45);
  v47 = sizeof(iree_vm_ref_t);
  v48 = EMITC_BINARY(+, v46, v47);
  v49 = sizeof(iree_vm_ref_t);
  v50 = EMITC_BINARY(+, v48, v49);
  v51 = sizeof(iree_vm_ref_t);
  v52 = EMITC_BINARY(+, v50, v51);
  v53 = sizeof(iree_vm_ref_t);
  v54 = EMITC_BINARY(+, v52, v53);
  v55 = sizeof(iree_vm_ref_t);
  v56 = EMITC_BINARY(+, v54, v55);
  v57 = sizeof(iree_vm_ref_t);
  v58 = EMITC_BINARY(+, v56, v57);
  v59 = sizeof(iree_vm_ref_t);
  v60 = EMITC_BINARY(+, v58, v59);
  v61 = sizeof(iree_vm_ref_t);
  v62 = EMITC_BINARY(+, v60, v61);
  v63 = sizeof(iree_vm_ref_t);
  v64 = EMITC_BINARY(+, v62, v63);
  v65 = sizeof(iree_vm_ref_t);
  v66 = EMITC_BINARY(+, v64, v65);
  v67 = sizeof(iree_vm_ref_t);
  v68 = EMITC_BINARY(+, v66, v67);
  v69 = sizeof(iree_vm_ref_t);
  v70 = EMITC_BINARY(+, v68, v69);
  v71 = sizeof(iree_vm_ref_t);
  v72 = EMITC_BINARY(+, v70, v71);
  v73 = sizeof(iree_vm_ref_t);
  v74 = EMITC_BINARY(+, v72, v73);
  v75 = sizeof(iree_vm_ref_t);
  v76 = EMITC_BINARY(+, v28, v75);
  v77 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v78 = EMITC_UNARY(!, v77);
  v79 = vm_cmp_nz_i32(v78);
  v80 = (bool) v79;
  if (v80) {
  goto label4;
  } else {
  goto label2;
  }
  label2:
  v81 = *v2;
  EMITC_STRUCT_MEMBER_ASSIGN(v27, function, v81);
  v82 = EMITC_STRUCT_MEMBER_ADDRESS(v27, arguments);
  v83 = iree_alloca(v74);
  v84 = (uint8_t*) v83;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v82, data_length, v74);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v82, data, v84);
  memset(v84, 0, v74);
  v85 = EMITC_STRUCT_MEMBER_ADDRESS(v27, results);
  v86 = iree_alloca(v76);
  v87 = (uint8_t*) v86;
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v85, data_length, v76);
  EMITC_STRUCT_PTR_MEMBER_ASSIGN(v85, data, v87);
  memset(v87, 0, v76);
  v88 = EMITC_STRUCT_MEMBER(v27, arguments);
  v89 = EMITC_STRUCT_MEMBER(v88, data);
  v90 = (iree_vm_ref_t*) v89;
  iree_vm_ref_assign(v3, v90);
  v91 = sizeof(iree_vm_ref_t);
  v92 = EMITC_BINARY(+, v89, v91);
  v93 = (iree_vm_ref_t*) v92;
  iree_vm_ref_assign(v4, v93);
  v94 = sizeof(iree_vm_ref_t);
  v95 = EMITC_BINARY(+, v92, v94);
  v96 = (iree_vm_ref_t*) v95;
  iree_vm_ref_assign(v5, v96);
  v97 = sizeof(iree_vm_ref_t);
  v98 = EMITC_BINARY(+, v95, v97);
  v99 = (iree_vm_ref_t*) v98;
  iree_vm_ref_assign(v6, v99);
  v100 = sizeof(iree_vm_ref_t);
  v101 = EMITC_BINARY(+, v98, v100);
  v102 = sizeof(int32_t);
  v103 = &v7;
  memcpy(v101, v103, v102);
  v104 = sizeof(int32_t);
  v105 = EMITC_BINARY(+, v101, v104);
  v106 = (iree_vm_ref_t*) v105;
  iree_vm_ref_assign(v8, v106);
  v107 = sizeof(iree_vm_ref_t);
  v108 = EMITC_BINARY(+, v105, v107);
  v109 = (iree_vm_ref_t*) v108;
  iree_vm_ref_assign(v9, v109);
  v110 = sizeof(iree_vm_ref_t);
  v111 = EMITC_BINARY(+, v108, v110);
  v112 = (iree_vm_ref_t*) v111;
  iree_vm_ref_assign(v10, v112);
  v113 = sizeof(iree_vm_ref_t);
  v114 = EMITC_BINARY(+, v111, v113);
  v115 = (iree_vm_ref_t*) v114;
  iree_vm_ref_assign(v11, v115);
  v116 = sizeof(iree_vm_ref_t);
  v117 = EMITC_BINARY(+, v114, v116);
  v118 = (iree_vm_ref_t*) v117;
  iree_vm_ref_assign(v12, v118);
  v119 = sizeof(iree_vm_ref_t);
  v120 = EMITC_BINARY(+, v117, v119);
  v121 = (iree_vm_ref_t*) v120;
  iree_vm_ref_assign(v13, v121);
  v122 = sizeof(iree_vm_ref_t);
  v123 = EMITC_BINARY(+, v120, v122);
  v124 = (iree_vm_ref_t*) v123;
  iree_vm_ref_assign(v14, v124);
  v125 = sizeof(iree_vm_ref_t);
  v126 = EMITC_BINARY(+, v123, v125);
  v127 = (iree_vm_ref_t*) v126;
  iree_vm_ref_assign(v15, v127);
  v128 = sizeof(iree_vm_ref_t);
  v129 = EMITC_BINARY(+, v126, v128);
  v130 = (iree_vm_ref_t*) v129;
  iree_vm_ref_assign(v16, v130);
  v131 = sizeof(iree_vm_ref_t);
  v132 = EMITC_BINARY(+, v129, v131);
  v133 = (iree_vm_ref_t*) v132;
  iree_vm_ref_assign(v17, v133);
  v134 = sizeof(iree_vm_ref_t);
  v135 = EMITC_BINARY(+, v132, v134);
  v136 = (iree_vm_ref_t*) v135;
  iree_vm_ref_assign(v18, v136);
  v137 = sizeof(iree_vm_ref_t);
  v138 = EMITC_BINARY(+, v135, v137);
  v139 = (iree_vm_ref_t*) v138;
  iree_vm_ref_assign(v19, v139);
  v140 = sizeof(iree_vm_ref_t);
  v141 = EMITC_BINARY(+, v138, v140);
  v142 = (iree_vm_ref_t*) v141;
  iree_vm_ref_assign(v20, v142);
  v143 = sizeof(iree_vm_ref_t);
  v144 = EMITC_BINARY(+, v141, v143);
  v145 = (iree_vm_ref_t*) v144;
  iree_vm_ref_assign(v21, v145);
  v146 = sizeof(iree_vm_ref_t);
  v147 = EMITC_BINARY(+, v144, v146);
  v148 = (iree_vm_ref_t*) v147;
  iree_vm_ref_assign(v22, v148);
  v149 = sizeof(iree_vm_ref_t);
  v150 = EMITC_BINARY(+, v147, v149);
  v151 = (iree_vm_ref_t*) v150;
  iree_vm_ref_assign(v23, v151);
  v152 = sizeof(iree_vm_ref_t);
  v153 = EMITC_BINARY(+, v150, v152);
  v154 = (iree_vm_ref_t*) v153;
  iree_vm_ref_assign(v24, v154);
  v155 = sizeof(iree_vm_ref_t);
  v156 = EMITC_BINARY(+, v153, v155);
  v157 = (iree_vm_ref_t*) v156;
  iree_vm_ref_assign(v25, v157);
  v158 = EMITC_STRUCT_PTR_MEMBER(v2, module);
  v159 = EMITC_STRUCT_PTR_MEMBER_CALL(v158, begin_call, v158, v1, v27);
  v160 = (bool) v159;
  v161 = vm_cmp_nz_i32(v160);
  v162 = (bool) v161;
  if (v162) {
  goto label5;
  } else {
  goto label3;
  }
  label3:
  v163 = EMITC_STRUCT_MEMBER(v27, results);
  v164 = EMITC_STRUCT_MEMBER(v163, data);
  v165 = (iree_vm_ref_t*) v164;
  iree_vm_ref_move(v165, v26);
  v166 = iree_ok_status();
  return v166;
  label4:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v8);
  v167 = iree_make_status(IREE_STATUS_NOT_FOUND);
  return v167;
  label5:
  iree_vm_ref_release(v3);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v8);
  return v159;
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

static iree_status_t module_main(iree_vm_stack_t* v1, module_t* v2, module_state_t* v3, iree_vm_ref_t* v4, iree_vm_ref_t* v5, iree_vm_ref_t* v6, iree_vm_ref_t* v7, iree_vm_ref_t* v8, iree_vm_ref_t* v9, iree_vm_ref_t* v10, iree_vm_ref_t* v11, iree_vm_ref_t* v12, iree_vm_ref_t* v13, iree_vm_ref_t* v14, iree_vm_ref_t* v15) {
  int32_t v16;
  int32_t v17;
  int32_t v18;
  int32_t v19;
  int32_t v20;
  int32_t v21;
  int32_t v22;
  int32_t v23;
  int32_t v24;
  int32_t v25;
  int32_t v26;
  int32_t v27;
  int32_t v28;
  int32_t v29;
  int32_t v30;
  int32_t v31;
  int32_t v32;
  int32_t v33;
  int32_t v34;
  int32_t v35;
  int32_t v36;
  int32_t v37;
  int32_t v38;
  int32_t v39;
  int32_t v40;
  int64_t v41;
  int64_t v42;
  int32_t v43;
  int32_t v44;
  int32_t v45;
  int64_t v46;
  int64_t v47;
  int64_t v48;
  int64_t v49;
  int32_t v50;
  int64_t v51;
  int64_t v52;
  int32_t v53;
  int32_t v54;
  int64_t v55;
  int32_t v56;
  int64_t v57;
  int64_t v58;
  int64_t v59;
  int32_t v60;
  int32_t v61;
  int64_t v62;
  int64_t v63;
  int32_t v64;
  int64_t v65;
  int64_t v66;
  int32_t v67;
  int64_t v68;
  int32_t v69;
  int32_t v70;
  int32_t v71;
  int32_t v72;
  int32_t v73;
  int32_t v74;
  int32_t v75;
  int64_t v76;
  int64_t v77;
  int64_t v78;
  int64_t v79;
  int64_t v80;
  int64_t v81;
  int64_t v82;
  int64_t v83;
  int64_t v84;
  int64_t v85;
  int64_t v86;
  int64_t v87;
  int64_t v88;
  int64_t v89;
  iree_vm_ref_t v90;
  iree_vm_ref_t* v91;
  iree_host_size_t v92;
  iree_vm_ref_t v93;
  iree_vm_ref_t* v94;
  iree_host_size_t v95;
  iree_vm_ref_t v96;
  iree_vm_ref_t* v97;
  iree_host_size_t v98;
  iree_vm_ref_t v99;
  iree_vm_ref_t* v100;
  iree_host_size_t v101;
  iree_vm_ref_t v102;
  iree_vm_ref_t* v103;
  iree_host_size_t v104;
  iree_vm_ref_t v105;
  iree_vm_ref_t* v106;
  iree_host_size_t v107;
  iree_vm_ref_t v108;
  iree_vm_ref_t* v109;
  iree_host_size_t v110;
  iree_vm_ref_t v111;
  iree_vm_ref_t* v112;
  iree_host_size_t v113;
  iree_vm_ref_t v114;
  iree_vm_ref_t* v115;
  iree_host_size_t v116;
  iree_vm_ref_t v117;
  iree_vm_ref_t* v118;
  iree_host_size_t v119;
  iree_vm_ref_t v120;
  iree_vm_ref_t* v121;
  iree_host_size_t v122;
  iree_vm_ref_t v123;
  iree_vm_ref_t* v124;
  iree_host_size_t v125;
  iree_vm_ref_t v126;
  iree_vm_ref_t* v127;
  iree_host_size_t v128;
  iree_vm_ref_t* v129;
  iree_vm_ref_t* v130;
  iree_vm_type_def_t v131;
  iree_vm_type_def_t* v132;
  iree_host_size_t v133;
  iree_string_view_t v134;
  const iree_vm_ref_type_descriptor_t* v135;
  iree_vm_ref_type_t v136;
  iree_vm_ref_type_t v137;
  iree_status_t v138;
  bool v139;
  int32_t v140;
  bool v141;
  iree_vm_ref_t* v142;
  iree_vm_ref_t* v143;
  iree_vm_type_def_t v144;
  iree_vm_type_def_t* v145;
  iree_host_size_t v146;
  iree_string_view_t v147;
  const iree_vm_ref_type_descriptor_t* v148;
  iree_vm_ref_type_t v149;
  iree_vm_ref_type_t v150;
  iree_status_t v151;
  bool v152;
  int32_t v153;
  bool v154;
  uint8_t* v155;
  int32_t v156;
  iree_vm_ref_t* v157;
  iree_vm_ref_t* v158;
  iree_vm_type_def_t v159;
  iree_vm_type_def_t* v160;
  iree_host_size_t v161;
  iree_string_view_t v162;
  const iree_vm_ref_type_descriptor_t* v163;
  iree_vm_ref_type_t v164;
  iree_vm_ref_type_t v165;
  iree_status_t v166;
  bool v167;
  int32_t v168;
  bool v169;
  iree_vm_ref_t* v170;
  iree_vm_ref_t* v171;
  iree_vm_type_def_t v172;
  iree_vm_type_def_t* v173;
  iree_host_size_t v174;
  iree_string_view_t v175;
  const iree_vm_ref_type_descriptor_t* v176;
  iree_vm_ref_type_t v177;
  iree_vm_ref_type_t v178;
  iree_status_t v179;
  bool v180;
  int32_t v181;
  bool v182;
  iree_vm_ref_t* v183;
  iree_vm_ref_t* v184;
  iree_vm_type_def_t v185;
  iree_vm_type_def_t* v186;
  iree_host_size_t v187;
  iree_string_view_t v188;
  const iree_vm_ref_type_descriptor_t* v189;
  iree_vm_ref_type_t v190;
  iree_vm_ref_type_t v191;
  iree_status_t v192;
  bool v193;
  int32_t v194;
  bool v195;
  iree_vm_ref_t* v196;
  iree_vm_ref_t* v197;
  iree_vm_type_def_t v198;
  iree_vm_type_def_t* v199;
  iree_host_size_t v200;
  iree_string_view_t v201;
  const iree_vm_ref_type_descriptor_t* v202;
  iree_vm_ref_type_t v203;
  iree_vm_ref_type_t v204;
  iree_status_t v205;
  bool v206;
  int32_t v207;
  bool v208;
  iree_vm_ref_t* v209;
  iree_vm_ref_t* v210;
  iree_vm_type_def_t v211;
  iree_vm_type_def_t* v212;
  iree_host_size_t v213;
  iree_string_view_t v214;
  const iree_vm_ref_type_descriptor_t* v215;
  iree_vm_ref_type_t v216;
  iree_vm_ref_type_t v217;
  iree_status_t v218;
  bool v219;
  int32_t v220;
  bool v221;
  iree_vm_ref_t* v222;
  iree_vm_ref_t* v223;
  iree_vm_type_def_t v224;
  iree_vm_type_def_t* v225;
  iree_host_size_t v226;
  iree_string_view_t v227;
  const iree_vm_ref_type_descriptor_t* v228;
  iree_vm_ref_type_t v229;
  iree_vm_ref_type_t v230;
  iree_status_t v231;
  bool v232;
  int32_t v233;
  bool v234;
  iree_vm_ref_t* v235;
  iree_vm_ref_t* v236;
  iree_vm_type_def_t v237;
  iree_vm_type_def_t* v238;
  iree_host_size_t v239;
  iree_string_view_t v240;
  const iree_vm_ref_type_descriptor_t* v241;
  iree_vm_ref_type_t v242;
  iree_vm_ref_type_t v243;
  iree_status_t v244;
  bool v245;
  int32_t v246;
  bool v247;
  iree_vm_buffer_t* v248;
  iree_vm_buffer_t* v249;
  iree_vm_ref_type_t v250;
  iree_status_t v251;
  bool v252;
  int32_t v253;
  bool v254;
  iree_vm_function_t* v255;
  iree_vm_function_t* v256;
  iree_vm_ref_t v257;
  iree_vm_ref_t* v258;
  iree_host_size_t v259;
  iree_vm_ref_t v260;
  iree_vm_ref_t* v261;
  iree_host_size_t v262;
  iree_status_t v263;
  bool v264;
  int32_t v265;
  bool v266;
  iree_vm_function_t* v267;
  iree_vm_function_t* v268;
  iree_vm_ref_t v269;
  iree_vm_ref_t* v270;
  iree_host_size_t v271;
  iree_status_t v272;
  bool v273;
  int32_t v274;
  bool v275;
  iree_vm_function_t* v276;
  iree_vm_function_t* v277;
  iree_status_t v278;
  bool v279;
  int32_t v280;
  bool v281;
  iree_vm_function_t* v282;
  iree_vm_function_t* v283;
  iree_vm_ref_t v284;
  iree_vm_ref_t* v285;
  iree_host_size_t v286;
  iree_status_t v287;
  bool v288;
  int32_t v289;
  bool v290;
  iree_vm_function_t* v291;
  iree_vm_function_t* v292;
  iree_vm_ref_t v293;
  iree_vm_ref_t* v294;
  iree_host_size_t v295;
  iree_vm_ref_t v296;
  iree_vm_ref_t* v297;
  iree_host_size_t v298;
  iree_vm_ref_t v299;
  iree_vm_ref_t* v300;
  iree_host_size_t v301;
  iree_status_t v302;
  bool v303;
  int32_t v304;
  bool v305;
  iree_vm_function_t* v306;
  iree_vm_function_t* v307;
  iree_vm_ref_t v308;
  iree_vm_ref_t* v309;
  iree_host_size_t v310;
  iree_vm_ref_t v311;
  iree_vm_ref_t* v312;
  iree_host_size_t v313;
  iree_status_t v314;
  bool v315;
  int32_t v316;
  bool v317;
  iree_vm_function_t* v318;
  iree_vm_function_t* v319;
  iree_vm_ref_t v320;
  iree_vm_ref_t* v321;
  iree_host_size_t v322;
  iree_status_t v323;
  bool v324;
  int32_t v325;
  bool v326;
  iree_vm_function_t* v327;
  iree_vm_function_t* v328;
  iree_vm_ref_t v329;
  iree_vm_ref_t* v330;
  iree_host_size_t v331;
  iree_vm_ref_t v332;
  iree_vm_ref_t* v333;
  iree_host_size_t v334;
  iree_vm_ref_t v335;
  iree_vm_ref_t* v336;
  iree_host_size_t v337;
  iree_status_t v338;
  bool v339;
  int32_t v340;
  bool v341;
  iree_vm_function_t* v342;
  iree_vm_function_t* v343;
  iree_vm_ref_t v344;
  iree_vm_ref_t* v345;
  iree_host_size_t v346;
  iree_vm_ref_t v347;
  iree_vm_ref_t* v348;
  iree_host_size_t v349;
  iree_status_t v350;
  bool v351;
  int32_t v352;
  bool v353;
  iree_vm_function_t* v354;
  iree_vm_function_t* v355;
  iree_vm_ref_t v356;
  iree_vm_ref_t* v357;
  iree_host_size_t v358;
  iree_status_t v359;
  bool v360;
  int32_t v361;
  bool v362;
  iree_vm_function_t* v363;
  iree_vm_function_t* v364;
  iree_vm_ref_t v365;
  iree_vm_ref_t* v366;
  iree_host_size_t v367;
  iree_vm_ref_t v368;
  iree_vm_ref_t* v369;
  iree_host_size_t v370;
  iree_vm_ref_t v371;
  iree_vm_ref_t* v372;
  iree_host_size_t v373;
  iree_status_t v374;
  bool v375;
  int32_t v376;
  bool v377;
  iree_vm_function_t* v378;
  iree_vm_function_t* v379;
  iree_vm_ref_t v380;
  iree_vm_ref_t* v381;
  iree_host_size_t v382;
  iree_vm_ref_t v383;
  iree_vm_ref_t* v384;
  iree_host_size_t v385;
  iree_status_t v386;
  bool v387;
  int32_t v388;
  bool v389;
  iree_vm_function_t* v390;
  iree_vm_function_t* v391;
  iree_vm_ref_t v392;
  iree_vm_ref_t* v393;
  iree_host_size_t v394;
  iree_status_t v395;
  bool v396;
  int32_t v397;
  bool v398;
  iree_vm_function_t* v399;
  iree_vm_function_t* v400;
  iree_vm_ref_t v401;
  iree_vm_ref_t* v402;
  iree_host_size_t v403;
  iree_vm_ref_t v404;
  iree_vm_ref_t* v405;
  iree_host_size_t v406;
  iree_vm_ref_t v407;
  iree_vm_ref_t* v408;
  iree_host_size_t v409;
  iree_status_t v410;
  bool v411;
  int32_t v412;
  bool v413;
  iree_vm_function_t* v414;
  iree_vm_function_t* v415;
  iree_vm_ref_t v416;
  iree_vm_ref_t* v417;
  iree_host_size_t v418;
  iree_status_t v419;
  bool v420;
  int32_t v421;
  bool v422;
  iree_vm_function_t* v423;
  iree_vm_function_t* v424;
  iree_vm_ref_t v425;
  iree_vm_ref_t* v426;
  iree_host_size_t v427;
  iree_status_t v428;
  bool v429;
  int32_t v430;
  bool v431;
  iree_vm_function_t* v432;
  iree_vm_function_t* v433;
  iree_vm_ref_t v434;
  iree_vm_ref_t* v435;
  iree_host_size_t v436;
  iree_vm_ref_t v437;
  iree_vm_ref_t* v438;
  iree_host_size_t v439;
  iree_vm_ref_t v440;
  iree_vm_ref_t* v441;
  iree_host_size_t v442;
  iree_status_t v443;
  bool v444;
  int32_t v445;
  bool v446;
  iree_vm_function_t* v447;
  iree_vm_function_t* v448;
  iree_vm_ref_t v449;
  iree_vm_ref_t* v450;
  iree_host_size_t v451;
  iree_status_t v452;
  bool v453;
  int32_t v454;
  bool v455;
  int32_t v456;
  bool v457;
  iree_vm_function_t* v458;
  iree_vm_function_t* v459;
  iree_vm_ref_t v460;
  iree_vm_ref_t* v461;
  iree_host_size_t v462;
  iree_vm_ref_t v463;
  iree_vm_ref_t* v464;
  iree_host_size_t v465;
  iree_status_t v466;
  bool v467;
  int32_t v468;
  bool v469;
  iree_vm_function_t* v470;
  iree_vm_function_t* v471;
  iree_vm_ref_t v472;
  iree_vm_ref_t* v473;
  iree_host_size_t v474;
  iree_vm_ref_t v475;
  iree_vm_ref_t* v476;
  iree_host_size_t v477;
  iree_vm_ref_t v478;
  iree_vm_ref_t* v479;
  iree_host_size_t v480;
  iree_vm_ref_t v481;
  iree_vm_ref_t* v482;
  iree_host_size_t v483;
  iree_status_t v484;
  bool v485;
  int32_t v486;
  bool v487;
  iree_vm_function_t* v488;
  iree_vm_function_t* v489;
  iree_vm_ref_t v490;
  iree_vm_ref_t* v491;
  iree_host_size_t v492;
  iree_vm_ref_t v493;
  iree_vm_ref_t* v494;
  iree_host_size_t v495;
  iree_status_t v496;
  bool v497;
  int32_t v498;
  bool v499;
  iree_vm_function_t* v500;
  iree_vm_function_t* v501;
  iree_vm_ref_t v502;
  iree_vm_ref_t* v503;
  iree_host_size_t v504;
  iree_vm_ref_t v505;
  iree_vm_ref_t* v506;
  iree_host_size_t v507;
  iree_status_t v508;
  bool v509;
  int32_t v510;
  bool v511;
  iree_vm_function_t* v512;
  iree_vm_function_t* v513;
  iree_vm_ref_t v514;
  iree_vm_ref_t* v515;
  iree_host_size_t v516;
  iree_status_t v517;
  bool v518;
  int32_t v519;
  bool v520;
  iree_vm_function_t* v521;
  iree_vm_function_t* v522;
  iree_vm_ref_t v523;
  iree_vm_ref_t* v524;
  iree_host_size_t v525;
  iree_vm_ref_t v526;
  iree_vm_ref_t* v527;
  iree_host_size_t v528;
  iree_status_t v529;
  bool v530;
  int32_t v531;
  bool v532;
  iree_vm_function_t* v533;
  iree_vm_function_t* v534;
  iree_vm_ref_t v535;
  iree_vm_ref_t* v536;
  iree_host_size_t v537;
  iree_vm_ref_t v538;
  iree_vm_ref_t* v539;
  iree_host_size_t v540;
  iree_vm_ref_t v541;
  iree_vm_ref_t* v542;
  iree_host_size_t v543;
  iree_vm_ref_t v544;
  iree_vm_ref_t* v545;
  iree_host_size_t v546;
  iree_status_t v547;
  bool v548;
  int32_t v549;
  bool v550;
  iree_vm_function_t* v551;
  iree_vm_function_t* v552;
  iree_vm_ref_t v553;
  iree_vm_ref_t* v554;
  iree_host_size_t v555;
  iree_vm_ref_t v556;
  iree_vm_ref_t* v557;
  iree_host_size_t v558;
  iree_status_t v559;
  bool v560;
  int32_t v561;
  bool v562;
  iree_vm_function_t* v563;
  iree_vm_function_t* v564;
  iree_vm_ref_t v565;
  iree_vm_ref_t* v566;
  iree_host_size_t v567;
  iree_vm_ref_t v568;
  iree_vm_ref_t* v569;
  iree_host_size_t v570;
  iree_status_t v571;
  bool v572;
  int32_t v573;
  bool v574;
  iree_vm_function_t* v575;
  iree_vm_function_t* v576;
  iree_vm_ref_t v577;
  iree_vm_ref_t* v578;
  iree_host_size_t v579;
  iree_vm_ref_t v580;
  iree_vm_ref_t* v581;
  iree_host_size_t v582;
  iree_vm_ref_t v583;
  iree_vm_ref_t* v584;
  iree_host_size_t v585;
  iree_vm_ref_t v586;
  iree_vm_ref_t* v587;
  iree_host_size_t v588;
  iree_status_t v589;
  bool v590;
  int32_t v591;
  bool v592;
  iree_vm_function_t* v593;
  iree_vm_function_t* v594;
  iree_vm_ref_t v595;
  iree_vm_ref_t* v596;
  iree_host_size_t v597;
  iree_vm_ref_t v598;
  iree_vm_ref_t* v599;
  iree_host_size_t v600;
  iree_status_t v601;
  bool v602;
  int32_t v603;
  bool v604;
  iree_vm_function_t* v605;
  iree_vm_function_t* v606;
  iree_vm_ref_t v607;
  iree_vm_ref_t* v608;
  iree_host_size_t v609;
  iree_vm_ref_t v610;
  iree_vm_ref_t* v611;
  iree_host_size_t v612;
  iree_status_t v613;
  bool v614;
  int32_t v615;
  bool v616;
  iree_vm_function_t* v617;
  iree_vm_function_t* v618;
  iree_vm_ref_t v619;
  iree_vm_ref_t* v620;
  iree_host_size_t v621;
  iree_status_t v622;
  bool v623;
  int32_t v624;
  bool v625;
  iree_vm_function_t* v626;
  iree_vm_function_t* v627;
  iree_vm_ref_t v628;
  iree_vm_ref_t* v629;
  iree_host_size_t v630;
  iree_vm_ref_t v631;
  iree_vm_ref_t* v632;
  iree_host_size_t v633;
  iree_status_t v634;
  bool v635;
  int32_t v636;
  bool v637;
  iree_vm_function_t* v638;
  iree_vm_function_t* v639;
  iree_vm_ref_t v640;
  iree_vm_ref_t* v641;
  iree_host_size_t v642;
  iree_vm_ref_t v643;
  iree_vm_ref_t* v644;
  iree_host_size_t v645;
  iree_vm_ref_t v646;
  iree_vm_ref_t* v647;
  iree_host_size_t v648;
  iree_vm_ref_t v649;
  iree_vm_ref_t* v650;
  iree_host_size_t v651;
  iree_vm_ref_t v652;
  iree_vm_ref_t* v653;
  iree_host_size_t v654;
  iree_status_t v655;
  bool v656;
  int32_t v657;
  bool v658;
  iree_vm_function_t* v659;
  iree_vm_function_t* v660;
  iree_vm_ref_t v661;
  iree_vm_ref_t* v662;
  iree_host_size_t v663;
  iree_vm_ref_t v664;
  iree_vm_ref_t* v665;
  iree_host_size_t v666;
  iree_status_t v667;
  bool v668;
  int32_t v669;
  bool v670;
  iree_vm_function_t* v671;
  iree_vm_function_t* v672;
  iree_vm_ref_t v673;
  iree_vm_ref_t* v674;
  iree_host_size_t v675;
  iree_vm_ref_t v676;
  iree_vm_ref_t* v677;
  iree_host_size_t v678;
  iree_status_t v679;
  bool v680;
  int32_t v681;
  bool v682;
  iree_vm_function_t* v683;
  iree_vm_function_t* v684;
  iree_vm_ref_t v685;
  iree_vm_ref_t* v686;
  iree_host_size_t v687;
  iree_vm_ref_t v688;
  iree_vm_ref_t* v689;
  iree_host_size_t v690;
  iree_vm_ref_t v691;
  iree_vm_ref_t* v692;
  iree_host_size_t v693;
  iree_vm_ref_t v694;
  iree_vm_ref_t* v695;
  iree_host_size_t v696;
  iree_status_t v697;
  bool v698;
  int32_t v699;
  bool v700;
  iree_vm_function_t* v701;
  iree_vm_function_t* v702;
  iree_vm_ref_t v703;
  iree_vm_ref_t* v704;
  iree_host_size_t v705;
  iree_vm_ref_t v706;
  iree_vm_ref_t* v707;
  iree_host_size_t v708;
  iree_status_t v709;
  bool v710;
  int32_t v711;
  bool v712;
  iree_vm_function_t* v713;
  iree_vm_function_t* v714;
  iree_vm_ref_t v715;
  iree_vm_ref_t* v716;
  iree_host_size_t v717;
  iree_status_t v718;
  bool v719;
  int32_t v720;
  bool v721;
  iree_vm_function_t* v722;
  iree_vm_function_t* v723;
  iree_vm_ref_t v724;
  iree_vm_ref_t* v725;
  iree_host_size_t v726;
  iree_vm_ref_t v727;
  iree_vm_ref_t* v728;
  iree_host_size_t v729;
  iree_status_t v730;
  bool v731;
  int32_t v732;
  bool v733;
  iree_vm_function_t* v734;
  iree_vm_function_t* v735;
  iree_vm_ref_t v736;
  iree_vm_ref_t* v737;
  iree_host_size_t v738;
  iree_vm_ref_t v739;
  iree_vm_ref_t* v740;
  iree_host_size_t v741;
  iree_status_t v742;
  bool v743;
  int32_t v744;
  bool v745;
  iree_vm_function_t* v746;
  iree_vm_function_t* v747;
  iree_vm_ref_t v748;
  iree_vm_ref_t* v749;
  iree_host_size_t v750;
  iree_vm_ref_t v751;
  iree_vm_ref_t* v752;
  iree_host_size_t v753;
  iree_status_t v754;
  bool v755;
  int32_t v756;
  bool v757;
  iree_vm_function_t* v758;
  iree_vm_function_t* v759;
  iree_vm_ref_t v760;
  iree_vm_ref_t* v761;
  iree_host_size_t v762;
  iree_vm_ref_t v763;
  iree_vm_ref_t* v764;
  iree_host_size_t v765;
  iree_vm_ref_t v766;
  iree_vm_ref_t* v767;
  iree_host_size_t v768;
  iree_vm_ref_t v769;
  iree_vm_ref_t* v770;
  iree_host_size_t v771;
  iree_vm_ref_t v772;
  iree_vm_ref_t* v773;
  iree_host_size_t v774;
  iree_status_t v775;
  bool v776;
  int32_t v777;
  bool v778;
  iree_vm_function_t* v779;
  iree_vm_function_t* v780;
  iree_vm_ref_t v781;
  iree_vm_ref_t* v782;
  iree_host_size_t v783;
  iree_vm_ref_t v784;
  iree_vm_ref_t* v785;
  iree_host_size_t v786;
  iree_status_t v787;
  bool v788;
  int32_t v789;
  bool v790;
  iree_vm_function_t* v791;
  iree_vm_function_t* v792;
  iree_vm_ref_t v793;
  iree_vm_ref_t* v794;
  iree_host_size_t v795;
  iree_status_t v796;
  bool v797;
  int32_t v798;
  bool v799;
  iree_vm_function_t* v800;
  iree_vm_function_t* v801;
  iree_vm_ref_t v802;
  iree_vm_ref_t* v803;
  iree_host_size_t v804;
  iree_vm_ref_t v805;
  iree_vm_ref_t* v806;
  iree_host_size_t v807;
  iree_status_t v808;
  bool v809;
  int32_t v810;
  bool v811;
  iree_vm_function_t* v812;
  iree_vm_function_t* v813;
  iree_vm_ref_t v814;
  iree_vm_ref_t* v815;
  iree_host_size_t v816;
  iree_vm_ref_t v817;
  iree_vm_ref_t* v818;
  iree_host_size_t v819;
  iree_vm_ref_t v820;
  iree_vm_ref_t* v821;
  iree_host_size_t v822;
  iree_vm_ref_t v823;
  iree_vm_ref_t* v824;
  iree_host_size_t v825;
  iree_status_t v826;
  bool v827;
  int32_t v828;
  bool v829;
  iree_vm_function_t* v830;
  iree_vm_function_t* v831;
  iree_vm_ref_t v832;
  iree_vm_ref_t* v833;
  iree_host_size_t v834;
  iree_vm_ref_t v835;
  iree_vm_ref_t* v836;
  iree_host_size_t v837;
  iree_status_t v838;
  bool v839;
  int32_t v840;
  bool v841;
  iree_vm_function_t* v842;
  iree_vm_function_t* v843;
  iree_vm_ref_t v844;
  iree_vm_ref_t* v845;
  iree_host_size_t v846;
  iree_vm_ref_t v847;
  iree_vm_ref_t* v848;
  iree_host_size_t v849;
  iree_status_t v850;
  bool v851;
  int32_t v852;
  bool v853;
  iree_vm_function_t* v854;
  iree_vm_function_t* v855;
  iree_vm_ref_t v856;
  iree_vm_ref_t* v857;
  iree_host_size_t v858;
  iree_vm_ref_t v859;
  iree_vm_ref_t* v860;
  iree_host_size_t v861;
  iree_status_t v862;
  bool v863;
  int32_t v864;
  bool v865;
  iree_vm_function_t* v866;
  iree_vm_function_t* v867;
  iree_vm_ref_t v868;
  iree_vm_ref_t* v869;
  iree_host_size_t v870;
  iree_vm_ref_t v871;
  iree_vm_ref_t* v872;
  iree_host_size_t v873;
  iree_status_t v874;
  bool v875;
  int32_t v876;
  bool v877;
  iree_vm_function_t* v878;
  iree_vm_function_t* v879;
  iree_vm_ref_t v880;
  iree_vm_ref_t* v881;
  iree_host_size_t v882;
  iree_status_t v883;
  bool v884;
  int32_t v885;
  bool v886;
  iree_vm_function_t* v887;
  iree_vm_function_t* v888;
  iree_vm_ref_t v889;
  iree_vm_ref_t* v890;
  iree_host_size_t v891;
  iree_vm_ref_t v892;
  iree_vm_ref_t* v893;
  iree_host_size_t v894;
  iree_status_t v895;
  bool v896;
  int32_t v897;
  bool v898;
  iree_vm_function_t* v899;
  iree_vm_function_t* v900;
  iree_vm_ref_t v901;
  iree_vm_ref_t* v902;
  iree_host_size_t v903;
  iree_vm_ref_t v904;
  iree_vm_ref_t* v905;
  iree_host_size_t v906;
  iree_status_t v907;
  bool v908;
  int32_t v909;
  bool v910;
  iree_vm_function_t* v911;
  iree_vm_function_t* v912;
  iree_vm_ref_t v913;
  iree_vm_ref_t* v914;
  iree_host_size_t v915;
  iree_vm_ref_t v916;
  iree_vm_ref_t* v917;
  iree_host_size_t v918;
  iree_status_t v919;
  bool v920;
  int32_t v921;
  bool v922;
  iree_vm_function_t* v923;
  iree_vm_function_t* v924;
  iree_vm_ref_t v925;
  iree_vm_ref_t* v926;
  iree_host_size_t v927;
  iree_vm_ref_t v928;
  iree_vm_ref_t* v929;
  iree_host_size_t v930;
  iree_status_t v931;
  bool v932;
  int32_t v933;
  bool v934;
  iree_vm_function_t* v935;
  iree_vm_function_t* v936;
  iree_vm_ref_t v937;
  iree_vm_ref_t* v938;
  iree_host_size_t v939;
  iree_vm_ref_t v940;
  iree_vm_ref_t* v941;
  iree_host_size_t v942;
  iree_status_t v943;
  bool v944;
  int32_t v945;
  bool v946;
  iree_vm_function_t* v947;
  iree_vm_function_t* v948;
  iree_vm_ref_t v949;
  iree_vm_ref_t* v950;
  iree_host_size_t v951;
  iree_status_t v952;
  bool v953;
  int32_t v954;
  bool v955;
  iree_vm_function_t* v956;
  iree_vm_function_t* v957;
  iree_vm_ref_t v958;
  iree_vm_ref_t* v959;
  iree_host_size_t v960;
  iree_vm_ref_t v961;
  iree_vm_ref_t* v962;
  iree_host_size_t v963;
  iree_status_t v964;
  bool v965;
  int32_t v966;
  bool v967;
  iree_vm_function_t* v968;
  iree_vm_function_t* v969;
  iree_vm_ref_t v970;
  iree_vm_ref_t* v971;
  iree_host_size_t v972;
  iree_vm_ref_t v973;
  iree_vm_ref_t* v974;
  iree_host_size_t v975;
  iree_status_t v976;
  bool v977;
  int32_t v978;
  bool v979;
  iree_vm_function_t* v980;
  iree_vm_function_t* v981;
  iree_vm_ref_t v982;
  iree_vm_ref_t* v983;
  iree_host_size_t v984;
  iree_vm_ref_t v985;
  iree_vm_ref_t* v986;
  iree_host_size_t v987;
  iree_status_t v988;
  bool v989;
  int32_t v990;
  bool v991;
  iree_vm_function_t* v992;
  iree_vm_function_t* v993;
  iree_vm_ref_t v994;
  iree_vm_ref_t* v995;
  iree_host_size_t v996;
  iree_vm_ref_t v997;
  iree_vm_ref_t* v998;
  iree_host_size_t v999;
  iree_status_t v1000;
  bool v1001;
  int32_t v1002;
  bool v1003;
  iree_vm_function_t* v1004;
  iree_vm_function_t* v1005;
  iree_vm_ref_t v1006;
  iree_vm_ref_t* v1007;
  iree_host_size_t v1008;
  iree_status_t v1009;
  bool v1010;
  int32_t v1011;
  bool v1012;
  iree_vm_function_t* v1013;
  iree_vm_function_t* v1014;
  iree_vm_ref_t v1015;
  iree_vm_ref_t* v1016;
  iree_host_size_t v1017;
  iree_vm_ref_t v1018;
  iree_vm_ref_t* v1019;
  iree_host_size_t v1020;
  iree_status_t v1021;
  bool v1022;
  int32_t v1023;
  bool v1024;
  iree_vm_function_t* v1025;
  iree_vm_function_t* v1026;
  iree_vm_ref_t v1027;
  iree_vm_ref_t* v1028;
  iree_host_size_t v1029;
  iree_vm_ref_t v1030;
  iree_vm_ref_t* v1031;
  iree_host_size_t v1032;
  iree_vm_ref_t v1033;
  iree_vm_ref_t* v1034;
  iree_host_size_t v1035;
  iree_vm_ref_t v1036;
  iree_vm_ref_t* v1037;
  iree_host_size_t v1038;
  iree_vm_ref_t v1039;
  iree_vm_ref_t* v1040;
  iree_host_size_t v1041;
  iree_status_t v1042;
  bool v1043;
  int32_t v1044;
  bool v1045;
  iree_vm_function_t* v1046;
  iree_vm_function_t* v1047;
  iree_vm_ref_t v1048;
  iree_vm_ref_t* v1049;
  iree_host_size_t v1050;
  iree_vm_ref_t v1051;
  iree_vm_ref_t* v1052;
  iree_host_size_t v1053;
  iree_status_t v1054;
  bool v1055;
  int32_t v1056;
  bool v1057;
  iree_vm_function_t* v1058;
  iree_vm_function_t* v1059;
  iree_vm_ref_t v1060;
  iree_vm_ref_t* v1061;
  iree_host_size_t v1062;
  iree_vm_ref_t v1063;
  iree_vm_ref_t* v1064;
  iree_host_size_t v1065;
  iree_status_t v1066;
  bool v1067;
  int32_t v1068;
  bool v1069;
  iree_vm_function_t* v1070;
  iree_vm_function_t* v1071;
  iree_vm_ref_t v1072;
  iree_vm_ref_t* v1073;
  iree_host_size_t v1074;
  iree_vm_ref_t v1075;
  iree_vm_ref_t* v1076;
  iree_host_size_t v1077;
  iree_vm_ref_t v1078;
  iree_vm_ref_t* v1079;
  iree_host_size_t v1080;
  iree_vm_ref_t v1081;
  iree_vm_ref_t* v1082;
  iree_host_size_t v1083;
  iree_status_t v1084;
  bool v1085;
  int32_t v1086;
  bool v1087;
  iree_vm_function_t* v1088;
  iree_vm_function_t* v1089;
  iree_vm_ref_t v1090;
  iree_vm_ref_t* v1091;
  iree_host_size_t v1092;
  iree_vm_ref_t v1093;
  iree_vm_ref_t* v1094;
  iree_host_size_t v1095;
  iree_status_t v1096;
  bool v1097;
  int32_t v1098;
  bool v1099;
  iree_vm_function_t* v1100;
  iree_vm_function_t* v1101;
  iree_vm_ref_t v1102;
  iree_vm_ref_t* v1103;
  iree_host_size_t v1104;
  iree_status_t v1105;
  bool v1106;
  int32_t v1107;
  bool v1108;
  iree_vm_function_t* v1109;
  iree_vm_function_t* v1110;
  iree_vm_ref_t v1111;
  iree_vm_ref_t* v1112;
  iree_host_size_t v1113;
  iree_vm_ref_t v1114;
  iree_vm_ref_t* v1115;
  iree_host_size_t v1116;
  iree_status_t v1117;
  bool v1118;
  int32_t v1119;
  bool v1120;
  iree_vm_function_t* v1121;
  iree_vm_function_t* v1122;
  iree_vm_ref_t v1123;
  iree_vm_ref_t* v1124;
  iree_host_size_t v1125;
  iree_vm_ref_t v1126;
  iree_vm_ref_t* v1127;
  iree_host_size_t v1128;
  iree_status_t v1129;
  bool v1130;
  int32_t v1131;
  bool v1132;
  iree_vm_function_t* v1133;
  iree_vm_function_t* v1134;
  iree_vm_ref_t v1135;
  iree_vm_ref_t* v1136;
  iree_host_size_t v1137;
  iree_vm_ref_t v1138;
  iree_vm_ref_t* v1139;
  iree_host_size_t v1140;
  iree_status_t v1141;
  bool v1142;
  int32_t v1143;
  bool v1144;
  iree_vm_function_t* v1145;
  iree_vm_function_t* v1146;
  iree_vm_ref_t v1147;
  iree_vm_ref_t* v1148;
  iree_host_size_t v1149;
  iree_vm_ref_t v1150;
  iree_vm_ref_t* v1151;
  iree_host_size_t v1152;
  iree_vm_ref_t v1153;
  iree_vm_ref_t* v1154;
  iree_host_size_t v1155;
  iree_vm_ref_t v1156;
  iree_vm_ref_t* v1157;
  iree_host_size_t v1158;
  iree_vm_ref_t v1159;
  iree_vm_ref_t* v1160;
  iree_host_size_t v1161;
  iree_status_t v1162;
  bool v1163;
  int32_t v1164;
  bool v1165;
  iree_vm_function_t* v1166;
  iree_vm_function_t* v1167;
  iree_vm_ref_t v1168;
  iree_vm_ref_t* v1169;
  iree_host_size_t v1170;
  iree_vm_ref_t v1171;
  iree_vm_ref_t* v1172;
  iree_host_size_t v1173;
  iree_status_t v1174;
  bool v1175;
  int32_t v1176;
  bool v1177;
  iree_vm_function_t* v1178;
  iree_vm_function_t* v1179;
  iree_vm_ref_t v1180;
  iree_vm_ref_t* v1181;
  iree_host_size_t v1182;
  iree_status_t v1183;
  bool v1184;
  int32_t v1185;
  bool v1186;
  iree_vm_function_t* v1187;
  iree_vm_function_t* v1188;
  iree_vm_ref_t v1189;
  iree_vm_ref_t* v1190;
  iree_host_size_t v1191;
  iree_vm_ref_t v1192;
  iree_vm_ref_t* v1193;
  iree_host_size_t v1194;
  iree_status_t v1195;
  bool v1196;
  int32_t v1197;
  bool v1198;
  iree_vm_function_t* v1199;
  iree_vm_function_t* v1200;
  iree_vm_ref_t v1201;
  iree_vm_ref_t* v1202;
  iree_host_size_t v1203;
  iree_vm_ref_t v1204;
  iree_vm_ref_t* v1205;
  iree_host_size_t v1206;
  iree_vm_ref_t v1207;
  iree_vm_ref_t* v1208;
  iree_host_size_t v1209;
  iree_vm_ref_t v1210;
  iree_vm_ref_t* v1211;
  iree_host_size_t v1212;
  iree_status_t v1213;
  bool v1214;
  int32_t v1215;
  bool v1216;
  iree_vm_function_t* v1217;
  iree_vm_function_t* v1218;
  iree_vm_ref_t v1219;
  iree_vm_ref_t* v1220;
  iree_host_size_t v1221;
  iree_vm_ref_t v1222;
  iree_vm_ref_t* v1223;
  iree_host_size_t v1224;
  iree_status_t v1225;
  bool v1226;
  int32_t v1227;
  bool v1228;
  iree_vm_function_t* v1229;
  iree_vm_function_t* v1230;
  iree_vm_ref_t v1231;
  iree_vm_ref_t* v1232;
  iree_host_size_t v1233;
  iree_vm_ref_t v1234;
  iree_vm_ref_t* v1235;
  iree_host_size_t v1236;
  iree_status_t v1237;
  bool v1238;
  int32_t v1239;
  bool v1240;
  iree_vm_function_t* v1241;
  iree_vm_function_t* v1242;
  iree_vm_ref_t v1243;
  iree_vm_ref_t* v1244;
  iree_host_size_t v1245;
  iree_vm_ref_t v1246;
  iree_vm_ref_t* v1247;
  iree_host_size_t v1248;
  iree_vm_ref_t v1249;
  iree_vm_ref_t* v1250;
  iree_host_size_t v1251;
  iree_vm_ref_t v1252;
  iree_vm_ref_t* v1253;
  iree_host_size_t v1254;
  iree_status_t v1255;
  bool v1256;
  int32_t v1257;
  bool v1258;
  iree_vm_function_t* v1259;
  iree_vm_function_t* v1260;
  iree_vm_ref_t v1261;
  iree_vm_ref_t* v1262;
  iree_host_size_t v1263;
  iree_vm_ref_t v1264;
  iree_vm_ref_t* v1265;
  iree_host_size_t v1266;
  iree_status_t v1267;
  bool v1268;
  int32_t v1269;
  bool v1270;
  iree_vm_function_t* v1271;
  iree_vm_function_t* v1272;
  iree_vm_ref_t v1273;
  iree_vm_ref_t* v1274;
  iree_host_size_t v1275;
  iree_status_t v1276;
  bool v1277;
  int32_t v1278;
  bool v1279;
  iree_vm_function_t* v1280;
  iree_vm_function_t* v1281;
  iree_vm_ref_t v1282;
  iree_vm_ref_t* v1283;
  iree_host_size_t v1284;
  iree_vm_ref_t v1285;
  iree_vm_ref_t* v1286;
  iree_host_size_t v1287;
  iree_status_t v1288;
  bool v1289;
  int32_t v1290;
  bool v1291;
  iree_vm_function_t* v1292;
  iree_vm_function_t* v1293;
  iree_vm_ref_t v1294;
  iree_vm_ref_t* v1295;
  iree_host_size_t v1296;
  iree_vm_ref_t v1297;
  iree_vm_ref_t* v1298;
  iree_host_size_t v1299;
  iree_vm_ref_t v1300;
  iree_vm_ref_t* v1301;
  iree_host_size_t v1302;
  iree_vm_ref_t v1303;
  iree_vm_ref_t* v1304;
  iree_host_size_t v1305;
  iree_vm_ref_t v1306;
  iree_vm_ref_t* v1307;
  iree_host_size_t v1308;
  iree_status_t v1309;
  bool v1310;
  int32_t v1311;
  bool v1312;
  iree_vm_function_t* v1313;
  iree_vm_function_t* v1314;
  iree_vm_ref_t v1315;
  iree_vm_ref_t* v1316;
  iree_host_size_t v1317;
  iree_vm_ref_t v1318;
  iree_vm_ref_t* v1319;
  iree_host_size_t v1320;
  iree_status_t v1321;
  bool v1322;
  int32_t v1323;
  bool v1324;
  iree_vm_function_t* v1325;
  iree_vm_function_t* v1326;
  iree_vm_ref_t v1327;
  iree_vm_ref_t* v1328;
  iree_host_size_t v1329;
  iree_vm_ref_t v1330;
  iree_vm_ref_t* v1331;
  iree_host_size_t v1332;
  iree_status_t v1333;
  bool v1334;
  int32_t v1335;
  bool v1336;
  iree_vm_function_t* v1337;
  iree_vm_function_t* v1338;
  iree_vm_ref_t v1339;
  iree_vm_ref_t* v1340;
  iree_host_size_t v1341;
  iree_vm_ref_t v1342;
  iree_vm_ref_t* v1343;
  iree_host_size_t v1344;
  iree_vm_ref_t v1345;
  iree_vm_ref_t* v1346;
  iree_host_size_t v1347;
  iree_vm_ref_t v1348;
  iree_vm_ref_t* v1349;
  iree_host_size_t v1350;
  iree_status_t v1351;
  bool v1352;
  int32_t v1353;
  bool v1354;
  iree_vm_function_t* v1355;
  iree_vm_function_t* v1356;
  iree_vm_ref_t v1357;
  iree_vm_ref_t* v1358;
  iree_host_size_t v1359;
  iree_vm_ref_t v1360;
  iree_vm_ref_t* v1361;
  iree_host_size_t v1362;
  iree_status_t v1363;
  bool v1364;
  int32_t v1365;
  bool v1366;
  iree_vm_function_t* v1367;
  iree_vm_function_t* v1368;
  iree_vm_ref_t v1369;
  iree_vm_ref_t* v1370;
  iree_host_size_t v1371;
  iree_vm_ref_t v1372;
  iree_vm_ref_t* v1373;
  iree_host_size_t v1374;
  iree_status_t v1375;
  bool v1376;
  int32_t v1377;
  bool v1378;
  iree_vm_function_t* v1379;
  iree_vm_function_t* v1380;
  iree_vm_ref_t v1381;
  iree_vm_ref_t* v1382;
  iree_host_size_t v1383;
  iree_vm_ref_t v1384;
  iree_vm_ref_t* v1385;
  iree_host_size_t v1386;
  iree_vm_ref_t v1387;
  iree_vm_ref_t* v1388;
  iree_host_size_t v1389;
  iree_vm_ref_t v1390;
  iree_vm_ref_t* v1391;
  iree_host_size_t v1392;
  iree_status_t v1393;
  bool v1394;
  int32_t v1395;
  bool v1396;
  iree_vm_function_t* v1397;
  iree_vm_function_t* v1398;
  iree_vm_ref_t v1399;
  iree_vm_ref_t* v1400;
  iree_host_size_t v1401;
  iree_vm_ref_t v1402;
  iree_vm_ref_t* v1403;
  iree_host_size_t v1404;
  iree_status_t v1405;
  bool v1406;
  int32_t v1407;
  bool v1408;
  iree_vm_function_t* v1409;
  iree_vm_function_t* v1410;
  iree_vm_ref_t v1411;
  iree_vm_ref_t* v1412;
  iree_host_size_t v1413;
  iree_status_t v1414;
  bool v1415;
  int32_t v1416;
  bool v1417;
  iree_vm_function_t* v1418;
  iree_vm_function_t* v1419;
  iree_vm_ref_t v1420;
  iree_vm_ref_t* v1421;
  iree_host_size_t v1422;
  iree_vm_ref_t v1423;
  iree_vm_ref_t* v1424;
  iree_host_size_t v1425;
  iree_status_t v1426;
  bool v1427;
  int32_t v1428;
  bool v1429;
  iree_vm_function_t* v1430;
  iree_vm_function_t* v1431;
  iree_vm_ref_t v1432;
  iree_vm_ref_t* v1433;
  iree_host_size_t v1434;
  iree_vm_ref_t v1435;
  iree_vm_ref_t* v1436;
  iree_host_size_t v1437;
  iree_vm_ref_t v1438;
  iree_vm_ref_t* v1439;
  iree_host_size_t v1440;
  iree_vm_ref_t v1441;
  iree_vm_ref_t* v1442;
  iree_host_size_t v1443;
  iree_vm_ref_t v1444;
  iree_vm_ref_t* v1445;
  iree_host_size_t v1446;
  iree_status_t v1447;
  bool v1448;
  int32_t v1449;
  bool v1450;
  iree_vm_function_t* v1451;
  iree_vm_function_t* v1452;
  iree_vm_ref_t v1453;
  iree_vm_ref_t* v1454;
  iree_host_size_t v1455;
  iree_vm_ref_t v1456;
  iree_vm_ref_t* v1457;
  iree_host_size_t v1458;
  iree_status_t v1459;
  bool v1460;
  int32_t v1461;
  bool v1462;
  iree_vm_function_t* v1463;
  iree_vm_function_t* v1464;
  iree_vm_ref_t v1465;
  iree_vm_ref_t* v1466;
  iree_host_size_t v1467;
  iree_vm_ref_t v1468;
  iree_vm_ref_t* v1469;
  iree_host_size_t v1470;
  iree_status_t v1471;
  bool v1472;
  int32_t v1473;
  bool v1474;
  iree_vm_function_t* v1475;
  iree_vm_function_t* v1476;
  iree_vm_ref_t v1477;
  iree_vm_ref_t* v1478;
  iree_host_size_t v1479;
  iree_vm_ref_t v1480;
  iree_vm_ref_t* v1481;
  iree_host_size_t v1482;
  iree_vm_ref_t v1483;
  iree_vm_ref_t* v1484;
  iree_host_size_t v1485;
  iree_vm_ref_t v1486;
  iree_vm_ref_t* v1487;
  iree_host_size_t v1488;
  iree_status_t v1489;
  bool v1490;
  int32_t v1491;
  bool v1492;
  iree_vm_function_t* v1493;
  iree_vm_function_t* v1494;
  iree_vm_ref_t v1495;
  iree_vm_ref_t* v1496;
  iree_host_size_t v1497;
  iree_vm_ref_t v1498;
  iree_vm_ref_t* v1499;
  iree_host_size_t v1500;
  iree_status_t v1501;
  bool v1502;
  int32_t v1503;
  bool v1504;
  iree_vm_function_t* v1505;
  iree_vm_function_t* v1506;
  iree_vm_ref_t v1507;
  iree_vm_ref_t* v1508;
  iree_host_size_t v1509;
  iree_vm_ref_t v1510;
  iree_vm_ref_t* v1511;
  iree_host_size_t v1512;
  iree_status_t v1513;
  bool v1514;
  int32_t v1515;
  bool v1516;
  iree_vm_function_t* v1517;
  iree_vm_function_t* v1518;
  iree_vm_ref_t v1519;
  iree_vm_ref_t* v1520;
  iree_host_size_t v1521;
  iree_vm_ref_t v1522;
  iree_vm_ref_t* v1523;
  iree_host_size_t v1524;
  iree_status_t v1525;
  bool v1526;
  int32_t v1527;
  bool v1528;
  iree_vm_function_t* v1529;
  iree_vm_function_t* v1530;
  iree_vm_ref_t v1531;
  iree_vm_ref_t* v1532;
  iree_host_size_t v1533;
  iree_status_t v1534;
  bool v1535;
  int32_t v1536;
  bool v1537;
  iree_vm_function_t* v1538;
  iree_vm_function_t* v1539;
  iree_vm_ref_t v1540;
  iree_vm_ref_t* v1541;
  iree_host_size_t v1542;
  iree_vm_ref_t v1543;
  iree_vm_ref_t* v1544;
  iree_host_size_t v1545;
  iree_status_t v1546;
  bool v1547;
  int32_t v1548;
  bool v1549;
  iree_vm_function_t* v1550;
  iree_vm_function_t* v1551;
  iree_vm_ref_t v1552;
  iree_vm_ref_t* v1553;
  iree_host_size_t v1554;
  iree_vm_ref_t v1555;
  iree_vm_ref_t* v1556;
  iree_host_size_t v1557;
  iree_status_t v1558;
  bool v1559;
  int32_t v1560;
  bool v1561;
  iree_vm_function_t* v1562;
  iree_vm_function_t* v1563;
  iree_vm_ref_t v1564;
  iree_vm_ref_t* v1565;
  iree_host_size_t v1566;
  iree_vm_ref_t v1567;
  iree_vm_ref_t* v1568;
  iree_host_size_t v1569;
  iree_vm_ref_t v1570;
  iree_vm_ref_t* v1571;
  iree_host_size_t v1572;
  iree_vm_ref_t v1573;
  iree_vm_ref_t* v1574;
  iree_host_size_t v1575;
  iree_status_t v1576;
  bool v1577;
  int32_t v1578;
  bool v1579;
  iree_vm_function_t* v1580;
  iree_vm_function_t* v1581;
  iree_vm_ref_t v1582;
  iree_vm_ref_t* v1583;
  iree_host_size_t v1584;
  iree_vm_ref_t v1585;
  iree_vm_ref_t* v1586;
  iree_host_size_t v1587;
  iree_status_t v1588;
  bool v1589;
  int32_t v1590;
  bool v1591;
  iree_vm_function_t* v1592;
  iree_vm_function_t* v1593;
  iree_vm_ref_t v1594;
  iree_vm_ref_t* v1595;
  iree_host_size_t v1596;
  iree_status_t v1597;
  bool v1598;
  int32_t v1599;
  bool v1600;
  iree_vm_function_t* v1601;
  iree_vm_function_t* v1602;
  iree_vm_ref_t v1603;
  iree_vm_ref_t* v1604;
  iree_host_size_t v1605;
  iree_vm_ref_t v1606;
  iree_vm_ref_t* v1607;
  iree_host_size_t v1608;
  iree_status_t v1609;
  bool v1610;
  int32_t v1611;
  bool v1612;
  iree_vm_function_t* v1613;
  iree_vm_function_t* v1614;
  iree_vm_ref_t v1615;
  iree_vm_ref_t* v1616;
  iree_host_size_t v1617;
  iree_status_t v1618;
  bool v1619;
  int32_t v1620;
  bool v1621;
  iree_vm_function_t* v1622;
  iree_vm_function_t* v1623;
  iree_vm_ref_t v1624;
  iree_vm_ref_t* v1625;
  iree_host_size_t v1626;
  iree_vm_ref_t v1627;
  iree_vm_ref_t* v1628;
  iree_host_size_t v1629;
  iree_vm_ref_t v1630;
  iree_vm_ref_t* v1631;
  iree_host_size_t v1632;
  iree_vm_ref_t v1633;
  iree_vm_ref_t* v1634;
  iree_host_size_t v1635;
  iree_status_t v1636;
  bool v1637;
  int32_t v1638;
  bool v1639;
  iree_vm_function_t* v1640;
  iree_vm_function_t* v1641;
  iree_vm_ref_t v1642;
  iree_vm_ref_t* v1643;
  iree_host_size_t v1644;
  iree_vm_ref_t v1645;
  iree_vm_ref_t* v1646;
  iree_host_size_t v1647;
  iree_status_t v1648;
  bool v1649;
  int32_t v1650;
  bool v1651;
  iree_vm_function_t* v1652;
  iree_vm_function_t* v1653;
  iree_vm_ref_t v1654;
  iree_vm_ref_t* v1655;
  iree_host_size_t v1656;
  iree_status_t v1657;
  bool v1658;
  int32_t v1659;
  bool v1660;
  iree_vm_function_t* v1661;
  iree_vm_function_t* v1662;
  iree_vm_ref_t v1663;
  iree_vm_ref_t* v1664;
  iree_host_size_t v1665;
  iree_vm_ref_t v1666;
  iree_vm_ref_t* v1667;
  iree_host_size_t v1668;
  iree_vm_ref_t v1669;
  iree_vm_ref_t* v1670;
  iree_host_size_t v1671;
  iree_vm_ref_t v1672;
  iree_vm_ref_t* v1673;
  iree_host_size_t v1674;
  iree_status_t v1675;
  bool v1676;
  int32_t v1677;
  bool v1678;
  iree_vm_function_t* v1679;
  iree_vm_function_t* v1680;
  iree_vm_ref_t v1681;
  iree_vm_ref_t* v1682;
  iree_host_size_t v1683;
  iree_vm_ref_t v1684;
  iree_vm_ref_t* v1685;
  iree_host_size_t v1686;
  iree_status_t v1687;
  bool v1688;
  int32_t v1689;
  bool v1690;
  iree_vm_function_t* v1691;
  iree_vm_function_t* v1692;
  iree_vm_ref_t v1693;
  iree_vm_ref_t* v1694;
  iree_host_size_t v1695;
  iree_status_t v1696;
  bool v1697;
  int32_t v1698;
  bool v1699;
  iree_vm_function_t* v1700;
  iree_vm_function_t* v1701;
  iree_vm_ref_t v1702;
  iree_vm_ref_t* v1703;
  iree_host_size_t v1704;
  iree_vm_ref_t v1705;
  iree_vm_ref_t* v1706;
  iree_host_size_t v1707;
  iree_vm_ref_t v1708;
  iree_vm_ref_t* v1709;
  iree_host_size_t v1710;
  iree_vm_ref_t v1711;
  iree_vm_ref_t* v1712;
  iree_host_size_t v1713;
  iree_vm_ref_t v1714;
  iree_vm_ref_t* v1715;
  iree_host_size_t v1716;
  iree_status_t v1717;
  bool v1718;
  int32_t v1719;
  bool v1720;
  iree_vm_function_t* v1721;
  iree_vm_function_t* v1722;
  iree_vm_ref_t v1723;
  iree_vm_ref_t* v1724;
  iree_host_size_t v1725;
  iree_vm_ref_t v1726;
  iree_vm_ref_t* v1727;
  iree_host_size_t v1728;
  iree_status_t v1729;
  bool v1730;
  int32_t v1731;
  bool v1732;
  iree_vm_function_t* v1733;
  iree_vm_function_t* v1734;
  iree_vm_ref_t v1735;
  iree_vm_ref_t* v1736;
  iree_host_size_t v1737;
  iree_status_t v1738;
  bool v1739;
  int32_t v1740;
  bool v1741;
  iree_vm_function_t* v1742;
  iree_vm_function_t* v1743;
  iree_vm_ref_t v1744;
  iree_vm_ref_t* v1745;
  iree_host_size_t v1746;
  iree_status_t v1747;
  bool v1748;
  int32_t v1749;
  bool v1750;
  iree_vm_function_t* v1751;
  iree_vm_function_t* v1752;
  iree_vm_ref_t v1753;
  iree_vm_ref_t* v1754;
  iree_host_size_t v1755;
  iree_status_t v1756;
  bool v1757;
  int32_t v1758;
  bool v1759;
  iree_vm_function_t* v1760;
  iree_vm_function_t* v1761;
  iree_vm_ref_t v1762;
  iree_vm_ref_t* v1763;
  iree_host_size_t v1764;
  iree_vm_ref_t v1765;
  iree_vm_ref_t* v1766;
  iree_host_size_t v1767;
  iree_vm_ref_t v1768;
  iree_vm_ref_t* v1769;
  iree_host_size_t v1770;
  iree_vm_ref_t v1771;
  iree_vm_ref_t* v1772;
  iree_host_size_t v1773;
  iree_status_t v1774;
  bool v1775;
  int32_t v1776;
  bool v1777;
  iree_vm_function_t* v1778;
  iree_vm_function_t* v1779;
  iree_vm_ref_t v1780;
  iree_vm_ref_t* v1781;
  iree_host_size_t v1782;
  iree_status_t v1783;
  bool v1784;
  int32_t v1785;
  bool v1786;
  iree_vm_function_t* v1787;
  iree_vm_function_t* v1788;
  iree_vm_ref_t v1789;
  iree_vm_ref_t* v1790;
  iree_host_size_t v1791;
  iree_vm_ref_t v1792;
  iree_vm_ref_t* v1793;
  iree_host_size_t v1794;
  iree_vm_ref_t v1795;
  iree_vm_ref_t* v1796;
  iree_host_size_t v1797;
  iree_vm_ref_t v1798;
  iree_vm_ref_t* v1799;
  iree_host_size_t v1800;
  iree_status_t v1801;
  bool v1802;
  int32_t v1803;
  bool v1804;
  iree_vm_function_t* v1805;
  iree_vm_function_t* v1806;
  iree_vm_ref_t v1807;
  iree_vm_ref_t* v1808;
  iree_host_size_t v1809;
  int32_t v1810;
  int32_t* v1811;
  iree_status_t v1812;
  bool v1813;
  int32_t v1814;
  bool v1815;
  int32_t v1816;
  bool v1817;
  iree_vm_function_t* v1818;
  iree_vm_function_t* v1819;
  iree_vm_ref_t v1820;
  iree_vm_ref_t* v1821;
  iree_host_size_t v1822;
  iree_status_t v1823;
  bool v1824;
  int32_t v1825;
  bool v1826;
  iree_vm_function_t* v1827;
  iree_vm_function_t* v1828;
  iree_vm_ref_t v1829;
  iree_vm_ref_t* v1830;
  iree_host_size_t v1831;
  iree_status_t v1832;
  bool v1833;
  int32_t v1834;
  bool v1835;
  iree_vm_function_t* v1836;
  iree_vm_function_t* v1837;
  iree_vm_ref_t v1838;
  iree_vm_ref_t* v1839;
  iree_host_size_t v1840;
  iree_status_t v1841;
  bool v1842;
  int32_t v1843;
  bool v1844;
  iree_vm_function_t* v1845;
  iree_vm_function_t* v1846;
  iree_vm_ref_t v1847;
  iree_vm_ref_t* v1848;
  iree_host_size_t v1849;
  iree_status_t v1850;
  bool v1851;
  int32_t v1852;
  bool v1853;
  iree_vm_function_t* v1854;
  iree_vm_function_t* v1855;
  iree_vm_ref_t v1856;
  iree_vm_ref_t* v1857;
  iree_host_size_t v1858;
  iree_status_t v1859;
  bool v1860;
  int32_t v1861;
  bool v1862;
  iree_vm_function_t* v1863;
  iree_vm_function_t* v1864;
  iree_vm_ref_t v1865;
  iree_vm_ref_t* v1866;
  iree_host_size_t v1867;
  iree_status_t v1868;
  bool v1869;
  int32_t v1870;
  bool v1871;
  iree_vm_function_t* v1872;
  iree_vm_function_t* v1873;
  iree_vm_ref_t v1874;
  iree_vm_ref_t* v1875;
  iree_host_size_t v1876;
  iree_status_t v1877;
  bool v1878;
  int32_t v1879;
  bool v1880;
  iree_vm_function_t* v1881;
  iree_vm_function_t* v1882;
  iree_vm_ref_t v1883;
  iree_vm_ref_t* v1884;
  iree_host_size_t v1885;
  iree_status_t v1886;
  bool v1887;
  int32_t v1888;
  bool v1889;
  iree_vm_ref_t v1890;
  iree_vm_ref_t* v1891;
  iree_host_size_t v1892;
  iree_vm_ref_t v1893;
  iree_vm_ref_t* v1894;
  iree_host_size_t v1895;
  iree_vm_ref_t v1896;
  iree_vm_ref_t* v1897;
  iree_host_size_t v1898;
  iree_vm_ref_t v1899;
  iree_vm_ref_t* v1900;
  iree_host_size_t v1901;
  iree_vm_ref_t v1902;
  iree_vm_ref_t* v1903;
  iree_host_size_t v1904;
  iree_vm_ref_t v1905;
  iree_vm_ref_t* v1906;
  iree_host_size_t v1907;
  iree_vm_ref_t v1908;
  iree_vm_ref_t* v1909;
  iree_host_size_t v1910;
  iree_vm_ref_t v1911;
  iree_vm_ref_t* v1912;
  iree_host_size_t v1913;
  iree_status_t v1914;
  bool v1915;
  bool v1916;
  iree_status_t v1917;
  iree_string_view_t v1918;
  iree_host_size_t v1919;
  int32_t v1920;
  const char* v1921;
  iree_status_t v1922;
  iree_string_view_t v1923;
  iree_host_size_t v1924;
  int32_t v1925;
  const char* v1926;
  iree_status_t v1927;
  iree_status_t v1928;
  v16 = 17;
  v17 = 16;
  v18 = 10;
  v19 = 5;
  v20 = 553648160;
  v21 = 1;
  v22 = 0;
  v23 = 17664;
  v24 = 37376;
  v25 = 74752;
  v26 = 55040;
  v27 = 216064;
  v28 = 34816;
  v29 = 120832;
  v30 = 69632;
  v31 = 206848;
  v32 = 155648;
  v33 = 17408;
  v34 = 68608;
  v35 = 72704;
  v36 = 5120;
  v37 = 9216;
  v38 = 15872;
  v39 = 2560;
  v40 = 19968;
  v41 = -1;
  v42 = 0;
  v43 = 3;
  v44 = 2;
  v45 = -1;
  v46 = 64;
  v47 = 1;
  v48 = 279;
  v49 = 71424;
  v50 = 3075;
  v51 = 10;
  v52 = 2560;
  v53 = 50;
  v54 = 150998019;
  v55 = 53504;
  v56 = 48;
  v57 = 357376;
  v58 = 17664;
  v59 = 19712;
  v60 = 28;
  v61 = 13;
  v62 = 55040;
  v63 = 3968;
  v64 = 4;
  v65 = 69632;
  v66 = 51200;
  v67 = 6;
  v68 = 155648;
  v69 = 7;
  v70 = 8;
  v71 = 9;
  v72 = 11;
  v73 = 12;
  v74 = 14;
  v75 = 15;
  v76 = 26624;
  v77 = 25600;
  v78 = 100;
  v79 = 15872;
  v80 = 4096;
  v81 = 16;
  v82 = 52224;
  v83 = 1280;
  v84 = 5;
  v85 = 19968;
  v86 = 6656;
  v87 = 26;
  v88 = 5120;
  v89 = 9216;
  ;
  v91 = &v90;
  v92 = sizeof(iree_vm_ref_t);
  memset(v91, 0, v92);
  ;
  v94 = &v93;
  v95 = sizeof(iree_vm_ref_t);
  memset(v94, 0, v95);
  ;
  v97 = &v96;
  v98 = sizeof(iree_vm_ref_t);
  memset(v97, 0, v98);
  ;
  v100 = &v99;
  v101 = sizeof(iree_vm_ref_t);
  memset(v100, 0, v101);
  ;
  v103 = &v102;
  v104 = sizeof(iree_vm_ref_t);
  memset(v103, 0, v104);
  ;
  v106 = &v105;
  v107 = sizeof(iree_vm_ref_t);
  memset(v106, 0, v107);
  ;
  v109 = &v108;
  v110 = sizeof(iree_vm_ref_t);
  memset(v109, 0, v110);
  ;
  v112 = &v111;
  v113 = sizeof(iree_vm_ref_t);
  memset(v112, 0, v113);
  ;
  v115 = &v114;
  v116 = sizeof(iree_vm_ref_t);
  memset(v115, 0, v116);
  ;
  v118 = &v117;
  v119 = sizeof(iree_vm_ref_t);
  memset(v118, 0, v119);
  ;
  v121 = &v120;
  v122 = sizeof(iree_vm_ref_t);
  memset(v121, 0, v122);
  ;
  v124 = &v123;
  v125 = sizeof(iree_vm_ref_t);
  memset(v124, 0, v125);
  ;
  v127 = &v126;
  v128 = sizeof(iree_vm_ref_t);
  memset(v127, 0, v128);
  v129 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v130 = EMITC_ARRAY_ELEMENT_ADDRESS(v129, 7);
  ;
  v132 = &v131;
  v133 = sizeof(iree_vm_type_def_t);
  memset(v132, 0, v133);
  v134 = iree_make_cstring_view("hal.fence");
  v135 = iree_vm_ref_lookup_registered_type(v134);
  v136 = EMITC_STRUCT_PTR_MEMBER(v135, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v131, ref_type, v136);
  v137 = EMITC_STRUCT_PTR_MEMBER(v132, ref_type);
  v138 = iree_vm_ref_retain_or_move_checked(false, v130, v137, v8);
  v139 = (bool) v138;
  v140 = vm_cmp_nz_i32(v139);
  v141 = (bool) v140;
  if (v141) {
  v1928 = v138;
  goto label147;
  } else {
  goto label2;
  }
  label2:
  v142 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v143 = EMITC_ARRAY_ELEMENT_ADDRESS(v142, 8);
  ;
  v145 = &v144;
  v146 = sizeof(iree_vm_type_def_t);
  memset(v145, 0, v146);
  v147 = iree_make_cstring_view("hal.buffer");
  v148 = iree_vm_ref_lookup_registered_type(v147);
  v149 = EMITC_STRUCT_PTR_MEMBER(v148, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v144, ref_type, v149);
  v150 = EMITC_STRUCT_PTR_MEMBER(v145, ref_type);
  v151 = iree_vm_ref_retain_or_move_checked(false, v143, v150, v9);
  v152 = (bool) v151;
  v153 = vm_cmp_nz_i32(v152);
  v154 = (bool) v153;
  if (v154) {
  v1928 = v151;
  goto label147;
  } else {
  goto label3;
  }
  label3:
  v155 = EMITC_STRUCT_PTR_MEMBER(v3, rwdata);
  v156 = vm_global_load_i32(v155, 0);
  v157 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v158 = EMITC_ARRAY_ELEMENT_ADDRESS(v157, 1);
  ;
  v160 = &v159;
  v161 = sizeof(iree_vm_type_def_t);
  memset(v160, 0, v161);
  v162 = iree_make_cstring_view("hal.pipeline_layout");
  v163 = iree_vm_ref_lookup_registered_type(v162);
  v164 = EMITC_STRUCT_PTR_MEMBER(v163, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v159, ref_type, v164);
  v165 = EMITC_STRUCT_PTR_MEMBER(v160, ref_type);
  v166 = iree_vm_ref_retain_or_move_checked(false, v158, v165, v10);
  v167 = (bool) v166;
  v168 = vm_cmp_nz_i32(v167);
  v169 = (bool) v168;
  if (v169) {
  v1928 = v166;
  goto label147;
  } else {
  goto label4;
  }
  label4:
  v170 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v171 = EMITC_ARRAY_ELEMENT_ADDRESS(v170, 6);
  ;
  v173 = &v172;
  v174 = sizeof(iree_vm_type_def_t);
  memset(v173, 0, v174);
  v175 = iree_make_cstring_view("hal.executable");
  v176 = iree_vm_ref_lookup_registered_type(v175);
  v177 = EMITC_STRUCT_PTR_MEMBER(v176, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v172, ref_type, v177);
  v178 = EMITC_STRUCT_PTR_MEMBER(v173, ref_type);
  v179 = iree_vm_ref_retain_or_move_checked(false, v171, v178, v11);
  v180 = (bool) v179;
  v181 = vm_cmp_nz_i32(v180);
  v182 = (bool) v181;
  if (v182) {
  v1928 = v179;
  goto label147;
  } else {
  goto label5;
  }
  label5:
  v183 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v184 = EMITC_ARRAY_ELEMENT_ADDRESS(v183, 2);
  ;
  v186 = &v185;
  v187 = sizeof(iree_vm_type_def_t);
  memset(v186, 0, v187);
  v188 = iree_make_cstring_view("hal.pipeline_layout");
  v189 = iree_vm_ref_lookup_registered_type(v188);
  v190 = EMITC_STRUCT_PTR_MEMBER(v189, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v185, ref_type, v190);
  v191 = EMITC_STRUCT_PTR_MEMBER(v186, ref_type);
  v192 = iree_vm_ref_retain_or_move_checked(false, v184, v191, v12);
  v193 = (bool) v192;
  v194 = vm_cmp_nz_i32(v193);
  v195 = (bool) v194;
  if (v195) {
  v1928 = v192;
  goto label147;
  } else {
  goto label6;
  }
  label6:
  v196 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v197 = EMITC_ARRAY_ELEMENT_ADDRESS(v196, 3);
  ;
  v199 = &v198;
  v200 = sizeof(iree_vm_type_def_t);
  memset(v199, 0, v200);
  v201 = iree_make_cstring_view("hal.pipeline_layout");
  v202 = iree_vm_ref_lookup_registered_type(v201);
  v203 = EMITC_STRUCT_PTR_MEMBER(v202, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v198, ref_type, v203);
  v204 = EMITC_STRUCT_PTR_MEMBER(v199, ref_type);
  v205 = iree_vm_ref_retain_or_move_checked(false, v197, v204, v13);
  v206 = (bool) v205;
  v207 = vm_cmp_nz_i32(v206);
  v208 = (bool) v207;
  if (v208) {
  v1928 = v205;
  goto label147;
  } else {
  goto label7;
  }
  label7:
  v209 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v210 = EMITC_ARRAY_ELEMENT_ADDRESS(v209, 0);
  ;
  v212 = &v211;
  v213 = sizeof(iree_vm_type_def_t);
  memset(v212, 0, v213);
  v214 = iree_make_cstring_view("hal.pipeline_layout");
  v215 = iree_vm_ref_lookup_registered_type(v214);
  v216 = EMITC_STRUCT_PTR_MEMBER(v215, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v211, ref_type, v216);
  v217 = EMITC_STRUCT_PTR_MEMBER(v212, ref_type);
  v218 = iree_vm_ref_retain_or_move_checked(false, v210, v217, v14);
  v219 = (bool) v218;
  v220 = vm_cmp_nz_i32(v219);
  v221 = (bool) v220;
  if (v221) {
  v1928 = v218;
  goto label147;
  } else {
  goto label8;
  }
  label8:
  v222 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v223 = EMITC_ARRAY_ELEMENT_ADDRESS(v222, 4);
  ;
  v225 = &v224;
  v226 = sizeof(iree_vm_type_def_t);
  memset(v225, 0, v226);
  v227 = iree_make_cstring_view("hal.pipeline_layout");
  v228 = iree_vm_ref_lookup_registered_type(v227);
  v229 = EMITC_STRUCT_PTR_MEMBER(v228, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v224, ref_type, v229);
  v230 = EMITC_STRUCT_PTR_MEMBER(v225, ref_type);
  v231 = iree_vm_ref_retain_or_move_checked(false, v223, v230, v15);
  v232 = (bool) v231;
  v233 = vm_cmp_nz_i32(v232);
  v234 = (bool) v233;
  if (v234) {
  v1928 = v231;
  goto label147;
  } else {
  goto label9;
  }
  label9:
  v235 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v236 = EMITC_ARRAY_ELEMENT_ADDRESS(v235, 5);
  ;
  v238 = &v237;
  v239 = sizeof(iree_vm_type_def_t);
  memset(v238, 0, v239);
  v240 = iree_make_cstring_view("hal.pipeline_layout");
  v241 = iree_vm_ref_lookup_registered_type(v240);
  v242 = EMITC_STRUCT_PTR_MEMBER(v241, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v237, ref_type, v242);
  v243 = EMITC_STRUCT_PTR_MEMBER(v238, ref_type);
  v244 = iree_vm_ref_retain_or_move_checked(false, v236, v243, v115);
  v245 = (bool) v244;
  v246 = vm_cmp_nz_i32(v245);
  v247 = (bool) v246;
  if (v247) {
  v1928 = v244;
  goto label147;
  } else {
  goto label10;
  }
  label10:
  v248 = EMITC_STRUCT_PTR_MEMBER(v3, rodata_buffers);
  v249 = EMITC_ARRAY_ELEMENT_ADDRESS(v248, 4);
  v250 = iree_vm_buffer_type_id();
  v251 = iree_vm_ref_wrap_retain(v249, v250, v118);
  v252 = (bool) v251;
  v253 = vm_cmp_nz_i32(v252);
  v254 = (bool) v253;
  if (v254) {
  v1928 = v251;
  goto label147;
  } else {
  goto label11;
  }
  label11:
  v255 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v256 = EMITC_ARRAY_ELEMENT_ADDRESS(v255, 6);
  ;
  v258 = &v257;
  v259 = sizeof(iree_vm_ref_t);
  memset(v258, 0, v259);
  iree_vm_ref_assign(v4, v258);
  ;
  v261 = &v260;
  v262 = sizeof(iree_vm_ref_t);
  memset(v261, 0, v262);
  iree_vm_ref_assign(v118, v261);
  v263 = module_call_0rriiCID_v_3_import_shim(v1, v256, v258, v261, v20, v21, v43, v46, v47, v48);
  v264 = (bool) v263;
  v265 = vm_cmp_nz_i32(v264);
  v266 = (bool) v265;
  if (v266) {
  v1928 = v263;
  goto label147;
  } else {
  goto label12;
  }
  label12:
  v267 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v268 = EMITC_ARRAY_ELEMENT_ADDRESS(v267, 7);
  ;
  v270 = &v269;
  v271 = sizeof(iree_vm_ref_t);
  memset(v270, 0, v271);
  iree_vm_ref_assign(v4, v270);
  v272 = module_call_0r_r_import_shim(v1, v268, v270, v4);
  v273 = (bool) v272;
  v274 = vm_cmp_nz_i32(v273);
  v275 = (bool) v274;
  if (v275) {
  v1928 = v272;
  goto label147;
  } else {
  goto label13;
  }
  label13:
  v276 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v277 = EMITC_ARRAY_ELEMENT_ADDRESS(v276, 0);
  v278 = module_call_0v_r_import_shim(v1, v277, v121);
  v279 = (bool) v278;
  v280 = vm_cmp_nz_i32(v279);
  v281 = (bool) v280;
  if (v281) {
  v1928 = v278;
  goto label147;
  } else {
  goto label14;
  }
  label14:
  v282 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v283 = EMITC_ARRAY_ELEMENT_ADDRESS(v282, 17);
  ;
  v285 = &v284;
  v286 = sizeof(iree_vm_ref_t);
  memset(v285, 0, v286);
  iree_vm_ref_assign(v121, v285);
  v287 = module_call_0r_r_import_shim(v1, v283, v285, v124);
  v288 = (bool) v287;
  v289 = vm_cmp_nz_i32(v288);
  v290 = (bool) v289;
  if (v290) {
  v1928 = v287;
  goto label147;
  } else {
  goto label15;
  }
  label15:
  v291 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v292 = EMITC_ARRAY_ELEMENT_ADDRESS(v291, 4);
  ;
  v294 = &v293;
  v295 = sizeof(iree_vm_ref_t);
  memset(v294, 0, v295);
  iree_vm_ref_assign(v4, v294);
  ;
  v297 = &v296;
  v298 = sizeof(iree_vm_ref_t);
  memset(v297, 0, v298);
  iree_vm_ref_assign(v118, v297);
  ;
  v300 = &v299;
  v301 = sizeof(iree_vm_ref_t);
  memset(v300, 0, v301);
  iree_vm_ref_assign(v124, v300);
  v302 = module_call_0rrrIii_v_import_shim(v1, v292, v294, v297, v300, v49, v17, v50);
  v303 = (bool) v302;
  v304 = vm_cmp_nz_i32(v303);
  v305 = (bool) v304;
  if (v305) {
  v1928 = v302;
  goto label147;
  } else {
  goto label16;
  }
  label16:
  v306 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v307 = EMITC_ARRAY_ELEMENT_ADDRESS(v306, 6);
  ;
  v309 = &v308;
  v310 = sizeof(iree_vm_ref_t);
  memset(v309, 0, v310);
  iree_vm_ref_assign(v5, v309);
  ;
  v312 = &v311;
  v313 = sizeof(iree_vm_ref_t);
  memset(v312, 0, v313);
  iree_vm_ref_assign(v118, v312);
  v314 = module_call_0rriiCID_v_2_import_shim(v1, v307, v309, v312, v20, v21, v44, v46, v51);
  v315 = (bool) v314;
  v316 = vm_cmp_nz_i32(v315);
  v317 = (bool) v316;
  if (v317) {
  v1928 = v314;
  goto label147;
  } else {
  goto label17;
  }
  label17:
  v318 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v319 = EMITC_ARRAY_ELEMENT_ADDRESS(v318, 7);
  ;
  v321 = &v320;
  v322 = sizeof(iree_vm_ref_t);
  memset(v321, 0, v322);
  iree_vm_ref_assign(v5, v321);
  v323 = module_call_0r_r_import_shim(v1, v319, v321, v5);
  v324 = (bool) v323;
  v325 = vm_cmp_nz_i32(v324);
  v326 = (bool) v325;
  if (v326) {
  v1928 = v323;
  goto label147;
  } else {
  goto label18;
  }
  label18:
  v327 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v328 = EMITC_ARRAY_ELEMENT_ADDRESS(v327, 4);
  ;
  v330 = &v329;
  v331 = sizeof(iree_vm_ref_t);
  memset(v330, 0, v331);
  iree_vm_ref_assign(v5, v330);
  ;
  v333 = &v332;
  v334 = sizeof(iree_vm_ref_t);
  memset(v333, 0, v334);
  iree_vm_ref_assign(v118, v333);
  ;
  v336 = &v335;
  v337 = sizeof(iree_vm_ref_t);
  memset(v336, 0, v337);
  iree_vm_ref_assign(v124, v336);
  v338 = module_call_0rrrIii_v_import_shim(v1, v328, v330, v333, v336, v52, v17, v50);
  v339 = (bool) v338;
  v340 = vm_cmp_nz_i32(v339);
  v341 = (bool) v340;
  if (v341) {
  v1928 = v338;
  goto label147;
  } else {
  goto label19;
  }
  label19:
  v342 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v343 = EMITC_ARRAY_ELEMENT_ADDRESS(v342, 6);
  ;
  v345 = &v344;
  v346 = sizeof(iree_vm_ref_t);
  memset(v345, 0, v346);
  iree_vm_ref_assign(v6, v345);
  ;
  v348 = &v347;
  v349 = sizeof(iree_vm_ref_t);
  memset(v348, 0, v349);
  iree_vm_ref_assign(v118, v348);
  v350 = module_call_0rriiCID_v_2_import_shim(v1, v343, v345, v348, v20, v21, v44, v46, v51);
  v351 = (bool) v350;
  v352 = vm_cmp_nz_i32(v351);
  v353 = (bool) v352;
  if (v353) {
  v1928 = v350;
  goto label147;
  } else {
  goto label20;
  }
  label20:
  v354 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v355 = EMITC_ARRAY_ELEMENT_ADDRESS(v354, 7);
  ;
  v357 = &v356;
  v358 = sizeof(iree_vm_ref_t);
  memset(v357, 0, v358);
  iree_vm_ref_assign(v6, v357);
  v359 = module_call_0r_r_import_shim(v1, v355, v357, v6);
  v360 = (bool) v359;
  v361 = vm_cmp_nz_i32(v360);
  v362 = (bool) v361;
  if (v362) {
  v1928 = v359;
  goto label147;
  } else {
  goto label21;
  }
  label21:
  v363 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v364 = EMITC_ARRAY_ELEMENT_ADDRESS(v363, 4);
  ;
  v366 = &v365;
  v367 = sizeof(iree_vm_ref_t);
  memset(v366, 0, v367);
  iree_vm_ref_assign(v6, v366);
  ;
  v369 = &v368;
  v370 = sizeof(iree_vm_ref_t);
  memset(v369, 0, v370);
  iree_vm_ref_assign(v118, v369);
  ;
  v372 = &v371;
  v373 = sizeof(iree_vm_ref_t);
  memset(v372, 0, v373);
  iree_vm_ref_assign(v124, v372);
  v374 = module_call_0rrrIii_v_import_shim(v1, v364, v366, v369, v372, v52, v17, v50);
  v375 = (bool) v374;
  v376 = vm_cmp_nz_i32(v375);
  v377 = (bool) v376;
  if (v377) {
  v1928 = v374;
  goto label147;
  } else {
  goto label22;
  }
  label22:
  v378 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v379 = EMITC_ARRAY_ELEMENT_ADDRESS(v378, 6);
  ;
  v381 = &v380;
  v382 = sizeof(iree_vm_ref_t);
  memset(v381, 0, v382);
  iree_vm_ref_assign(v7, v381);
  ;
  v384 = &v383;
  v385 = sizeof(iree_vm_ref_t);
  memset(v384, 0, v385);
  iree_vm_ref_assign(v118, v384);
  v386 = module_call_0rriiCID_v_3_import_shim(v1, v379, v381, v384, v20, v21, v43, v46, v47, v48);
  v387 = (bool) v386;
  v388 = vm_cmp_nz_i32(v387);
  v389 = (bool) v388;
  if (v389) {
  v1928 = v386;
  goto label147;
  } else {
  goto label23;
  }
  label23:
  v390 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v391 = EMITC_ARRAY_ELEMENT_ADDRESS(v390, 7);
  ;
  v393 = &v392;
  v394 = sizeof(iree_vm_ref_t);
  memset(v393, 0, v394);
  iree_vm_ref_assign(v7, v393);
  v395 = module_call_0r_r_import_shim(v1, v391, v393, v7);
  v396 = (bool) v395;
  v397 = vm_cmp_nz_i32(v396);
  v398 = (bool) v397;
  if (v398) {
  v1928 = v395;
  goto label147;
  } else {
  goto label24;
  }
  label24:
  v399 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v400 = EMITC_ARRAY_ELEMENT_ADDRESS(v399, 4);
  ;
  v402 = &v401;
  v403 = sizeof(iree_vm_ref_t);
  memset(v402, 0, v403);
  iree_vm_ref_assign(v7, v402);
  ;
  v405 = &v404;
  v406 = sizeof(iree_vm_ref_t);
  memset(v405, 0, v406);
  iree_vm_ref_assign(v118, v405);
  ;
  v408 = &v407;
  v409 = sizeof(iree_vm_ref_t);
  memset(v408, 0, v409);
  iree_vm_ref_assign(v124, v408);
  v410 = module_call_0rrrIii_v_import_shim(v1, v400, v402, v405, v408, v49, v17, v50);
  v411 = (bool) v410;
  v412 = vm_cmp_nz_i32(v411);
  v413 = (bool) v412;
  if (v413) {
  v1928 = v410;
  goto label147;
  } else {
  goto label25;
  }
  label25:
  v414 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v415 = EMITC_ARRAY_ELEMENT_ADDRESS(v414, 1);
  ;
  v417 = &v416;
  v418 = sizeof(iree_vm_ref_t);
  memset(v417, 0, v418);
  iree_vm_ref_assign(v124, v417);
  v419 = module_call_0riiI_r_import_shim(v1, v415, v417, v53, v54, v55, v118);
  v420 = (bool) v419;
  v421 = vm_cmp_nz_i32(v420);
  v422 = (bool) v421;
  if (v422) {
  v1928 = v419;
  goto label147;
  } else {
  goto label26;
  }
  label26:
  v423 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v424 = EMITC_ARRAY_ELEMENT_ADDRESS(v423, 23);
  ;
  v426 = &v425;
  v427 = sizeof(iree_vm_ref_t);
  memset(v426, 0, v427);
  iree_vm_ref_assign(v121, v426);
  v428 = module_call_0ri_r_import_shim(v1, v424, v426, v22, v124);
  v429 = (bool) v428;
  v430 = vm_cmp_nz_i32(v429);
  v431 = (bool) v430;
  if (v431) {
  v1928 = v428;
  goto label147;
  } else {
  goto label27;
  }
  label27:
  v432 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v433 = EMITC_ARRAY_ELEMENT_ADDRESS(v432, 19);
  ;
  v435 = &v434;
  v436 = sizeof(iree_vm_ref_t);
  memset(v435, 0, v436);
  iree_vm_ref_assign(v121, v435);
  ;
  v438 = &v437;
  v439 = sizeof(iree_vm_ref_t);
  memset(v438, 0, v439);
  iree_vm_ref_assign(v8, v438);
  ;
  v441 = &v440;
  v442 = sizeof(iree_vm_ref_t);
  memset(v441, 0, v442);
  iree_vm_ref_assign(v124, v441);
  v443 = module_call_0rIrriiiI_r_import_shim(v1, v433, v435, v41, v438, v441, v22, v56, v50, v57, v8);
  v444 = (bool) v443;
  v445 = vm_cmp_nz_i32(v444);
  v446 = (bool) v445;
  if (v446) {
  v1928 = v443;
  goto label147;
  } else {
  goto label28;
  }
  label28:
  v447 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v448 = EMITC_ARRAY_ELEMENT_ADDRESS(v447, 8);
  ;
  v450 = &v449;
  v451 = sizeof(iree_vm_ref_t);
  memset(v450, 0, v451);
  iree_vm_ref_assign(v121, v450);
  v452 = module_call_0riii_r_import_shim(v1, v448, v450, v21, v43, v22, v127);
  v453 = (bool) v452;
  v454 = vm_cmp_nz_i32(v453);
  v455 = (bool) v454;
  if (v455) {
  v1928 = v452;
  goto label147;
  } else {
  goto label29;
  }
  label29:
  v456 = vm_cmp_nz_i32(v156);
  v457 = (bool) v456;
  if (v457) {
  goto label30;
  } else {
  goto label146;
  }
  label30:
  v458 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v459 = EMITC_ARRAY_ELEMENT_ADDRESS(v458, 13);
  ;
  v461 = &v460;
  v462 = sizeof(iree_vm_ref_t);
  memset(v461, 0, v462);
  iree_vm_ref_assign(v127, v461);
  ;
  v464 = &v463;
  v465 = sizeof(iree_vm_ref_t);
  memset(v464, 0, v465);
  iree_vm_ref_assign(v10, v464);
  v466 = module_call_0rriCiD_v_1_import_shim(v1, v459, v461, v464, v22, v21, v22);
  v467 = (bool) v466;
  v468 = vm_cmp_nz_i32(v467);
  v469 = (bool) v468;
  if (v469) {
  v1928 = v466;
  goto label147;
  } else {
  goto label31;
  }
  label31:
  v470 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v471 = EMITC_ARRAY_ELEMENT_ADDRESS(v470, 14);
  ;
  v473 = &v472;
  v474 = sizeof(iree_vm_ref_t);
  memset(v473, 0, v474);
  iree_vm_ref_assign(v127, v473);
  ;
  v476 = &v475;
  v477 = sizeof(iree_vm_ref_t);
  memset(v476, 0, v477);
  iree_vm_ref_assign(v10, v476);
  ;
  v479 = &v478;
  v480 = sizeof(iree_vm_ref_t);
  memset(v479, 0, v480);
  iree_vm_ref_assign(v7, v479);
  ;
  v482 = &v481;
  v483 = sizeof(iree_vm_ref_t);
  memset(v482, 0, v483);
  iree_vm_ref_assign(v8, v482);
  v484 = module_call_0rriCiirIID_v_2_import_shim(v1, v471, v473, v476, v22, v44, v22, v22, v479, v42, v49, v21, v22, v482, v42, v57);
  v485 = (bool) v484;
  v486 = vm_cmp_nz_i32(v485);
  v487 = (bool) v486;
  if (v487) {
  v1928 = v484;
  goto label147;
  } else {
  goto label32;
  }
  label32:
  v488 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v489 = EMITC_ARRAY_ELEMENT_ADDRESS(v488, 15);
  ;
  v491 = &v490;
  v492 = sizeof(iree_vm_ref_t);
  memset(v491, 0, v492);
  iree_vm_ref_assign(v127, v491);
  ;
  v494 = &v493;
  v495 = sizeof(iree_vm_ref_t);
  memset(v494, 0, v495);
  iree_vm_ref_assign(v11, v494);
  v496 = module_call_0rriiii_v_import_shim(v1, v489, v491, v494, v21, v43, v44, v21);
  v497 = (bool) v496;
  v498 = vm_cmp_nz_i32(v497);
  v499 = (bool) v498;
  if (v499) {
  v1928 = v496;
  goto label147;
  } else {
  goto label33;
  }
  label33:
  v500 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v501 = EMITC_ARRAY_ELEMENT_ADDRESS(v500, 11);
  ;
  v503 = &v502;
  v504 = sizeof(iree_vm_ref_t);
  memset(v503, 0, v504);
  iree_vm_ref_assign(v127, v503);
  ;
  v506 = &v505;
  v507 = sizeof(iree_vm_ref_t);
  memset(v506, 0, v507);
  iree_vm_ref_assign(v8, v506);
  v508 = module_call_0rrIIii_v_import_shim(v1, v501, v503, v506, v58, v59, v22, v21);
  v509 = (bool) v508;
  v510 = vm_cmp_nz_i32(v509);
  v511 = (bool) v510;
  if (v511) {
  v1928 = v508;
  goto label147;
  } else {
  goto label34;
  }
  label34:
  v512 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v513 = EMITC_ARRAY_ELEMENT_ADDRESS(v512, 10);
  ;
  v515 = &v514;
  v516 = sizeof(iree_vm_ref_t);
  memset(v515, 0, v516);
  iree_vm_ref_assign(v127, v515);
  v517 = module_call_0riii_v_import_shim(v1, v513, v515, v60, v61, v22);
  v518 = (bool) v517;
  v519 = vm_cmp_nz_i32(v518);
  v520 = (bool) v519;
  if (v520) {
  v1928 = v517;
  goto label147;
  } else {
  goto label35;
  }
  label35:
  v521 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v522 = EMITC_ARRAY_ELEMENT_ADDRESS(v521, 13);
  ;
  v524 = &v523;
  v525 = sizeof(iree_vm_ref_t);
  memset(v524, 0, v525);
  iree_vm_ref_assign(v127, v524);
  ;
  v527 = &v526;
  v528 = sizeof(iree_vm_ref_t);
  memset(v527, 0, v528);
  iree_vm_ref_assign(v12, v527);
  v529 = module_call_0rriCiD_v_2_import_shim(v1, v522, v524, v527, v22, v44, v22, v23);
  v530 = (bool) v529;
  v531 = vm_cmp_nz_i32(v530);
  v532 = (bool) v531;
  if (v532) {
  v1928 = v529;
  goto label147;
  } else {
  goto label36;
  }
  label36:
  v533 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v534 = EMITC_ARRAY_ELEMENT_ADDRESS(v533, 14);
  ;
  v536 = &v535;
  v537 = sizeof(iree_vm_ref_t);
  memset(v536, 0, v537);
  iree_vm_ref_assign(v127, v536);
  ;
  v539 = &v538;
  v540 = sizeof(iree_vm_ref_t);
  memset(v539, 0, v540);
  iree_vm_ref_assign(v12, v539);
  ;
  v542 = &v541;
  v543 = sizeof(iree_vm_ref_t);
  memset(v542, 0, v543);
  iree_vm_ref_assign(v8, v542);
  ;
  v545 = &v544;
  v546 = sizeof(iree_vm_ref_t);
  memset(v545, 0, v546);
  iree_vm_ref_assign(v8, v545);
  v547 = module_call_0rriCiirIID_v_2_import_shim(v1, v534, v536, v539, v22, v44, v22, v22, v542, v42, v57, v21, v22, v545, v42, v57);
  v548 = (bool) v547;
  v549 = vm_cmp_nz_i32(v548);
  v550 = (bool) v549;
  if (v550) {
  v1928 = v547;
  goto label147;
  } else {
  goto label37;
  }
  label37:
  v551 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v552 = EMITC_ARRAY_ELEMENT_ADDRESS(v551, 15);
  ;
  v554 = &v553;
  v555 = sizeof(iree_vm_ref_t);
  memset(v554, 0, v555);
  iree_vm_ref_assign(v127, v554);
  ;
  v557 = &v556;
  v558 = sizeof(iree_vm_ref_t);
  memset(v557, 0, v558);
  iree_vm_ref_assign(v11, v557);
  v559 = module_call_0rriiii_v_import_shim(v1, v552, v554, v557, v44, v21, v21, v21);
  v560 = (bool) v559;
  v561 = vm_cmp_nz_i32(v560);
  v562 = (bool) v561;
  if (v562) {
  v1928 = v559;
  goto label147;
  } else {
  goto label38;
  }
  label38:
  v563 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v564 = EMITC_ARRAY_ELEMENT_ADDRESS(v563, 13);
  ;
  v566 = &v565;
  v567 = sizeof(iree_vm_ref_t);
  memset(v566, 0, v567);
  iree_vm_ref_assign(v127, v566);
  ;
  v569 = &v568;
  v570 = sizeof(iree_vm_ref_t);
  memset(v569, 0, v570);
  iree_vm_ref_assign(v10, v569);
  v571 = module_call_0rriCiD_v_1_import_shim(v1, v564, v566, v569, v22, v21, v24);
  v572 = (bool) v571;
  v573 = vm_cmp_nz_i32(v572);
  v574 = (bool) v573;
  if (v574) {
  v1928 = v571;
  goto label147;
  } else {
  goto label39;
  }
  label39:
  v575 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v576 = EMITC_ARRAY_ELEMENT_ADDRESS(v575, 14);
  ;
  v578 = &v577;
  v579 = sizeof(iree_vm_ref_t);
  memset(v578, 0, v579);
  iree_vm_ref_assign(v127, v578);
  ;
  v581 = &v580;
  v582 = sizeof(iree_vm_ref_t);
  memset(v581, 0, v582);
  iree_vm_ref_assign(v10, v581);
  ;
  v584 = &v583;
  v585 = sizeof(iree_vm_ref_t);
  memset(v584, 0, v585);
  iree_vm_ref_assign(v4, v584);
  ;
  v587 = &v586;
  v588 = sizeof(iree_vm_ref_t);
  memset(v587, 0, v588);
  iree_vm_ref_assign(v8, v587);
  v589 = module_call_0rriCiirIID_v_2_import_shim(v1, v576, v578, v581, v22, v44, v22, v22, v584, v42, v49, v21, v22, v587, v42, v57);
  v590 = (bool) v589;
  v591 = vm_cmp_nz_i32(v590);
  v592 = (bool) v591;
  if (v592) {
  v1928 = v589;
  goto label147;
  } else {
  goto label40;
  }
  label40:
  v593 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v594 = EMITC_ARRAY_ELEMENT_ADDRESS(v593, 15);
  ;
  v596 = &v595;
  v597 = sizeof(iree_vm_ref_t);
  memset(v596, 0, v597);
  iree_vm_ref_assign(v127, v596);
  ;
  v599 = &v598;
  v600 = sizeof(iree_vm_ref_t);
  memset(v599, 0, v600);
  iree_vm_ref_assign(v11, v599);
  v601 = module_call_0rriiii_v_import_shim(v1, v594, v596, v599, v21, v43, v44, v21);
  v602 = (bool) v601;
  v603 = vm_cmp_nz_i32(v602);
  v604 = (bool) v603;
  if (v604) {
  v1928 = v601;
  goto label147;
  } else {
  goto label41;
  }
  label41:
  v605 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v606 = EMITC_ARRAY_ELEMENT_ADDRESS(v605, 11);
  ;
  v608 = &v607;
  v609 = sizeof(iree_vm_ref_t);
  memset(v608, 0, v609);
  iree_vm_ref_assign(v127, v608);
  ;
  v611 = &v610;
  v612 = sizeof(iree_vm_ref_t);
  memset(v611, 0, v612);
  iree_vm_ref_assign(v8, v611);
  v613 = module_call_0rrIIii_v_import_shim(v1, v606, v608, v611, v62, v59, v22, v21);
  v614 = (bool) v613;
  v615 = vm_cmp_nz_i32(v614);
  v616 = (bool) v615;
  if (v616) {
  v1928 = v613;
  goto label147;
  } else {
  goto label42;
  }
  label42:
  v617 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v618 = EMITC_ARRAY_ELEMENT_ADDRESS(v617, 10);
  ;
  v620 = &v619;
  v621 = sizeof(iree_vm_ref_t);
  memset(v620, 0, v621);
  iree_vm_ref_assign(v127, v620);
  v622 = module_call_0riii_v_import_shim(v1, v618, v620, v60, v61, v22);
  v623 = (bool) v622;
  v624 = vm_cmp_nz_i32(v623);
  v625 = (bool) v624;
  if (v625) {
  v1928 = v622;
  goto label147;
  } else {
  goto label43;
  }
  label43:
  v626 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v627 = EMITC_ARRAY_ELEMENT_ADDRESS(v626, 13);
  ;
  v629 = &v628;
  v630 = sizeof(iree_vm_ref_t);
  memset(v629, 0, v630);
  iree_vm_ref_assign(v127, v629);
  ;
  v632 = &v631;
  v633 = sizeof(iree_vm_ref_t);
  memset(v632, 0, v633);
  iree_vm_ref_assign(v13, v632);
  v634 = module_call_0rriCiD_v_2_import_shim(v1, v627, v629, v632, v22, v44, v23, v25);
  v635 = (bool) v634;
  v636 = vm_cmp_nz_i32(v635);
  v637 = (bool) v636;
  if (v637) {
  v1928 = v634;
  goto label147;
  } else {
  goto label44;
  }
  label44:
  v638 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v639 = EMITC_ARRAY_ELEMENT_ADDRESS(v638, 14);
  ;
  v641 = &v640;
  v642 = sizeof(iree_vm_ref_t);
  memset(v641, 0, v642);
  iree_vm_ref_assign(v127, v641);
  ;
  v644 = &v643;
  v645 = sizeof(iree_vm_ref_t);
  memset(v644, 0, v645);
  iree_vm_ref_assign(v13, v644);
  ;
  v647 = &v646;
  v648 = sizeof(iree_vm_ref_t);
  memset(v647, 0, v648);
  iree_vm_ref_assign(v8, v647);
  ;
  v650 = &v649;
  v651 = sizeof(iree_vm_ref_t);
  memset(v650, 0, v651);
  iree_vm_ref_assign(v9, v650);
  ;
  v653 = &v652;
  v654 = sizeof(iree_vm_ref_t);
  memset(v653, 0, v654);
  iree_vm_ref_assign(v8, v653);
  v655 = module_call_0rriCiirIID_v_3_import_shim(v1, v639, v641, v644, v22, v43, v22, v22, v647, v42, v57, v21, v22, v650, v42, v63, v44, v22, v653, v42, v57);
  v656 = (bool) v655;
  v657 = vm_cmp_nz_i32(v656);
  v658 = (bool) v657;
  if (v658) {
  v1928 = v655;
  goto label147;
  } else {
  goto label45;
  }
  label45:
  v659 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v660 = EMITC_ARRAY_ELEMENT_ADDRESS(v659, 15);
  ;
  v662 = &v661;
  v663 = sizeof(iree_vm_ref_t);
  memset(v662, 0, v663);
  iree_vm_ref_assign(v127, v662);
  ;
  v665 = &v664;
  v666 = sizeof(iree_vm_ref_t);
  memset(v665, 0, v666);
  iree_vm_ref_assign(v11, v665);
  v667 = module_call_0rriiii_v_import_shim(v1, v660, v662, v665, v43, v44, v43, v44);
  v668 = (bool) v667;
  v669 = vm_cmp_nz_i32(v668);
  v670 = (bool) v669;
  if (v670) {
  v1928 = v667;
  goto label147;
  } else {
  goto label46;
  }
  label46:
  v671 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v672 = EMITC_ARRAY_ELEMENT_ADDRESS(v671, 13);
  ;
  v674 = &v673;
  v675 = sizeof(iree_vm_ref_t);
  memset(v674, 0, v675);
  iree_vm_ref_assign(v127, v674);
  ;
  v677 = &v676;
  v678 = sizeof(iree_vm_ref_t);
  memset(v677, 0, v678);
  iree_vm_ref_assign(v12, v677);
  v679 = module_call_0rriCiD_v_2_import_shim(v1, v672, v674, v677, v22, v44, v24, v26);
  v680 = (bool) v679;
  v681 = vm_cmp_nz_i32(v680);
  v682 = (bool) v681;
  if (v682) {
  v1928 = v679;
  goto label147;
  } else {
  goto label47;
  }
  label47:
  v683 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v684 = EMITC_ARRAY_ELEMENT_ADDRESS(v683, 14);
  ;
  v686 = &v685;
  v687 = sizeof(iree_vm_ref_t);
  memset(v686, 0, v687);
  iree_vm_ref_assign(v127, v686);
  ;
  v689 = &v688;
  v690 = sizeof(iree_vm_ref_t);
  memset(v689, 0, v690);
  iree_vm_ref_assign(v12, v689);
  ;
  v692 = &v691;
  v693 = sizeof(iree_vm_ref_t);
  memset(v692, 0, v693);
  iree_vm_ref_assign(v8, v692);
  ;
  v695 = &v694;
  v696 = sizeof(iree_vm_ref_t);
  memset(v695, 0, v696);
  iree_vm_ref_assign(v8, v695);
  v697 = module_call_0rriCiirIID_v_2_import_shim(v1, v684, v686, v689, v22, v44, v22, v22, v692, v42, v57, v21, v22, v695, v42, v57);
  v698 = (bool) v697;
  v699 = vm_cmp_nz_i32(v698);
  v700 = (bool) v699;
  if (v700) {
  v1928 = v697;
  goto label147;
  } else {
  goto label48;
  }
  label48:
  v701 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v702 = EMITC_ARRAY_ELEMENT_ADDRESS(v701, 15);
  ;
  v704 = &v703;
  v705 = sizeof(iree_vm_ref_t);
  memset(v704, 0, v705);
  iree_vm_ref_assign(v127, v704);
  ;
  v707 = &v706;
  v708 = sizeof(iree_vm_ref_t);
  memset(v707, 0, v708);
  iree_vm_ref_assign(v11, v707);
  v709 = module_call_0rriiii_v_import_shim(v1, v702, v704, v707, v44, v21, v21, v21);
  v710 = (bool) v709;
  v711 = vm_cmp_nz_i32(v710);
  v712 = (bool) v711;
  if (v712) {
  v1928 = v709;
  goto label147;
  } else {
  goto label49;
  }
  label49:
  v713 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v714 = EMITC_ARRAY_ELEMENT_ADDRESS(v713, 10);
  ;
  v716 = &v715;
  v717 = sizeof(iree_vm_ref_t);
  memset(v716, 0, v717);
  iree_vm_ref_assign(v127, v716);
  v718 = module_call_0riii_v_import_shim(v1, v714, v716, v60, v61, v22);
  v719 = (bool) v718;
  v720 = vm_cmp_nz_i32(v719);
  v721 = (bool) v720;
  if (v721) {
  v1928 = v718;
  goto label147;
  } else {
  goto label50;
  }
  label50:
  v722 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v723 = EMITC_ARRAY_ELEMENT_ADDRESS(v722, 13);
  ;
  v725 = &v724;
  v726 = sizeof(iree_vm_ref_t);
  memset(v725, 0, v726);
  iree_vm_ref_assign(v127, v725);
  ;
  v728 = &v727;
  v729 = sizeof(iree_vm_ref_t);
  memset(v728, 0, v729);
  iree_vm_ref_assign(v12, v728);
  v730 = module_call_0rriCiD_v_2_import_shim(v1, v723, v725, v728, v22, v44, v25, v22);
  v731 = (bool) v730;
  v732 = vm_cmp_nz_i32(v731);
  v733 = (bool) v732;
  if (v733) {
  v1928 = v730;
  goto label147;
  } else {
  goto label51;
  }
  label51:
  v734 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v735 = EMITC_ARRAY_ELEMENT_ADDRESS(v734, 15);
  ;
  v737 = &v736;
  v738 = sizeof(iree_vm_ref_t);
  memset(v737, 0, v738);
  iree_vm_ref_assign(v127, v737);
  ;
  v740 = &v739;
  v741 = sizeof(iree_vm_ref_t);
  memset(v740, 0, v741);
  iree_vm_ref_assign(v11, v740);
  v742 = module_call_0rriiii_v_import_shim(v1, v735, v737, v740, v64, v44, v16, v44);
  v743 = (bool) v742;
  v744 = vm_cmp_nz_i32(v743);
  v745 = (bool) v744;
  if (v745) {
  v1928 = v742;
  goto label147;
  } else {
  goto label52;
  }
  label52:
  v746 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v747 = EMITC_ARRAY_ELEMENT_ADDRESS(v746, 13);
  ;
  v749 = &v748;
  v750 = sizeof(iree_vm_ref_t);
  memset(v749, 0, v750);
  iree_vm_ref_assign(v127, v749);
  ;
  v752 = &v751;
  v753 = sizeof(iree_vm_ref_t);
  memset(v752, 0, v753);
  iree_vm_ref_assign(v13, v752);
  v754 = module_call_0rriCiD_v_2_import_shim(v1, v747, v749, v752, v22, v44, v26, v27);
  v755 = (bool) v754;
  v756 = vm_cmp_nz_i32(v755);
  v757 = (bool) v756;
  if (v757) {
  v1928 = v754;
  goto label147;
  } else {
  goto label53;
  }
  label53:
  v758 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v759 = EMITC_ARRAY_ELEMENT_ADDRESS(v758, 14);
  ;
  v761 = &v760;
  v762 = sizeof(iree_vm_ref_t);
  memset(v761, 0, v762);
  iree_vm_ref_assign(v127, v761);
  ;
  v764 = &v763;
  v765 = sizeof(iree_vm_ref_t);
  memset(v764, 0, v765);
  iree_vm_ref_assign(v13, v764);
  ;
  v767 = &v766;
  v768 = sizeof(iree_vm_ref_t);
  memset(v767, 0, v768);
  iree_vm_ref_assign(v8, v767);
  ;
  v770 = &v769;
  v771 = sizeof(iree_vm_ref_t);
  memset(v770, 0, v771);
  iree_vm_ref_assign(v9, v770);
  ;
  v773 = &v772;
  v774 = sizeof(iree_vm_ref_t);
  memset(v773, 0, v774);
  iree_vm_ref_assign(v8, v773);
  v775 = module_call_0rriCiirIID_v_3_import_shim(v1, v759, v761, v764, v22, v43, v22, v22, v767, v42, v57, v21, v22, v770, v42, v63, v44, v22, v773, v42, v57);
  v776 = (bool) v775;
  v777 = vm_cmp_nz_i32(v776);
  v778 = (bool) v777;
  if (v778) {
  v1928 = v775;
  goto label147;
  } else {
  goto label54;
  }
  label54:
  v779 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v780 = EMITC_ARRAY_ELEMENT_ADDRESS(v779, 15);
  ;
  v782 = &v781;
  v783 = sizeof(iree_vm_ref_t);
  memset(v782, 0, v783);
  iree_vm_ref_assign(v127, v782);
  ;
  v785 = &v784;
  v786 = sizeof(iree_vm_ref_t);
  memset(v785, 0, v786);
  iree_vm_ref_assign(v11, v785);
  v787 = module_call_0rriiii_v_import_shim(v1, v780, v782, v785, v43, v44, v43, v44);
  v788 = (bool) v787;
  v789 = vm_cmp_nz_i32(v788);
  v790 = (bool) v789;
  if (v790) {
  v1928 = v787;
  goto label147;
  } else {
  goto label55;
  }
  label55:
  v791 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v792 = EMITC_ARRAY_ELEMENT_ADDRESS(v791, 10);
  ;
  v794 = &v793;
  v795 = sizeof(iree_vm_ref_t);
  memset(v794, 0, v795);
  iree_vm_ref_assign(v127, v794);
  v796 = module_call_0riii_v_import_shim(v1, v792, v794, v60, v61, v22);
  v797 = (bool) v796;
  v798 = vm_cmp_nz_i32(v797);
  v799 = (bool) v798;
  if (v799) {
  v1928 = v796;
  goto label147;
  } else {
  goto label56;
  }
  label56:
  v800 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v801 = EMITC_ARRAY_ELEMENT_ADDRESS(v800, 13);
  ;
  v803 = &v802;
  v804 = sizeof(iree_vm_ref_t);
  memset(v803, 0, v804);
  iree_vm_ref_assign(v127, v803);
  ;
  v806 = &v805;
  v807 = sizeof(iree_vm_ref_t);
  memset(v806, 0, v807);
  iree_vm_ref_assign(v12, v806);
  v808 = module_call_0rriCiD_v_2_import_shim(v1, v801, v803, v806, v22, v44, v22, v28);
  v809 = (bool) v808;
  v810 = vm_cmp_nz_i32(v809);
  v811 = (bool) v810;
  if (v811) {
  v1928 = v808;
  goto label147;
  } else {
  goto label57;
  }
  label57:
  v812 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v813 = EMITC_ARRAY_ELEMENT_ADDRESS(v812, 14);
  ;
  v815 = &v814;
  v816 = sizeof(iree_vm_ref_t);
  memset(v815, 0, v816);
  iree_vm_ref_assign(v127, v815);
  ;
  v818 = &v817;
  v819 = sizeof(iree_vm_ref_t);
  memset(v818, 0, v819);
  iree_vm_ref_assign(v12, v818);
  ;
  v821 = &v820;
  v822 = sizeof(iree_vm_ref_t);
  memset(v821, 0, v822);
  iree_vm_ref_assign(v8, v821);
  ;
  v824 = &v823;
  v825 = sizeof(iree_vm_ref_t);
  memset(v824, 0, v825);
  iree_vm_ref_assign(v8, v824);
  v826 = module_call_0rriCiirIID_v_2_import_shim(v1, v813, v815, v818, v22, v44, v22, v22, v821, v42, v57, v21, v22, v824, v42, v57);
  v827 = (bool) v826;
  v828 = vm_cmp_nz_i32(v827);
  v829 = (bool) v828;
  if (v829) {
  v1928 = v826;
  goto label147;
  } else {
  goto label58;
  }
  label58:
  v830 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v831 = EMITC_ARRAY_ELEMENT_ADDRESS(v830, 15);
  ;
  v833 = &v832;
  v834 = sizeof(iree_vm_ref_t);
  memset(v833, 0, v834);
  iree_vm_ref_assign(v127, v833);
  ;
  v836 = &v835;
  v837 = sizeof(iree_vm_ref_t);
  memset(v836, 0, v837);
  iree_vm_ref_assign(v11, v836);
  v838 = module_call_0rriiii_v_import_shim(v1, v831, v833, v836, v19, v44, v44, v21);
  v839 = (bool) v838;
  v840 = vm_cmp_nz_i32(v839);
  v841 = (bool) v840;
  if (v841) {
  v1928 = v838;
  goto label147;
  } else {
  goto label59;
  }
  label59:
  v842 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v843 = EMITC_ARRAY_ELEMENT_ADDRESS(v842, 11);
  ;
  v845 = &v844;
  v846 = sizeof(iree_vm_ref_t);
  memset(v845, 0, v846);
  iree_vm_ref_assign(v127, v845);
  ;
  v848 = &v847;
  v849 = sizeof(iree_vm_ref_t);
  memset(v848, 0, v849);
  iree_vm_ref_assign(v8, v848);
  v850 = module_call_0rrIIii_v_import_shim(v1, v843, v845, v848, v65, v66, v22, v21);
  v851 = (bool) v850;
  v852 = vm_cmp_nz_i32(v851);
  v853 = (bool) v852;
  if (v853) {
  v1928 = v850;
  goto label147;
  } else {
  goto label60;
  }
  label60:
  v854 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v855 = EMITC_ARRAY_ELEMENT_ADDRESS(v854, 13);
  ;
  v857 = &v856;
  v858 = sizeof(iree_vm_ref_t);
  memset(v857, 0, v858);
  iree_vm_ref_assign(v127, v857);
  ;
  v860 = &v859;
  v861 = sizeof(iree_vm_ref_t);
  memset(v860, 0, v861);
  iree_vm_ref_assign(v12, v860);
  v862 = module_call_0rriCiD_v_2_import_shim(v1, v855, v857, v860, v22, v44, v27, v29);
  v863 = (bool) v862;
  v864 = vm_cmp_nz_i32(v863);
  v865 = (bool) v864;
  if (v865) {
  v1928 = v862;
  goto label147;
  } else {
  goto label61;
  }
  label61:
  v866 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v867 = EMITC_ARRAY_ELEMENT_ADDRESS(v866, 15);
  ;
  v869 = &v868;
  v870 = sizeof(iree_vm_ref_t);
  memset(v869, 0, v870);
  iree_vm_ref_assign(v127, v869);
  ;
  v872 = &v871;
  v873 = sizeof(iree_vm_ref_t);
  memset(v872, 0, v873);
  iree_vm_ref_assign(v11, v872);
  v874 = module_call_0rriiii_v_import_shim(v1, v867, v869, v872, v64, v44, v16, v44);
  v875 = (bool) v874;
  v876 = vm_cmp_nz_i32(v875);
  v877 = (bool) v876;
  if (v877) {
  v1928 = v874;
  goto label147;
  } else {
  goto label62;
  }
  label62:
  v878 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v879 = EMITC_ARRAY_ELEMENT_ADDRESS(v878, 10);
  ;
  v881 = &v880;
  v882 = sizeof(iree_vm_ref_t);
  memset(v881, 0, v882);
  iree_vm_ref_assign(v127, v881);
  v883 = module_call_0riii_v_import_shim(v1, v879, v881, v60, v61, v22);
  v884 = (bool) v883;
  v885 = vm_cmp_nz_i32(v884);
  v886 = (bool) v885;
  if (v886) {
  v1928 = v883;
  goto label147;
  } else {
  goto label63;
  }
  label63:
  v887 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v888 = EMITC_ARRAY_ELEMENT_ADDRESS(v887, 13);
  ;
  v890 = &v889;
  v891 = sizeof(iree_vm_ref_t);
  memset(v890, 0, v891);
  iree_vm_ref_assign(v127, v890);
  ;
  v893 = &v892;
  v894 = sizeof(iree_vm_ref_t);
  memset(v893, 0, v894);
  iree_vm_ref_assign(v12, v893);
  v895 = module_call_0rriCiD_v_2_import_shim(v1, v888, v890, v893, v22, v44, v28, v30);
  v896 = (bool) v895;
  v897 = vm_cmp_nz_i32(v896);
  v898 = (bool) v897;
  if (v898) {
  v1928 = v895;
  goto label147;
  } else {
  goto label64;
  }
  label64:
  v899 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v900 = EMITC_ARRAY_ELEMENT_ADDRESS(v899, 15);
  ;
  v902 = &v901;
  v903 = sizeof(iree_vm_ref_t);
  memset(v902, 0, v903);
  iree_vm_ref_assign(v127, v902);
  ;
  v905 = &v904;
  v906 = sizeof(iree_vm_ref_t);
  memset(v905, 0, v906);
  iree_vm_ref_assign(v11, v905);
  v907 = module_call_0rriiii_v_import_shim(v1, v900, v902, v905, v67, v44, v44, v21);
  v908 = (bool) v907;
  v909 = vm_cmp_nz_i32(v908);
  v910 = (bool) v909;
  if (v910) {
  v1928 = v907;
  goto label147;
  } else {
  goto label65;
  }
  label65:
  v911 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v912 = EMITC_ARRAY_ELEMENT_ADDRESS(v911, 13);
  ;
  v914 = &v913;
  v915 = sizeof(iree_vm_ref_t);
  memset(v914, 0, v915);
  iree_vm_ref_assign(v127, v914);
  ;
  v917 = &v916;
  v918 = sizeof(iree_vm_ref_t);
  memset(v917, 0, v918);
  iree_vm_ref_assign(v12, v917);
  v919 = module_call_0rriCiD_v_2_import_shim(v1, v912, v914, v917, v22, v44, v29, v22);
  v920 = (bool) v919;
  v921 = vm_cmp_nz_i32(v920);
  v922 = (bool) v921;
  if (v922) {
  v1928 = v919;
  goto label147;
  } else {
  goto label66;
  }
  label66:
  v923 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v924 = EMITC_ARRAY_ELEMENT_ADDRESS(v923, 15);
  ;
  v926 = &v925;
  v927 = sizeof(iree_vm_ref_t);
  memset(v926, 0, v927);
  iree_vm_ref_assign(v127, v926);
  ;
  v929 = &v928;
  v930 = sizeof(iree_vm_ref_t);
  memset(v929, 0, v930);
  iree_vm_ref_assign(v11, v929);
  v931 = module_call_0rriiii_v_import_shim(v1, v924, v926, v929, v19, v44, v44, v21);
  v932 = (bool) v931;
  v933 = vm_cmp_nz_i32(v932);
  v934 = (bool) v933;
  if (v934) {
  v1928 = v931;
  goto label147;
  } else {
  goto label67;
  }
  label67:
  v935 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v936 = EMITC_ARRAY_ELEMENT_ADDRESS(v935, 11);
  ;
  v938 = &v937;
  v939 = sizeof(iree_vm_ref_t);
  memset(v938, 0, v939);
  iree_vm_ref_assign(v127, v938);
  ;
  v941 = &v940;
  v942 = sizeof(iree_vm_ref_t);
  memset(v941, 0, v942);
  iree_vm_ref_assign(v8, v941);
  v943 = module_call_0rrIIii_v_import_shim(v1, v936, v938, v941, v68, v66, v22, v21);
  v944 = (bool) v943;
  v945 = vm_cmp_nz_i32(v944);
  v946 = (bool) v945;
  if (v946) {
  v1928 = v943;
  goto label147;
  } else {
  goto label68;
  }
  label68:
  v947 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v948 = EMITC_ARRAY_ELEMENT_ADDRESS(v947, 10);
  ;
  v950 = &v949;
  v951 = sizeof(iree_vm_ref_t);
  memset(v950, 0, v951);
  iree_vm_ref_assign(v127, v950);
  v952 = module_call_0riii_v_import_shim(v1, v948, v950, v60, v61, v22);
  v953 = (bool) v952;
  v954 = vm_cmp_nz_i32(v953);
  v955 = (bool) v954;
  if (v955) {
  v1928 = v952;
  goto label147;
  } else {
  goto label69;
  }
  label69:
  v956 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v957 = EMITC_ARRAY_ELEMENT_ADDRESS(v956, 13);
  ;
  v959 = &v958;
  v960 = sizeof(iree_vm_ref_t);
  memset(v959, 0, v960);
  iree_vm_ref_assign(v127, v959);
  ;
  v962 = &v961;
  v963 = sizeof(iree_vm_ref_t);
  memset(v962, 0, v963);
  iree_vm_ref_assign(v12, v962);
  v964 = module_call_0rriCiD_v_2_import_shim(v1, v957, v959, v962, v22, v44, v30, v31);
  v965 = (bool) v964;
  v966 = vm_cmp_nz_i32(v965);
  v967 = (bool) v966;
  if (v967) {
  v1928 = v964;
  goto label147;
  } else {
  goto label70;
  }
  label70:
  v968 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v969 = EMITC_ARRAY_ELEMENT_ADDRESS(v968, 15);
  ;
  v971 = &v970;
  v972 = sizeof(iree_vm_ref_t);
  memset(v971, 0, v972);
  iree_vm_ref_assign(v127, v971);
  ;
  v974 = &v973;
  v975 = sizeof(iree_vm_ref_t);
  memset(v974, 0, v975);
  iree_vm_ref_assign(v11, v974);
  v976 = module_call_0rriiii_v_import_shim(v1, v969, v971, v974, v69, v21, v43, v21);
  v977 = (bool) v976;
  v978 = vm_cmp_nz_i32(v977);
  v979 = (bool) v978;
  if (v979) {
  v1928 = v976;
  goto label147;
  } else {
  goto label71;
  }
  label71:
  v980 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v981 = EMITC_ARRAY_ELEMENT_ADDRESS(v980, 13);
  ;
  v983 = &v982;
  v984 = sizeof(iree_vm_ref_t);
  memset(v983, 0, v984);
  iree_vm_ref_assign(v127, v983);
  ;
  v986 = &v985;
  v987 = sizeof(iree_vm_ref_t);
  memset(v986, 0, v987);
  iree_vm_ref_assign(v12, v986);
  v988 = module_call_0rriCiD_v_2_import_shim(v1, v981, v983, v986, v22, v44, v22, v32);
  v989 = (bool) v988;
  v990 = vm_cmp_nz_i32(v989);
  v991 = (bool) v990;
  if (v991) {
  v1928 = v988;
  goto label147;
  } else {
  goto label72;
  }
  label72:
  v992 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v993 = EMITC_ARRAY_ELEMENT_ADDRESS(v992, 15);
  ;
  v995 = &v994;
  v996 = sizeof(iree_vm_ref_t);
  memset(v995, 0, v996);
  iree_vm_ref_assign(v127, v995);
  ;
  v998 = &v997;
  v999 = sizeof(iree_vm_ref_t);
  memset(v998, 0, v999);
  iree_vm_ref_assign(v11, v998);
  v1000 = module_call_0rriiii_v_import_shim(v1, v993, v995, v998, v67, v44, v44, v21);
  v1001 = (bool) v1000;
  v1002 = vm_cmp_nz_i32(v1001);
  v1003 = (bool) v1002;
  if (v1003) {
  v1928 = v1000;
  goto label147;
  } else {
  goto label73;
  }
  label73:
  v1004 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1005 = EMITC_ARRAY_ELEMENT_ADDRESS(v1004, 10);
  ;
  v1007 = &v1006;
  v1008 = sizeof(iree_vm_ref_t);
  memset(v1007, 0, v1008);
  iree_vm_ref_assign(v127, v1007);
  v1009 = module_call_0riii_v_import_shim(v1, v1005, v1007, v60, v61, v22);
  v1010 = (bool) v1009;
  v1011 = vm_cmp_nz_i32(v1010);
  v1012 = (bool) v1011;
  if (v1012) {
  v1928 = v1009;
  goto label147;
  } else {
  goto label74;
  }
  label74:
  v1013 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1014 = EMITC_ARRAY_ELEMENT_ADDRESS(v1013, 13);
  ;
  v1016 = &v1015;
  v1017 = sizeof(iree_vm_ref_t);
  memset(v1016, 0, v1017);
  iree_vm_ref_assign(v127, v1016);
  ;
  v1019 = &v1018;
  v1020 = sizeof(iree_vm_ref_t);
  memset(v1019, 0, v1020);
  iree_vm_ref_assign(v13, v1019);
  v1021 = module_call_0rriCiD_v_2_import_shim(v1, v1014, v1016, v1019, v22, v44, v31, v22);
  v1022 = (bool) v1021;
  v1023 = vm_cmp_nz_i32(v1022);
  v1024 = (bool) v1023;
  if (v1024) {
  v1928 = v1021;
  goto label147;
  } else {
  goto label75;
  }
  label75:
  v1025 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1026 = EMITC_ARRAY_ELEMENT_ADDRESS(v1025, 14);
  ;
  v1028 = &v1027;
  v1029 = sizeof(iree_vm_ref_t);
  memset(v1028, 0, v1029);
  iree_vm_ref_assign(v127, v1028);
  ;
  v1031 = &v1030;
  v1032 = sizeof(iree_vm_ref_t);
  memset(v1031, 0, v1032);
  iree_vm_ref_assign(v13, v1031);
  ;
  v1034 = &v1033;
  v1035 = sizeof(iree_vm_ref_t);
  memset(v1034, 0, v1035);
  iree_vm_ref_assign(v8, v1034);
  ;
  v1037 = &v1036;
  v1038 = sizeof(iree_vm_ref_t);
  memset(v1037, 0, v1038);
  iree_vm_ref_assign(v9, v1037);
  ;
  v1040 = &v1039;
  v1041 = sizeof(iree_vm_ref_t);
  memset(v1040, 0, v1041);
  iree_vm_ref_assign(v8, v1040);
  v1042 = module_call_0rriCiirIID_v_3_import_shim(v1, v1026, v1028, v1031, v22, v43, v22, v22, v1034, v42, v57, v21, v22, v1037, v42, v63, v44, v22, v1040, v42, v57);
  v1043 = (bool) v1042;
  v1044 = vm_cmp_nz_i32(v1043);
  v1045 = (bool) v1044;
  if (v1045) {
  v1928 = v1042;
  goto label147;
  } else {
  goto label76;
  }
  label76:
  v1046 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1047 = EMITC_ARRAY_ELEMENT_ADDRESS(v1046, 15);
  ;
  v1049 = &v1048;
  v1050 = sizeof(iree_vm_ref_t);
  memset(v1049, 0, v1050);
  iree_vm_ref_assign(v127, v1049);
  ;
  v1052 = &v1051;
  v1053 = sizeof(iree_vm_ref_t);
  memset(v1052, 0, v1053);
  iree_vm_ref_assign(v11, v1052);
  v1054 = module_call_0rriiii_v_import_shim(v1, v1047, v1049, v1052, v70, v44, v16, v44);
  v1055 = (bool) v1054;
  v1056 = vm_cmp_nz_i32(v1055);
  v1057 = (bool) v1056;
  if (v1057) {
  v1928 = v1054;
  goto label147;
  } else {
  goto label77;
  }
  label77:
  v1058 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1059 = EMITC_ARRAY_ELEMENT_ADDRESS(v1058, 13);
  ;
  v1061 = &v1060;
  v1062 = sizeof(iree_vm_ref_t);
  memset(v1061, 0, v1062);
  iree_vm_ref_assign(v127, v1061);
  ;
  v1064 = &v1063;
  v1065 = sizeof(iree_vm_ref_t);
  memset(v1064, 0, v1065);
  iree_vm_ref_assign(v12, v1064);
  v1066 = module_call_0rriCiD_v_2_import_shim(v1, v1059, v1061, v1064, v22, v44, v32, v33);
  v1067 = (bool) v1066;
  v1068 = vm_cmp_nz_i32(v1067);
  v1069 = (bool) v1068;
  if (v1069) {
  v1928 = v1066;
  goto label147;
  } else {
  goto label78;
  }
  label78:
  v1070 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1071 = EMITC_ARRAY_ELEMENT_ADDRESS(v1070, 14);
  ;
  v1073 = &v1072;
  v1074 = sizeof(iree_vm_ref_t);
  memset(v1073, 0, v1074);
  iree_vm_ref_assign(v127, v1073);
  ;
  v1076 = &v1075;
  v1077 = sizeof(iree_vm_ref_t);
  memset(v1076, 0, v1077);
  iree_vm_ref_assign(v12, v1076);
  ;
  v1079 = &v1078;
  v1080 = sizeof(iree_vm_ref_t);
  memset(v1079, 0, v1080);
  iree_vm_ref_assign(v8, v1079);
  ;
  v1082 = &v1081;
  v1083 = sizeof(iree_vm_ref_t);
  memset(v1082, 0, v1083);
  iree_vm_ref_assign(v8, v1082);
  v1084 = module_call_0rriCiirIID_v_2_import_shim(v1, v1071, v1073, v1076, v22, v44, v22, v22, v1079, v42, v57, v21, v22, v1082, v42, v57);
  v1085 = (bool) v1084;
  v1086 = vm_cmp_nz_i32(v1085);
  v1087 = (bool) v1086;
  if (v1087) {
  v1928 = v1084;
  goto label147;
  } else {
  goto label79;
  }
  label79:
  v1088 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1089 = EMITC_ARRAY_ELEMENT_ADDRESS(v1088, 15);
  ;
  v1091 = &v1090;
  v1092 = sizeof(iree_vm_ref_t);
  memset(v1091, 0, v1092);
  iree_vm_ref_assign(v127, v1091);
  ;
  v1094 = &v1093;
  v1095 = sizeof(iree_vm_ref_t);
  memset(v1094, 0, v1095);
  iree_vm_ref_assign(v11, v1094);
  v1096 = module_call_0rriiii_v_import_shim(v1, v1089, v1091, v1094, v69, v21, v43, v21);
  v1097 = (bool) v1096;
  v1098 = vm_cmp_nz_i32(v1097);
  v1099 = (bool) v1098;
  if (v1099) {
  v1928 = v1096;
  goto label147;
  } else {
  goto label80;
  }
  label80:
  v1100 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1101 = EMITC_ARRAY_ELEMENT_ADDRESS(v1100, 10);
  ;
  v1103 = &v1102;
  v1104 = sizeof(iree_vm_ref_t);
  memset(v1103, 0, v1104);
  iree_vm_ref_assign(v127, v1103);
  v1105 = module_call_0riii_v_import_shim(v1, v1101, v1103, v60, v61, v22);
  v1106 = (bool) v1105;
  v1107 = vm_cmp_nz_i32(v1106);
  v1108 = (bool) v1107;
  if (v1108) {
  v1928 = v1105;
  goto label147;
  } else {
  goto label81;
  }
  label81:
  v1109 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1110 = EMITC_ARRAY_ELEMENT_ADDRESS(v1109, 13);
  ;
  v1112 = &v1111;
  v1113 = sizeof(iree_vm_ref_t);
  memset(v1112, 0, v1113);
  iree_vm_ref_assign(v127, v1112);
  ;
  v1115 = &v1114;
  v1116 = sizeof(iree_vm_ref_t);
  memset(v1115, 0, v1116);
  iree_vm_ref_assign(v12, v1115);
  v1117 = module_call_0rriCiD_v_2_import_shim(v1, v1110, v1112, v1115, v22, v44, v22, v34);
  v1118 = (bool) v1117;
  v1119 = vm_cmp_nz_i32(v1118);
  v1120 = (bool) v1119;
  if (v1120) {
  v1928 = v1117;
  goto label147;
  } else {
  goto label82;
  }
  label82:
  v1121 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1122 = EMITC_ARRAY_ELEMENT_ADDRESS(v1121, 15);
  ;
  v1124 = &v1123;
  v1125 = sizeof(iree_vm_ref_t);
  memset(v1124, 0, v1125);
  iree_vm_ref_assign(v127, v1124);
  ;
  v1127 = &v1126;
  v1128 = sizeof(iree_vm_ref_t);
  memset(v1127, 0, v1128);
  iree_vm_ref_assign(v11, v1127);
  v1129 = module_call_0rriiii_v_import_shim(v1, v1122, v1124, v1127, v71, v44, v44, v44);
  v1130 = (bool) v1129;
  v1131 = vm_cmp_nz_i32(v1130);
  v1132 = (bool) v1131;
  if (v1132) {
  v1928 = v1129;
  goto label147;
  } else {
  goto label83;
  }
  label83:
  v1133 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1134 = EMITC_ARRAY_ELEMENT_ADDRESS(v1133, 13);
  ;
  v1136 = &v1135;
  v1137 = sizeof(iree_vm_ref_t);
  memset(v1136, 0, v1137);
  iree_vm_ref_assign(v127, v1136);
  ;
  v1139 = &v1138;
  v1140 = sizeof(iree_vm_ref_t);
  memset(v1139, 0, v1140);
  iree_vm_ref_assign(v13, v1139);
  v1141 = module_call_0rriCiD_v_2_import_shim(v1, v1134, v1136, v1139, v22, v44, v33, v35);
  v1142 = (bool) v1141;
  v1143 = vm_cmp_nz_i32(v1142);
  v1144 = (bool) v1143;
  if (v1144) {
  v1928 = v1141;
  goto label147;
  } else {
  goto label84;
  }
  label84:
  v1145 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1146 = EMITC_ARRAY_ELEMENT_ADDRESS(v1145, 14);
  ;
  v1148 = &v1147;
  v1149 = sizeof(iree_vm_ref_t);
  memset(v1148, 0, v1149);
  iree_vm_ref_assign(v127, v1148);
  ;
  v1151 = &v1150;
  v1152 = sizeof(iree_vm_ref_t);
  memset(v1151, 0, v1152);
  iree_vm_ref_assign(v13, v1151);
  ;
  v1154 = &v1153;
  v1155 = sizeof(iree_vm_ref_t);
  memset(v1154, 0, v1155);
  iree_vm_ref_assign(v8, v1154);
  ;
  v1157 = &v1156;
  v1158 = sizeof(iree_vm_ref_t);
  memset(v1157, 0, v1158);
  iree_vm_ref_assign(v9, v1157);
  ;
  v1160 = &v1159;
  v1161 = sizeof(iree_vm_ref_t);
  memset(v1160, 0, v1161);
  iree_vm_ref_assign(v8, v1160);
  v1162 = module_call_0rriCiirIID_v_3_import_shim(v1, v1146, v1148, v1151, v22, v43, v22, v22, v1154, v42, v57, v21, v22, v1157, v42, v63, v44, v22, v1160, v42, v57);
  v1163 = (bool) v1162;
  v1164 = vm_cmp_nz_i32(v1163);
  v1165 = (bool) v1164;
  if (v1165) {
  v1928 = v1162;
  goto label147;
  } else {
  goto label85;
  }
  label85:
  v1166 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1167 = EMITC_ARRAY_ELEMENT_ADDRESS(v1166, 15);
  ;
  v1169 = &v1168;
  v1170 = sizeof(iree_vm_ref_t);
  memset(v1169, 0, v1170);
  iree_vm_ref_assign(v127, v1169);
  ;
  v1172 = &v1171;
  v1173 = sizeof(iree_vm_ref_t);
  memset(v1172, 0, v1173);
  iree_vm_ref_assign(v11, v1172);
  v1174 = module_call_0rriiii_v_import_shim(v1, v1167, v1169, v1172, v70, v44, v16, v44);
  v1175 = (bool) v1174;
  v1176 = vm_cmp_nz_i32(v1175);
  v1177 = (bool) v1176;
  if (v1177) {
  v1928 = v1174;
  goto label147;
  } else {
  goto label86;
  }
  label86:
  v1178 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1179 = EMITC_ARRAY_ELEMENT_ADDRESS(v1178, 10);
  ;
  v1181 = &v1180;
  v1182 = sizeof(iree_vm_ref_t);
  memset(v1181, 0, v1182);
  iree_vm_ref_assign(v127, v1181);
  v1183 = module_call_0riii_v_import_shim(v1, v1179, v1181, v60, v61, v22);
  v1184 = (bool) v1183;
  v1185 = vm_cmp_nz_i32(v1184);
  v1186 = (bool) v1185;
  if (v1186) {
  v1928 = v1183;
  goto label147;
  } else {
  goto label87;
  }
  label87:
  v1187 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1188 = EMITC_ARRAY_ELEMENT_ADDRESS(v1187, 13);
  ;
  v1190 = &v1189;
  v1191 = sizeof(iree_vm_ref_t);
  memset(v1190, 0, v1191);
  iree_vm_ref_assign(v127, v1190);
  ;
  v1193 = &v1192;
  v1194 = sizeof(iree_vm_ref_t);
  memset(v1193, 0, v1194);
  iree_vm_ref_assign(v12, v1193);
  v1195 = module_call_0rriCiD_v_2_import_shim(v1, v1188, v1190, v1193, v22, v44, v34, v36);
  v1196 = (bool) v1195;
  v1197 = vm_cmp_nz_i32(v1196);
  v1198 = (bool) v1197;
  if (v1198) {
  v1928 = v1195;
  goto label147;
  } else {
  goto label88;
  }
  label88:
  v1199 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1200 = EMITC_ARRAY_ELEMENT_ADDRESS(v1199, 14);
  ;
  v1202 = &v1201;
  v1203 = sizeof(iree_vm_ref_t);
  memset(v1202, 0, v1203);
  iree_vm_ref_assign(v127, v1202);
  ;
  v1205 = &v1204;
  v1206 = sizeof(iree_vm_ref_t);
  memset(v1205, 0, v1206);
  iree_vm_ref_assign(v12, v1205);
  ;
  v1208 = &v1207;
  v1209 = sizeof(iree_vm_ref_t);
  memset(v1208, 0, v1209);
  iree_vm_ref_assign(v8, v1208);
  ;
  v1211 = &v1210;
  v1212 = sizeof(iree_vm_ref_t);
  memset(v1211, 0, v1212);
  iree_vm_ref_assign(v118, v1211);
  v1213 = module_call_0rriCiirIID_v_2_import_shim(v1, v1200, v1202, v1205, v22, v44, v22, v22, v1208, v42, v57, v21, v22, v1211, v42, v55);
  v1214 = (bool) v1213;
  v1215 = vm_cmp_nz_i32(v1214);
  v1216 = (bool) v1215;
  if (v1216) {
  v1928 = v1213;
  goto label147;
  } else {
  goto label89;
  }
  label89:
  v1217 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1218 = EMITC_ARRAY_ELEMENT_ADDRESS(v1217, 15);
  ;
  v1220 = &v1219;
  v1221 = sizeof(iree_vm_ref_t);
  memset(v1220, 0, v1221);
  iree_vm_ref_assign(v127, v1220);
  ;
  v1223 = &v1222;
  v1224 = sizeof(iree_vm_ref_t);
  memset(v1223, 0, v1224);
  iree_vm_ref_assign(v11, v1223);
  v1225 = module_call_0rriiii_v_import_shim(v1, v1218, v1220, v1223, v18, v21, v21, v21);
  v1226 = (bool) v1225;
  v1227 = vm_cmp_nz_i32(v1226);
  v1228 = (bool) v1227;
  if (v1228) {
  v1928 = v1225;
  goto label147;
  } else {
  goto label90;
  }
  label90:
  v1229 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1230 = EMITC_ARRAY_ELEMENT_ADDRESS(v1229, 13);
  ;
  v1232 = &v1231;
  v1233 = sizeof(iree_vm_ref_t);
  memset(v1232, 0, v1233);
  iree_vm_ref_assign(v127, v1232);
  ;
  v1235 = &v1234;
  v1236 = sizeof(iree_vm_ref_t);
  memset(v1235, 0, v1236);
  iree_vm_ref_assign(v12, v1235);
  v1237 = module_call_0rriCiD_v_2_import_shim(v1, v1230, v1232, v1235, v22, v44, v35, v22);
  v1238 = (bool) v1237;
  v1239 = vm_cmp_nz_i32(v1238);
  v1240 = (bool) v1239;
  if (v1240) {
  v1928 = v1237;
  goto label147;
  } else {
  goto label91;
  }
  label91:
  v1241 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1242 = EMITC_ARRAY_ELEMENT_ADDRESS(v1241, 14);
  ;
  v1244 = &v1243;
  v1245 = sizeof(iree_vm_ref_t);
  memset(v1244, 0, v1245);
  iree_vm_ref_assign(v127, v1244);
  ;
  v1247 = &v1246;
  v1248 = sizeof(iree_vm_ref_t);
  memset(v1247, 0, v1248);
  iree_vm_ref_assign(v12, v1247);
  ;
  v1250 = &v1249;
  v1251 = sizeof(iree_vm_ref_t);
  memset(v1250, 0, v1251);
  iree_vm_ref_assign(v8, v1250);
  ;
  v1253 = &v1252;
  v1254 = sizeof(iree_vm_ref_t);
  memset(v1253, 0, v1254);
  iree_vm_ref_assign(v8, v1253);
  v1255 = module_call_0rriCiirIID_v_2_import_shim(v1, v1242, v1244, v1247, v22, v44, v22, v22, v1250, v42, v57, v21, v22, v1253, v42, v57);
  v1256 = (bool) v1255;
  v1257 = vm_cmp_nz_i32(v1256);
  v1258 = (bool) v1257;
  if (v1258) {
  v1928 = v1255;
  goto label147;
  } else {
  goto label92;
  }
  label92:
  v1259 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1260 = EMITC_ARRAY_ELEMENT_ADDRESS(v1259, 15);
  ;
  v1262 = &v1261;
  v1263 = sizeof(iree_vm_ref_t);
  memset(v1262, 0, v1263);
  iree_vm_ref_assign(v127, v1262);
  ;
  v1265 = &v1264;
  v1266 = sizeof(iree_vm_ref_t);
  memset(v1265, 0, v1266);
  iree_vm_ref_assign(v11, v1265);
  v1267 = module_call_0rriiii_v_import_shim(v1, v1260, v1262, v1265, v71, v44, v44, v44);
  v1268 = (bool) v1267;
  v1269 = vm_cmp_nz_i32(v1268);
  v1270 = (bool) v1269;
  if (v1270) {
  v1928 = v1267;
  goto label147;
  } else {
  goto label93;
  }
  label93:
  v1271 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1272 = EMITC_ARRAY_ELEMENT_ADDRESS(v1271, 10);
  ;
  v1274 = &v1273;
  v1275 = sizeof(iree_vm_ref_t);
  memset(v1274, 0, v1275);
  iree_vm_ref_assign(v127, v1274);
  v1276 = module_call_0riii_v_import_shim(v1, v1272, v1274, v60, v61, v22);
  v1277 = (bool) v1276;
  v1278 = vm_cmp_nz_i32(v1277);
  v1279 = (bool) v1278;
  if (v1279) {
  v1928 = v1276;
  goto label147;
  } else {
  goto label94;
  }
  label94:
  v1280 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1281 = EMITC_ARRAY_ELEMENT_ADDRESS(v1280, 13);
  ;
  v1283 = &v1282;
  v1284 = sizeof(iree_vm_ref_t);
  memset(v1283, 0, v1284);
  iree_vm_ref_assign(v127, v1283);
  ;
  v1286 = &v1285;
  v1287 = sizeof(iree_vm_ref_t);
  memset(v1286, 0, v1287);
  iree_vm_ref_assign(v14, v1286);
  v1288 = module_call_0rriCiD_v_1_import_shim(v1, v1281, v1283, v1286, v22, v21, v22);
  v1289 = (bool) v1288;
  v1290 = vm_cmp_nz_i32(v1289);
  v1291 = (bool) v1290;
  if (v1291) {
  v1928 = v1288;
  goto label147;
  } else {
  goto label95;
  }
  label95:
  v1292 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1293 = EMITC_ARRAY_ELEMENT_ADDRESS(v1292, 14);
  ;
  v1295 = &v1294;
  v1296 = sizeof(iree_vm_ref_t);
  memset(v1295, 0, v1296);
  iree_vm_ref_assign(v127, v1295);
  ;
  v1298 = &v1297;
  v1299 = sizeof(iree_vm_ref_t);
  memset(v1298, 0, v1299);
  iree_vm_ref_assign(v14, v1298);
  ;
  v1301 = &v1300;
  v1302 = sizeof(iree_vm_ref_t);
  memset(v1301, 0, v1302);
  iree_vm_ref_assign(v5, v1301);
  ;
  v1304 = &v1303;
  v1305 = sizeof(iree_vm_ref_t);
  memset(v1304, 0, v1305);
  iree_vm_ref_assign(v9, v1304);
  ;
  v1307 = &v1306;
  v1308 = sizeof(iree_vm_ref_t);
  memset(v1307, 0, v1308);
  iree_vm_ref_assign(v118, v1307);
  v1309 = module_call_0rriCiirIID_v_3_import_shim(v1, v1293, v1295, v1298, v22, v43, v22, v22, v1301, v42, v52, v21, v22, v1304, v42, v63, v44, v22, v1307, v42, v55);
  v1310 = (bool) v1309;
  v1311 = vm_cmp_nz_i32(v1310);
  v1312 = (bool) v1311;
  if (v1312) {
  v1928 = v1309;
  goto label147;
  } else {
  goto label96;
  }
  label96:
  v1313 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1314 = EMITC_ARRAY_ELEMENT_ADDRESS(v1313, 15);
  ;
  v1316 = &v1315;
  v1317 = sizeof(iree_vm_ref_t);
  memset(v1316, 0, v1317);
  iree_vm_ref_assign(v127, v1316);
  ;
  v1319 = &v1318;
  v1320 = sizeof(iree_vm_ref_t);
  memset(v1319, 0, v1320);
  iree_vm_ref_assign(v11, v1319);
  v1321 = module_call_0rriiii_v_import_shim(v1, v1314, v1316, v1319, v22, v21, v44, v21);
  v1322 = (bool) v1321;
  v1323 = vm_cmp_nz_i32(v1322);
  v1324 = (bool) v1323;
  if (v1324) {
  v1928 = v1321;
  goto label147;
  } else {
  goto label97;
  }
  label97:
  v1325 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1326 = EMITC_ARRAY_ELEMENT_ADDRESS(v1325, 13);
  ;
  v1328 = &v1327;
  v1329 = sizeof(iree_vm_ref_t);
  memset(v1328, 0, v1329);
  iree_vm_ref_assign(v127, v1328);
  ;
  v1331 = &v1330;
  v1332 = sizeof(iree_vm_ref_t);
  memset(v1331, 0, v1332);
  iree_vm_ref_assign(v12, v1331);
  v1333 = module_call_0rriCiD_v_2_import_shim(v1, v1326, v1328, v1331, v22, v44, v36, v37);
  v1334 = (bool) v1333;
  v1335 = vm_cmp_nz_i32(v1334);
  v1336 = (bool) v1335;
  if (v1336) {
  v1928 = v1333;
  goto label147;
  } else {
  goto label98;
  }
  label98:
  v1337 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1338 = EMITC_ARRAY_ELEMENT_ADDRESS(v1337, 14);
  ;
  v1340 = &v1339;
  v1341 = sizeof(iree_vm_ref_t);
  memset(v1340, 0, v1341);
  iree_vm_ref_assign(v127, v1340);
  ;
  v1343 = &v1342;
  v1344 = sizeof(iree_vm_ref_t);
  memset(v1343, 0, v1344);
  iree_vm_ref_assign(v12, v1343);
  ;
  v1346 = &v1345;
  v1347 = sizeof(iree_vm_ref_t);
  memset(v1346, 0, v1347);
  iree_vm_ref_assign(v118, v1346);
  ;
  v1349 = &v1348;
  v1350 = sizeof(iree_vm_ref_t);
  memset(v1349, 0, v1350);
  iree_vm_ref_assign(v118, v1349);
  v1351 = module_call_0rriCiirIID_v_2_import_shim(v1, v1338, v1340, v1343, v22, v44, v22, v22, v1346, v42, v55, v21, v22, v1349, v42, v55);
  v1352 = (bool) v1351;
  v1353 = vm_cmp_nz_i32(v1352);
  v1354 = (bool) v1353;
  if (v1354) {
  v1928 = v1351;
  goto label147;
  } else {
  goto label99;
  }
  label99:
  v1355 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1356 = EMITC_ARRAY_ELEMENT_ADDRESS(v1355, 15);
  ;
  v1358 = &v1357;
  v1359 = sizeof(iree_vm_ref_t);
  memset(v1358, 0, v1359);
  iree_vm_ref_assign(v127, v1358);
  ;
  v1361 = &v1360;
  v1362 = sizeof(iree_vm_ref_t);
  memset(v1361, 0, v1362);
  iree_vm_ref_assign(v11, v1361);
  v1363 = module_call_0rriiii_v_import_shim(v1, v1356, v1358, v1361, v72, v21, v21, v21);
  v1364 = (bool) v1363;
  v1365 = vm_cmp_nz_i32(v1364);
  v1366 = (bool) v1365;
  if (v1366) {
  v1928 = v1363;
  goto label147;
  } else {
  goto label100;
  }
  label100:
  v1367 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1368 = EMITC_ARRAY_ELEMENT_ADDRESS(v1367, 13);
  ;
  v1370 = &v1369;
  v1371 = sizeof(iree_vm_ref_t);
  memset(v1370, 0, v1371);
  iree_vm_ref_assign(v127, v1370);
  ;
  v1373 = &v1372;
  v1374 = sizeof(iree_vm_ref_t);
  memset(v1373, 0, v1374);
  iree_vm_ref_assign(v12, v1373);
  v1375 = module_call_0rriCiD_v_2_import_shim(v1, v1368, v1370, v1373, v22, v44, v22, v38);
  v1376 = (bool) v1375;
  v1377 = vm_cmp_nz_i32(v1376);
  v1378 = (bool) v1377;
  if (v1378) {
  v1928 = v1375;
  goto label147;
  } else {
  goto label101;
  }
  label101:
  v1379 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1380 = EMITC_ARRAY_ELEMENT_ADDRESS(v1379, 14);
  ;
  v1382 = &v1381;
  v1383 = sizeof(iree_vm_ref_t);
  memset(v1382, 0, v1383);
  iree_vm_ref_assign(v127, v1382);
  ;
  v1385 = &v1384;
  v1386 = sizeof(iree_vm_ref_t);
  memset(v1385, 0, v1386);
  iree_vm_ref_assign(v12, v1385);
  ;
  v1388 = &v1387;
  v1389 = sizeof(iree_vm_ref_t);
  memset(v1388, 0, v1389);
  iree_vm_ref_assign(v8, v1388);
  ;
  v1391 = &v1390;
  v1392 = sizeof(iree_vm_ref_t);
  memset(v1391, 0, v1392);
  iree_vm_ref_assign(v118, v1391);
  v1393 = module_call_0rriCiirIID_v_2_import_shim(v1, v1380, v1382, v1385, v22, v44, v22, v22, v1388, v42, v57, v21, v22, v1391, v42, v55);
  v1394 = (bool) v1393;
  v1395 = vm_cmp_nz_i32(v1394);
  v1396 = (bool) v1395;
  if (v1396) {
  v1928 = v1393;
  goto label147;
  } else {
  goto label102;
  }
  label102:
  v1397 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1398 = EMITC_ARRAY_ELEMENT_ADDRESS(v1397, 15);
  ;
  v1400 = &v1399;
  v1401 = sizeof(iree_vm_ref_t);
  memset(v1400, 0, v1401);
  iree_vm_ref_assign(v127, v1400);
  ;
  v1403 = &v1402;
  v1404 = sizeof(iree_vm_ref_t);
  memset(v1403, 0, v1404);
  iree_vm_ref_assign(v11, v1403);
  v1405 = module_call_0rriiii_v_import_shim(v1, v1398, v1400, v1403, v18, v21, v21, v21);
  v1406 = (bool) v1405;
  v1407 = vm_cmp_nz_i32(v1406);
  v1408 = (bool) v1407;
  if (v1408) {
  v1928 = v1405;
  goto label147;
  } else {
  goto label103;
  }
  label103:
  v1409 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1410 = EMITC_ARRAY_ELEMENT_ADDRESS(v1409, 10);
  ;
  v1412 = &v1411;
  v1413 = sizeof(iree_vm_ref_t);
  memset(v1412, 0, v1413);
  iree_vm_ref_assign(v127, v1412);
  v1414 = module_call_0riii_v_import_shim(v1, v1410, v1412, v60, v61, v22);
  v1415 = (bool) v1414;
  v1416 = vm_cmp_nz_i32(v1415);
  v1417 = (bool) v1416;
  if (v1417) {
  v1928 = v1414;
  goto label147;
  } else {
  goto label104;
  }
  label104:
  v1418 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1419 = EMITC_ARRAY_ELEMENT_ADDRESS(v1418, 13);
  ;
  v1421 = &v1420;
  v1422 = sizeof(iree_vm_ref_t);
  memset(v1421, 0, v1422);
  iree_vm_ref_assign(v127, v1421);
  ;
  v1424 = &v1423;
  v1425 = sizeof(iree_vm_ref_t);
  memset(v1424, 0, v1425);
  iree_vm_ref_assign(v14, v1424);
  v1426 = module_call_0rriCiD_v_1_import_shim(v1, v1419, v1421, v1424, v22, v21, v39);
  v1427 = (bool) v1426;
  v1428 = vm_cmp_nz_i32(v1427);
  v1429 = (bool) v1428;
  if (v1429) {
  v1928 = v1426;
  goto label147;
  } else {
  goto label105;
  }
  label105:
  v1430 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1431 = EMITC_ARRAY_ELEMENT_ADDRESS(v1430, 14);
  ;
  v1433 = &v1432;
  v1434 = sizeof(iree_vm_ref_t);
  memset(v1433, 0, v1434);
  iree_vm_ref_assign(v127, v1433);
  ;
  v1436 = &v1435;
  v1437 = sizeof(iree_vm_ref_t);
  memset(v1436, 0, v1437);
  iree_vm_ref_assign(v14, v1436);
  ;
  v1439 = &v1438;
  v1440 = sizeof(iree_vm_ref_t);
  memset(v1439, 0, v1440);
  iree_vm_ref_assign(v6, v1439);
  ;
  v1442 = &v1441;
  v1443 = sizeof(iree_vm_ref_t);
  memset(v1442, 0, v1443);
  iree_vm_ref_assign(v9, v1442);
  ;
  v1445 = &v1444;
  v1446 = sizeof(iree_vm_ref_t);
  memset(v1445, 0, v1446);
  iree_vm_ref_assign(v118, v1445);
  v1447 = module_call_0rriCiirIID_v_3_import_shim(v1, v1431, v1433, v1436, v22, v43, v22, v22, v1439, v42, v52, v21, v22, v1442, v42, v63, v44, v22, v1445, v42, v55);
  v1448 = (bool) v1447;
  v1449 = vm_cmp_nz_i32(v1448);
  v1450 = (bool) v1449;
  if (v1450) {
  v1928 = v1447;
  goto label147;
  } else {
  goto label106;
  }
  label106:
  v1451 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1452 = EMITC_ARRAY_ELEMENT_ADDRESS(v1451, 15);
  ;
  v1454 = &v1453;
  v1455 = sizeof(iree_vm_ref_t);
  memset(v1454, 0, v1455);
  iree_vm_ref_assign(v127, v1454);
  ;
  v1457 = &v1456;
  v1458 = sizeof(iree_vm_ref_t);
  memset(v1457, 0, v1458);
  iree_vm_ref_assign(v11, v1457);
  v1459 = module_call_0rriiii_v_import_shim(v1, v1452, v1454, v1457, v22, v21, v44, v21);
  v1460 = (bool) v1459;
  v1461 = vm_cmp_nz_i32(v1460);
  v1462 = (bool) v1461;
  if (v1462) {
  v1928 = v1459;
  goto label147;
  } else {
  goto label107;
  }
  label107:
  v1463 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1464 = EMITC_ARRAY_ELEMENT_ADDRESS(v1463, 13);
  ;
  v1466 = &v1465;
  v1467 = sizeof(iree_vm_ref_t);
  memset(v1466, 0, v1467);
  iree_vm_ref_assign(v127, v1466);
  ;
  v1469 = &v1468;
  v1470 = sizeof(iree_vm_ref_t);
  memset(v1469, 0, v1470);
  iree_vm_ref_assign(v12, v1469);
  v1471 = module_call_0rriCiD_v_2_import_shim(v1, v1464, v1466, v1469, v22, v44, v22, v37);
  v1472 = (bool) v1471;
  v1473 = vm_cmp_nz_i32(v1472);
  v1474 = (bool) v1473;
  if (v1474) {
  v1928 = v1471;
  goto label147;
  } else {
  goto label108;
  }
  label108:
  v1475 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1476 = EMITC_ARRAY_ELEMENT_ADDRESS(v1475, 14);
  ;
  v1478 = &v1477;
  v1479 = sizeof(iree_vm_ref_t);
  memset(v1478, 0, v1479);
  iree_vm_ref_assign(v127, v1478);
  ;
  v1481 = &v1480;
  v1482 = sizeof(iree_vm_ref_t);
  memset(v1481, 0, v1482);
  iree_vm_ref_assign(v12, v1481);
  ;
  v1484 = &v1483;
  v1485 = sizeof(iree_vm_ref_t);
  memset(v1484, 0, v1485);
  iree_vm_ref_assign(v118, v1484);
  ;
  v1487 = &v1486;
  v1488 = sizeof(iree_vm_ref_t);
  memset(v1487, 0, v1488);
  iree_vm_ref_assign(v118, v1487);
  v1489 = module_call_0rriCiirIID_v_2_import_shim(v1, v1476, v1478, v1481, v22, v44, v22, v22, v1484, v42, v55, v21, v22, v1487, v42, v55);
  v1490 = (bool) v1489;
  v1491 = vm_cmp_nz_i32(v1490);
  v1492 = (bool) v1491;
  if (v1492) {
  v1928 = v1489;
  goto label147;
  } else {
  goto label109;
  }
  label109:
  v1493 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1494 = EMITC_ARRAY_ELEMENT_ADDRESS(v1493, 15);
  ;
  v1496 = &v1495;
  v1497 = sizeof(iree_vm_ref_t);
  memset(v1496, 0, v1497);
  iree_vm_ref_assign(v127, v1496);
  ;
  v1499 = &v1498;
  v1500 = sizeof(iree_vm_ref_t);
  memset(v1499, 0, v1500);
  iree_vm_ref_assign(v11, v1499);
  v1501 = module_call_0rriiii_v_import_shim(v1, v1494, v1496, v1499, v73, v21, v21, v21);
  v1502 = (bool) v1501;
  v1503 = vm_cmp_nz_i32(v1502);
  v1504 = (bool) v1503;
  if (v1504) {
  v1928 = v1501;
  goto label147;
  } else {
  goto label110;
  }
  label110:
  v1505 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1506 = EMITC_ARRAY_ELEMENT_ADDRESS(v1505, 13);
  ;
  v1508 = &v1507;
  v1509 = sizeof(iree_vm_ref_t);
  memset(v1508, 0, v1509);
  iree_vm_ref_assign(v127, v1508);
  ;
  v1511 = &v1510;
  v1512 = sizeof(iree_vm_ref_t);
  memset(v1511, 0, v1512);
  iree_vm_ref_assign(v12, v1511);
  v1513 = module_call_0rriCiD_v_2_import_shim(v1, v1506, v1508, v1511, v22, v44, v38, v40);
  v1514 = (bool) v1513;
  v1515 = vm_cmp_nz_i32(v1514);
  v1516 = (bool) v1515;
  if (v1516) {
  v1928 = v1513;
  goto label147;
  } else {
  goto label111;
  }
  label111:
  v1517 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1518 = EMITC_ARRAY_ELEMENT_ADDRESS(v1517, 15);
  ;
  v1520 = &v1519;
  v1521 = sizeof(iree_vm_ref_t);
  memset(v1520, 0, v1521);
  iree_vm_ref_assign(v127, v1520);
  ;
  v1523 = &v1522;
  v1524 = sizeof(iree_vm_ref_t);
  memset(v1523, 0, v1524);
  iree_vm_ref_assign(v11, v1523);
  v1525 = module_call_0rriiii_v_import_shim(v1, v1518, v1520, v1523, v72, v21, v21, v21);
  v1526 = (bool) v1525;
  v1527 = vm_cmp_nz_i32(v1526);
  v1528 = (bool) v1527;
  if (v1528) {
  v1928 = v1525;
  goto label147;
  } else {
  goto label112;
  }
  label112:
  v1529 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1530 = EMITC_ARRAY_ELEMENT_ADDRESS(v1529, 10);
  ;
  v1532 = &v1531;
  v1533 = sizeof(iree_vm_ref_t);
  memset(v1532, 0, v1533);
  iree_vm_ref_assign(v127, v1532);
  v1534 = module_call_0riii_v_import_shim(v1, v1530, v1532, v60, v61, v22);
  v1535 = (bool) v1534;
  v1536 = vm_cmp_nz_i32(v1535);
  v1537 = (bool) v1536;
  if (v1537) {
  v1928 = v1534;
  goto label147;
  } else {
  goto label113;
  }
  label113:
  v1538 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1539 = EMITC_ARRAY_ELEMENT_ADDRESS(v1538, 13);
  ;
  v1541 = &v1540;
  v1542 = sizeof(iree_vm_ref_t);
  memset(v1541, 0, v1542);
  iree_vm_ref_assign(v127, v1541);
  ;
  v1544 = &v1543;
  v1545 = sizeof(iree_vm_ref_t);
  memset(v1544, 0, v1545);
  iree_vm_ref_assign(v12, v1544);
  v1546 = module_call_0rriCiD_v_1_import_shim(v1, v1539, v1541, v1544, v22, v21, v39);
  v1547 = (bool) v1546;
  v1548 = vm_cmp_nz_i32(v1547);
  v1549 = (bool) v1548;
  if (v1549) {
  v1928 = v1546;
  goto label147;
  } else {
  goto label114;
  }
  label114:
  v1550 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1551 = EMITC_ARRAY_ELEMENT_ADDRESS(v1550, 15);
  ;
  v1553 = &v1552;
  v1554 = sizeof(iree_vm_ref_t);
  memset(v1553, 0, v1554);
  iree_vm_ref_assign(v127, v1553);
  ;
  v1556 = &v1555;
  v1557 = sizeof(iree_vm_ref_t);
  memset(v1556, 0, v1557);
  iree_vm_ref_assign(v11, v1556);
  v1558 = module_call_0rriiii_v_import_shim(v1, v1551, v1553, v1556, v73, v21, v21, v21);
  v1559 = (bool) v1558;
  v1560 = vm_cmp_nz_i32(v1559);
  v1561 = (bool) v1560;
  if (v1561) {
  v1928 = v1558;
  goto label147;
  } else {
  goto label115;
  }
  label115:
  v1562 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1563 = EMITC_ARRAY_ELEMENT_ADDRESS(v1562, 14);
  ;
  v1565 = &v1564;
  v1566 = sizeof(iree_vm_ref_t);
  memset(v1565, 0, v1566);
  iree_vm_ref_assign(v127, v1565);
  ;
  v1568 = &v1567;
  v1569 = sizeof(iree_vm_ref_t);
  memset(v1568, 0, v1569);
  iree_vm_ref_assign(v15, v1568);
  ;
  v1571 = &v1570;
  v1572 = sizeof(iree_vm_ref_t);
  memset(v1571, 0, v1572);
  iree_vm_ref_assign(v118, v1571);
  ;
  v1574 = &v1573;
  v1575 = sizeof(iree_vm_ref_t);
  memset(v1574, 0, v1575);
  iree_vm_ref_assign(v8, v1574);
  v1576 = module_call_0rriCiirIID_v_2_import_shim(v1, v1563, v1565, v1568, v22, v44, v22, v22, v1571, v42, v55, v21, v22, v1574, v42, v57);
  v1577 = (bool) v1576;
  v1578 = vm_cmp_nz_i32(v1577);
  v1579 = (bool) v1578;
  if (v1579) {
  v1928 = v1576;
  goto label147;
  } else {
  goto label116;
  }
  label116:
  v1580 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1581 = EMITC_ARRAY_ELEMENT_ADDRESS(v1580, 15);
  ;
  v1583 = &v1582;
  v1584 = sizeof(iree_vm_ref_t);
  memset(v1583, 0, v1584);
  iree_vm_ref_assign(v127, v1583);
  ;
  v1586 = &v1585;
  v1587 = sizeof(iree_vm_ref_t);
  memset(v1586, 0, v1587);
  iree_vm_ref_assign(v11, v1586);
  v1588 = module_call_0rriiii_v_import_shim(v1, v1581, v1583, v1586, v61, v21, v21, v21);
  v1589 = (bool) v1588;
  v1590 = vm_cmp_nz_i32(v1589);
  v1591 = (bool) v1590;
  if (v1591) {
  v1928 = v1588;
  goto label147;
  } else {
  goto label117;
  }
  label117:
  v1592 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1593 = EMITC_ARRAY_ELEMENT_ADDRESS(v1592, 10);
  ;
  v1595 = &v1594;
  v1596 = sizeof(iree_vm_ref_t);
  memset(v1595, 0, v1596);
  iree_vm_ref_assign(v127, v1595);
  v1597 = module_call_0riii_v_import_shim(v1, v1593, v1595, v60, v61, v22);
  v1598 = (bool) v1597;
  v1599 = vm_cmp_nz_i32(v1598);
  v1600 = (bool) v1599;
  if (v1600) {
  v1928 = v1597;
  goto label147;
  } else {
  goto label118;
  }
  label118:
  v1601 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1602 = EMITC_ARRAY_ELEMENT_ADDRESS(v1601, 15);
  ;
  v1604 = &v1603;
  v1605 = sizeof(iree_vm_ref_t);
  memset(v1604, 0, v1605);
  iree_vm_ref_assign(v127, v1604);
  ;
  v1607 = &v1606;
  v1608 = sizeof(iree_vm_ref_t);
  memset(v1607, 0, v1608);
  iree_vm_ref_assign(v11, v1607);
  v1609 = module_call_0rriiii_v_import_shim(v1, v1602, v1604, v1607, v74, v21, v21, v21);
  v1610 = (bool) v1609;
  v1611 = vm_cmp_nz_i32(v1610);
  v1612 = (bool) v1611;
  if (v1612) {
  v1928 = v1609;
  goto label147;
  } else {
  goto label119;
  }
  label119:
  v1613 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1614 = EMITC_ARRAY_ELEMENT_ADDRESS(v1613, 10);
  ;
  v1616 = &v1615;
  v1617 = sizeof(iree_vm_ref_t);
  memset(v1616, 0, v1617);
  iree_vm_ref_assign(v127, v1616);
  v1618 = module_call_0riii_v_import_shim(v1, v1614, v1616, v60, v61, v22);
  v1619 = (bool) v1618;
  v1620 = vm_cmp_nz_i32(v1619);
  v1621 = (bool) v1620;
  if (v1621) {
  v1928 = v1618;
  goto label147;
  } else {
  goto label120;
  }
  label120:
  v1622 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1623 = EMITC_ARRAY_ELEMENT_ADDRESS(v1622, 14);
  ;
  v1625 = &v1624;
  v1626 = sizeof(iree_vm_ref_t);
  memset(v1625, 0, v1626);
  iree_vm_ref_assign(v127, v1625);
  ;
  v1628 = &v1627;
  v1629 = sizeof(iree_vm_ref_t);
  memset(v1628, 0, v1629);
  iree_vm_ref_assign(v15, v1628);
  ;
  v1631 = &v1630;
  v1632 = sizeof(iree_vm_ref_t);
  memset(v1631, 0, v1632);
  iree_vm_ref_assign(v8, v1631);
  ;
  v1634 = &v1633;
  v1635 = sizeof(iree_vm_ref_t);
  memset(v1634, 0, v1635);
  iree_vm_ref_assign(v8, v1634);
  v1636 = module_call_0rriCiirIID_v_2_import_shim(v1, v1623, v1625, v1628, v22, v44, v22, v22, v1631, v42, v57, v21, v22, v1634, v42, v57);
  v1637 = (bool) v1636;
  v1638 = vm_cmp_nz_i32(v1637);
  v1639 = (bool) v1638;
  if (v1639) {
  v1928 = v1636;
  goto label147;
  } else {
  goto label121;
  }
  label121:
  v1640 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1641 = EMITC_ARRAY_ELEMENT_ADDRESS(v1640, 15);
  ;
  v1643 = &v1642;
  v1644 = sizeof(iree_vm_ref_t);
  memset(v1643, 0, v1644);
  iree_vm_ref_assign(v127, v1643);
  ;
  v1646 = &v1645;
  v1647 = sizeof(iree_vm_ref_t);
  memset(v1646, 0, v1647);
  iree_vm_ref_assign(v11, v1646);
  v1648 = module_call_0rriiii_v_import_shim(v1, v1641, v1643, v1646, v75, v44, v19, v44);
  v1649 = (bool) v1648;
  v1650 = vm_cmp_nz_i32(v1649);
  v1651 = (bool) v1650;
  if (v1651) {
  v1928 = v1648;
  goto label147;
  } else {
  goto label122;
  }
  label122:
  v1652 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1653 = EMITC_ARRAY_ELEMENT_ADDRESS(v1652, 10);
  ;
  v1655 = &v1654;
  v1656 = sizeof(iree_vm_ref_t);
  memset(v1655, 0, v1656);
  iree_vm_ref_assign(v127, v1655);
  v1657 = module_call_0riii_v_import_shim(v1, v1653, v1655, v60, v61, v22);
  v1658 = (bool) v1657;
  v1659 = vm_cmp_nz_i32(v1658);
  v1660 = (bool) v1659;
  if (v1660) {
  v1928 = v1657;
  goto label147;
  } else {
  goto label123;
  }
  label123:
  v1661 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1662 = EMITC_ARRAY_ELEMENT_ADDRESS(v1661, 14);
  ;
  v1664 = &v1663;
  v1665 = sizeof(iree_vm_ref_t);
  memset(v1664, 0, v1665);
  iree_vm_ref_assign(v127, v1664);
  ;
  v1667 = &v1666;
  v1668 = sizeof(iree_vm_ref_t);
  memset(v1667, 0, v1668);
  iree_vm_ref_assign(v15, v1667);
  ;
  v1670 = &v1669;
  v1671 = sizeof(iree_vm_ref_t);
  memset(v1670, 0, v1671);
  iree_vm_ref_assign(v8, v1670);
  ;
  v1673 = &v1672;
  v1674 = sizeof(iree_vm_ref_t);
  memset(v1673, 0, v1674);
  iree_vm_ref_assign(v118, v1673);
  v1675 = module_call_0rriCiirIID_v_2_import_shim(v1, v1662, v1664, v1667, v22, v44, v22, v22, v1670, v42, v57, v21, v22, v1673, v42, v55);
  v1676 = (bool) v1675;
  v1677 = vm_cmp_nz_i32(v1676);
  v1678 = (bool) v1677;
  if (v1678) {
  v1928 = v1675;
  goto label147;
  } else {
  goto label124;
  }
  label124:
  v1679 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1680 = EMITC_ARRAY_ELEMENT_ADDRESS(v1679, 15);
  ;
  v1682 = &v1681;
  v1683 = sizeof(iree_vm_ref_t);
  memset(v1682, 0, v1683);
  iree_vm_ref_assign(v127, v1682);
  ;
  v1685 = &v1684;
  v1686 = sizeof(iree_vm_ref_t);
  memset(v1685, 0, v1686);
  iree_vm_ref_assign(v11, v1685);
  v1687 = module_call_0rriiii_v_import_shim(v1, v1680, v1682, v1685, v17, v44, v21, v21);
  v1688 = (bool) v1687;
  v1689 = vm_cmp_nz_i32(v1688);
  v1690 = (bool) v1689;
  if (v1690) {
  v1928 = v1687;
  goto label147;
  } else {
  goto label125;
  }
  label125:
  v1691 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1692 = EMITC_ARRAY_ELEMENT_ADDRESS(v1691, 10);
  ;
  v1694 = &v1693;
  v1695 = sizeof(iree_vm_ref_t);
  memset(v1694, 0, v1695);
  iree_vm_ref_assign(v127, v1694);
  v1696 = module_call_0riii_v_import_shim(v1, v1692, v1694, v60, v61, v22);
  v1697 = (bool) v1696;
  v1698 = vm_cmp_nz_i32(v1697);
  v1699 = (bool) v1698;
  if (v1699) {
  v1928 = v1696;
  goto label147;
  } else {
  goto label126;
  }
  label126:
  v1700 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1701 = EMITC_ARRAY_ELEMENT_ADDRESS(v1700, 14);
  ;
  v1703 = &v1702;
  v1704 = sizeof(iree_vm_ref_t);
  memset(v1703, 0, v1704);
  iree_vm_ref_assign(v127, v1703);
  ;
  v1706 = &v1705;
  v1707 = sizeof(iree_vm_ref_t);
  memset(v1706, 0, v1707);
  iree_vm_ref_assign(v115, v1706);
  ;
  v1709 = &v1708;
  v1710 = sizeof(iree_vm_ref_t);
  memset(v1709, 0, v1710);
  iree_vm_ref_assign(v118, v1709);
  ;
  v1712 = &v1711;
  v1713 = sizeof(iree_vm_ref_t);
  memset(v1712, 0, v1713);
  iree_vm_ref_assign(v9, v1712);
  ;
  v1715 = &v1714;
  v1716 = sizeof(iree_vm_ref_t);
  memset(v1715, 0, v1716);
  iree_vm_ref_assign(v118, v1715);
  v1717 = module_call_0rriCiirIID_v_3_import_shim(v1, v1701, v1703, v1706, v22, v43, v22, v22, v1709, v42, v55, v21, v22, v1712, v42, v63, v44, v22, v1715, v42, v55);
  v1718 = (bool) v1717;
  v1719 = vm_cmp_nz_i32(v1718);
  v1720 = (bool) v1719;
  if (v1720) {
  v1928 = v1717;
  goto label147;
  } else {
  goto label127;
  }
  label127:
  v1721 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1722 = EMITC_ARRAY_ELEMENT_ADDRESS(v1721, 15);
  ;
  v1724 = &v1723;
  v1725 = sizeof(iree_vm_ref_t);
  memset(v1724, 0, v1725);
  iree_vm_ref_assign(v127, v1724);
  ;
  v1727 = &v1726;
  v1728 = sizeof(iree_vm_ref_t);
  memset(v1727, 0, v1728);
  iree_vm_ref_assign(v11, v1727);
  v1729 = module_call_0rriiii_v_import_shim(v1, v1722, v1724, v1727, v16, v21, v44, v21);
  v1730 = (bool) v1729;
  v1731 = vm_cmp_nz_i32(v1730);
  v1732 = (bool) v1731;
  if (v1732) {
  v1928 = v1729;
  goto label147;
  } else {
  goto label128;
  }
  label128:
  v1733 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1734 = EMITC_ARRAY_ELEMENT_ADDRESS(v1733, 10);
  ;
  v1736 = &v1735;
  v1737 = sizeof(iree_vm_ref_t);
  memset(v1736, 0, v1737);
  iree_vm_ref_assign(v127, v1736);
  v1738 = module_call_0riii_v_import_shim(v1, v1734, v1736, v60, v61, v22);
  v1739 = (bool) v1738;
  v1740 = vm_cmp_nz_i32(v1739);
  v1741 = (bool) v1740;
  if (v1741) {
  v1928 = v1738;
  goto label147;
  } else {
  goto label129;
  }
  label129:
  v1742 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1743 = EMITC_ARRAY_ELEMENT_ADDRESS(v1742, 9);
  ;
  v1745 = &v1744;
  v1746 = sizeof(iree_vm_ref_t);
  memset(v1745, 0, v1746);
  iree_vm_ref_assign(v127, v1745);
  v1747 = module_call_0r_v_import_shim(v1, v1743, v1745);
  v1748 = (bool) v1747;
  v1749 = vm_cmp_nz_i32(v1748);
  v1750 = (bool) v1749;
  if (v1750) {
  v1928 = v1747;
  goto label147;
  } else {
  goto label130;
  }
  label130:
  v1751 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1752 = EMITC_ARRAY_ELEMENT_ADDRESS(v1751, 23);
  ;
  v1754 = &v1753;
  v1755 = sizeof(iree_vm_ref_t);
  memset(v1754, 0, v1755);
  iree_vm_ref_assign(v121, v1754);
  v1756 = module_call_0ri_r_import_shim(v1, v1752, v1754, v22, v4);
  v1757 = (bool) v1756;
  v1758 = vm_cmp_nz_i32(v1757);
  v1759 = (bool) v1758;
  if (v1759) {
  v1928 = v1756;
  goto label147;
  } else {
  goto label131;
  }
  label131:
  v1760 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1761 = EMITC_ARRAY_ELEMENT_ADDRESS(v1760, 21);
  ;
  v1763 = &v1762;
  v1764 = sizeof(iree_vm_ref_t);
  memset(v1763, 0, v1764);
  iree_vm_ref_assign(v121, v1763);
  ;
  v1766 = &v1765;
  v1767 = sizeof(iree_vm_ref_t);
  memset(v1766, 0, v1767);
  iree_vm_ref_assign(v124, v1766);
  ;
  v1769 = &v1768;
  v1770 = sizeof(iree_vm_ref_t);
  memset(v1769, 0, v1770);
  iree_vm_ref_assign(v4, v1769);
  ;
  v1772 = &v1771;
  v1773 = sizeof(iree_vm_ref_t);
  memset(v1772, 0, v1773);
  iree_vm_ref_assign(v127, v1772);
  v1774 = module_call_0rIrrCrD_v_1_import_shim(v1, v1761, v1763, v41, v1766, v1769, v21, v1772);
  v1775 = (bool) v1774;
  v1776 = vm_cmp_nz_i32(v1775);
  v1777 = (bool) v1776;
  if (v1777) {
  v1928 = v1774;
  goto label147;
  } else {
  goto label132;
  }
  label132:
  v1778 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1779 = EMITC_ARRAY_ELEMENT_ADDRESS(v1778, 23);
  ;
  v1781 = &v1780;
  v1782 = sizeof(iree_vm_ref_t);
  memset(v1781, 0, v1782);
  iree_vm_ref_assign(v121, v1781);
  v1783 = module_call_0ri_r_import_shim(v1, v1779, v1781, v22, v5);
  v1784 = (bool) v1783;
  v1785 = vm_cmp_nz_i32(v1784);
  v1786 = (bool) v1785;
  if (v1786) {
  v1928 = v1783;
  goto label147;
  } else {
  goto label133;
  }
  label133:
  v1787 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1788 = EMITC_ARRAY_ELEMENT_ADDRESS(v1787, 20);
  ;
  v1790 = &v1789;
  v1791 = sizeof(iree_vm_ref_t);
  memset(v1790, 0, v1791);
  iree_vm_ref_assign(v121, v1790);
  ;
  v1793 = &v1792;
  v1794 = sizeof(iree_vm_ref_t);
  memset(v1793, 0, v1794);
  iree_vm_ref_assign(v4, v1793);
  ;
  v1796 = &v1795;
  v1797 = sizeof(iree_vm_ref_t);
  memset(v1796, 0, v1797);
  iree_vm_ref_assign(v5, v1796);
  ;
  v1799 = &v1798;
  v1800 = sizeof(iree_vm_ref_t);
  memset(v1799, 0, v1800);
  iree_vm_ref_assign(v8, v1799);
  v1801 = module_call_0rIrrr_v_import_shim(v1, v1788, v1790, v41, v1793, v1796, v1799);
  v1802 = (bool) v1801;
  v1803 = vm_cmp_nz_i32(v1802);
  v1804 = (bool) v1803;
  if (v1804) {
  v1928 = v1801;
  goto label147;
  } else {
  goto label134;
  }
  label134:
  v1805 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1806 = EMITC_ARRAY_ELEMENT_ADDRESS(v1805, 24);
  ;
  v1808 = &v1807;
  v1809 = sizeof(iree_vm_ref_t);
  memset(v1808, 0, v1809);
  iree_vm_ref_assign(v5, v1808);
  ;
  v1811 = &v1810;
  v1812 = module_call_0iCrD_i_1_import_shim(v1, v1806, v45, v21, v1808, v1811);
  v1813 = (bool) v1812;
  v1814 = vm_cmp_nz_i32(v1813);
  v1815 = (bool) v1814;
  if (v1815) {
  v1928 = v1812;
  goto label147;
  } else {
  goto label135;
  }
  label135:
  v1816 = vm_cmp_nz_i32(v1810);
  v1817 = (bool) v1816;
  if (v1817) {
  goto label145;
  } else {
  goto label136;
  }
  label136:
  v1818 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1819 = EMITC_ARRAY_ELEMENT_ADDRESS(v1818, 5);
  ;
  v1821 = &v1820;
  v1822 = sizeof(iree_vm_ref_t);
  memset(v1821, 0, v1822);
  iree_vm_ref_assign(v118, v1821);
  v1823 = module_call_0rIIiiCID_r_2_import_shim(v1, v1819, v1821, v52, v52, v20, v21, v44, v46, v51, v4);
  v1824 = (bool) v1823;
  v1825 = vm_cmp_nz_i32(v1824);
  v1826 = (bool) v1825;
  if (v1826) {
  v1928 = v1823;
  goto label147;
  } else {
  goto label137;
  }
  label137:
  v1827 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1828 = EMITC_ARRAY_ELEMENT_ADDRESS(v1827, 5);
  ;
  v1830 = &v1829;
  v1831 = sizeof(iree_vm_ref_t);
  memset(v1830, 0, v1831);
  iree_vm_ref_assign(v118, v1830);
  v1832 = module_call_0rIIiiCID_r_2_import_shim(v1, v1828, v1830, v42, v52, v20, v21, v44, v46, v51, v5);
  v1833 = (bool) v1832;
  v1834 = vm_cmp_nz_i32(v1833);
  v1835 = (bool) v1834;
  if (v1835) {
  v1928 = v1832;
  goto label147;
  } else {
  goto label138;
  }
  label138:
  v1836 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1837 = EMITC_ARRAY_ELEMENT_ADDRESS(v1836, 5);
  ;
  v1839 = &v1838;
  v1840 = sizeof(iree_vm_ref_t);
  memset(v1839, 0, v1840);
  iree_vm_ref_assign(v118, v1839);
  v1841 = module_call_0rIIiiCID_r_2_import_shim(v1, v1837, v1839, v76, v77, v20, v21, v44, v46, v78, v6);
  v1842 = (bool) v1841;
  v1843 = vm_cmp_nz_i32(v1842);
  v1844 = (bool) v1843;
  if (v1844) {
  v1928 = v1841;
  goto label147;
  } else {
  goto label139;
  }
  label139:
  v1845 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1846 = EMITC_ARRAY_ELEMENT_ADDRESS(v1845, 5);
  ;
  v1848 = &v1847;
  v1849 = sizeof(iree_vm_ref_t);
  memset(v1848, 0, v1849);
  iree_vm_ref_assign(v118, v1848);
  v1850 = module_call_0rIIiiCID_r_2_import_shim(v1, v1846, v1848, v79, v80, v20, v21, v44, v46, v81, v7);
  v1851 = (bool) v1850;
  v1852 = vm_cmp_nz_i32(v1851);
  v1853 = (bool) v1852;
  if (v1853) {
  v1928 = v1850;
  goto label147;
  } else {
  goto label140;
  }
  label140:
  v1854 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1855 = EMITC_ARRAY_ELEMENT_ADDRESS(v1854, 5);
  ;
  v1857 = &v1856;
  v1858 = sizeof(iree_vm_ref_t);
  memset(v1857, 0, v1858);
  iree_vm_ref_assign(v118, v1857);
  v1859 = module_call_0rIIiiCID_r_2_import_shim(v1, v1855, v1857, v82, v83, v20, v21, v44, v46, v84, v8);
  v1860 = (bool) v1859;
  v1861 = vm_cmp_nz_i32(v1860);
  v1862 = (bool) v1861;
  if (v1862) {
  v1928 = v1859;
  goto label147;
  } else {
  goto label141;
  }
  label141:
  v1863 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1864 = EMITC_ARRAY_ELEMENT_ADDRESS(v1863, 5);
  ;
  v1866 = &v1865;
  v1867 = sizeof(iree_vm_ref_t);
  memset(v1866, 0, v1867);
  iree_vm_ref_assign(v118, v1866);
  v1868 = module_call_0rIIiiCID_r_2_import_shim(v1, v1864, v1866, v85, v86, v20, v21, v44, v46, v87, v9);
  v1869 = (bool) v1868;
  v1870 = vm_cmp_nz_i32(v1869);
  v1871 = (bool) v1870;
  if (v1871) {
  v1928 = v1868;
  goto label147;
  } else {
  goto label142;
  }
  label142:
  v1872 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1873 = EMITC_ARRAY_ELEMENT_ADDRESS(v1872, 5);
  ;
  v1875 = &v1874;
  v1876 = sizeof(iree_vm_ref_t);
  memset(v1875, 0, v1876);
  iree_vm_ref_assign(v118, v1875);
  v1877 = module_call_0rIIiiCID_r_2_import_shim(v1, v1873, v1875, v88, v80, v20, v21, v44, v46, v81, v10);
  v1878 = (bool) v1877;
  v1879 = vm_cmp_nz_i32(v1878);
  v1880 = (bool) v1879;
  if (v1880) {
  v1928 = v1877;
  goto label147;
  } else {
  goto label143;
  }
  label143:
  v1881 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v1882 = EMITC_ARRAY_ELEMENT_ADDRESS(v1881, 5);
  ;
  v1884 = &v1883;
  v1885 = sizeof(iree_vm_ref_t);
  memset(v1884, 0, v1885);
  iree_vm_ref_assign(v118, v1884);
  v1886 = module_call_0rIIiiCID_r_2_import_shim(v1, v1882, v1884, v89, v86, v20, v21, v44, v46, v87, v11);
  v1887 = (bool) v1886;
  v1888 = vm_cmp_nz_i32(v1887);
  v1889 = (bool) v1888;
  if (v1889) {
  v1928 = v1886;
  goto label147;
  } else {
  goto label144;
  }
  label144:
  ;
  v1891 = &v1890;
  v1892 = sizeof(iree_vm_ref_t);
  memset(v1891, 0, v1892);
  iree_vm_ref_move(v6, v1891);
  ;
  v1894 = &v1893;
  v1895 = sizeof(iree_vm_ref_t);
  memset(v1894, 0, v1895);
  iree_vm_ref_move(v11, v1894);
  ;
  v1897 = &v1896;
  v1898 = sizeof(iree_vm_ref_t);
  memset(v1897, 0, v1898);
  iree_vm_ref_move(v5, v1897);
  ;
  v1900 = &v1899;
  v1901 = sizeof(iree_vm_ref_t);
  memset(v1900, 0, v1901);
  iree_vm_ref_move(v7, v1900);
  ;
  v1903 = &v1902;
  v1904 = sizeof(iree_vm_ref_t);
  memset(v1903, 0, v1904);
  iree_vm_ref_move(v8, v1903);
  ;
  v1906 = &v1905;
  v1907 = sizeof(iree_vm_ref_t);
  memset(v1906, 0, v1907);
  iree_vm_ref_move(v9, v1906);
  ;
  v1909 = &v1908;
  v1910 = sizeof(iree_vm_ref_t);
  memset(v1909, 0, v1910);
  iree_vm_ref_move(v4, v1909);
  ;
  v1912 = &v1911;
  v1913 = sizeof(iree_vm_ref_t);
  memset(v1912, 0, v1913);
  iree_vm_ref_move(v10, v1912);
  iree_vm_ref_move(v1891, v10);
  iree_vm_ref_move(v1894, v15);
  iree_vm_ref_move(v1897, v9);
  iree_vm_ref_move(v1900, v11);
  iree_vm_ref_move(v1903, v12);
  iree_vm_ref_move(v1906, v13);
  iree_vm_ref_move(v1909, v8);
  iree_vm_ref_move(v1912, v14);
  iree_vm_ref_release(v100);
  iree_vm_ref_release(v121);
  iree_vm_ref_release(v106);
  iree_vm_ref_release(v127);
  iree_vm_ref_release(v91);
  iree_vm_ref_release(v112);
  iree_vm_ref_release(v97);
  iree_vm_ref_release(v118);
  iree_vm_ref_release(v103);
  iree_vm_ref_release(v124);
  iree_vm_ref_release(v109);
  iree_vm_ref_release(v94);
  iree_vm_ref_release(v115);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v7);
  v1914 = iree_ok_status();
  return v1914;
  label145:
  v1915 = (bool) v1810;
  if (v1915) {
  goto label150;
  } else {
  goto label148;
  }
  label146:
  v1916 = (bool) v44;
  if (v1916) {
  goto label149;
  } else {
  goto label148;
  }
  label147:
  iree_vm_ref_release(v100);
  iree_vm_ref_release(v121);
  iree_vm_ref_release(v106);
  iree_vm_ref_release(v127);
  iree_vm_ref_release(v91);
  iree_vm_ref_release(v112);
  iree_vm_ref_release(v97);
  iree_vm_ref_release(v118);
  iree_vm_ref_release(v103);
  iree_vm_ref_release(v124);
  iree_vm_ref_release(v109);
  iree_vm_ref_release(v94);
  iree_vm_ref_release(v115);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v7);
  return v1928;
  label148:
  iree_vm_ref_release(v100);
  iree_vm_ref_release(v121);
  iree_vm_ref_release(v106);
  iree_vm_ref_release(v127);
  iree_vm_ref_release(v91);
  iree_vm_ref_release(v112);
  iree_vm_ref_release(v97);
  iree_vm_ref_release(v118);
  iree_vm_ref_release(v103);
  iree_vm_ref_release(v124);
  iree_vm_ref_release(v109);
  iree_vm_ref_release(v94);
  iree_vm_ref_release(v115);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v7);
  v1917 = iree_ok_status();
  return v1917;
  label149:
  iree_vm_ref_release(v100);
  iree_vm_ref_release(v121);
  iree_vm_ref_release(v106);
  iree_vm_ref_release(v127);
  iree_vm_ref_release(v91);
  iree_vm_ref_release(v112);
  iree_vm_ref_release(v97);
  iree_vm_ref_release(v118);
  iree_vm_ref_release(v103);
  iree_vm_ref_release(v124);
  iree_vm_ref_release(v109);
  iree_vm_ref_release(v94);
  iree_vm_ref_release(v115);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v7);
  v1918 = iree_make_cstring_view("device not supported in the compiled configuration");
  v1919 = EMITC_STRUCT_MEMBER(v1918, size);
  v1920 = (int32_t) v1919;
  v1921 = EMITC_STRUCT_MEMBER(v1918, data);
  v1922 = iree_status_allocate_f(IREE_STATUS_FAILED_PRECONDITION, "<vm>", 0, "%.*s", v1920, v1921);
  return v1922;
  label150:
  iree_vm_ref_release(v100);
  iree_vm_ref_release(v121);
  iree_vm_ref_release(v106);
  iree_vm_ref_release(v127);
  iree_vm_ref_release(v91);
  iree_vm_ref_release(v112);
  iree_vm_ref_release(v97);
  iree_vm_ref_release(v118);
  iree_vm_ref_release(v103);
  iree_vm_ref_release(v124);
  iree_vm_ref_release(v109);
  iree_vm_ref_release(v94);
  iree_vm_ref_release(v115);
  iree_vm_ref_release(v4);
  iree_vm_ref_release(v5);
  iree_vm_ref_release(v6);
  iree_vm_ref_release(v7);
  v1923 = iree_make_cstring_view("failed to wait on timepoint");
  v1924 = EMITC_STRUCT_MEMBER(v1923, size);
  v1925 = (int32_t) v1924;
  v1926 = EMITC_STRUCT_MEMBER(v1923, data);
  v1927 = iree_status_allocate_f(IREE_STATUS_FAILED_PRECONDITION, "<vm>", 0, "%.*s", v1925, v1926);
  return v1927;
}

EMITC_TYPEDEF_STRUCT(module_main_args_t, iree_vm_ref_t arg0;iree_vm_ref_t arg1;iree_vm_ref_t arg2;iree_vm_ref_t arg3;)
EMITC_TYPEDEF_STRUCT(module_main_result_t, iree_vm_ref_t res0;iree_vm_ref_t res1;iree_vm_ref_t res2;iree_vm_ref_t res3;iree_vm_ref_t res4;iree_vm_ref_t res5;iree_vm_ref_t res6;iree_vm_ref_t res7;)
static iree_status_t module_main_export_shim(iree_vm_stack_t* v1, uint32_t v2, iree_byte_span_t v3, iree_byte_span_t v4, void* v5, void* v6) {
  module_t* v7;
  module_state_t* v8;
  uint8_t* v9;
  module_main_args_t* v10;
  uint8_t* v11;
  module_main_result_t* v12;
  iree_vm_ref_t* v13;
  iree_vm_ref_t* v14;
  iree_vm_ref_t* v15;
  iree_vm_ref_t* v16;
  iree_vm_ref_t* v17;
  iree_vm_ref_t* v18;
  iree_vm_ref_t* v19;
  iree_vm_ref_t* v20;
  iree_vm_ref_t* v21;
  iree_vm_ref_t* v22;
  iree_vm_ref_t* v23;
  iree_vm_ref_t* v24;
  iree_status_t v25;
  bool v26;
  int32_t v27;
  bool v28;
  iree_status_t v29;
  v7 = (module_t*) v5;
  v8 = (module_state_t*) v6;
  v9 = EMITC_STRUCT_MEMBER(v3, data);
  v10 = (module_main_args_t*) v9;
  v11 = EMITC_STRUCT_MEMBER(v4, data);
  v12 = (module_main_result_t*) v11;
  v13 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v10, arg0);
  v14 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v10, arg1);
  v15 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v10, arg2);
  v16 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v10, arg3);
  v17 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v12, res0);
  v18 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v12, res1);
  v19 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v12, res2);
  v20 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v12, res3);
  v21 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v12, res4);
  v22 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v12, res5);
  v23 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v12, res6);
  v24 = EMITC_STRUCT_PTR_MEMBER_ADDRESS(v12, res7);
  v25 = module_main(v1, v7, v8, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24);
  v26 = (bool) v25;
  v27 = vm_cmp_nz_i32(v26);
  v28 = (bool) v27;
  if (v28) {
  goto label3;
  } else {
  goto label2;
  }
  label2:
  v29 = iree_ok_status();
  return v29;
  label3:
  return v25;
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
  int64_t v6;
  int32_t v7;
  int32_t v8;
  int32_t v9;
  int32_t v10;
  int32_t v11;
  int32_t v12;
  int64_t v13;
  int64_t v14;
  int32_t v15;
  int32_t v16;
  int32_t v17;
  int32_t v18;
  int32_t v19;
  iree_vm_ref_t v20;
  iree_vm_ref_t* v21;
  iree_host_size_t v22;
  iree_vm_ref_t v23;
  iree_vm_ref_t* v24;
  iree_host_size_t v25;
  iree_vm_ref_t v26;
  iree_vm_ref_t* v27;
  iree_host_size_t v28;
  iree_vm_ref_t v29;
  iree_vm_ref_t* v30;
  iree_host_size_t v31;
  iree_vm_ref_t v32;
  iree_vm_ref_t* v33;
  iree_host_size_t v34;
  iree_vm_ref_t v35;
  iree_vm_ref_t* v36;
  iree_host_size_t v37;
  iree_vm_ref_t v38;
  iree_vm_ref_t* v39;
  iree_host_size_t v40;
  iree_vm_ref_t v41;
  iree_vm_ref_t* v42;
  iree_host_size_t v43;
  iree_vm_ref_t v44;
  iree_vm_ref_t* v45;
  iree_host_size_t v46;
  iree_vm_ref_t v47;
  iree_vm_ref_t* v48;
  iree_host_size_t v49;
  iree_vm_ref_t v50;
  iree_vm_ref_t* v51;
  iree_host_size_t v52;
  iree_vm_function_t* v53;
  iree_vm_function_t* v54;
  iree_status_t v55;
  bool v56;
  int32_t v57;
  bool v58;
  iree_vm_buffer_t* v59;
  iree_vm_buffer_t* v60;
  iree_vm_ref_type_t v61;
  iree_status_t v62;
  bool v63;
  int32_t v64;
  bool v65;
  iree_vm_buffer_t* v66;
  iree_vm_buffer_t* v67;
  iree_vm_ref_type_t v68;
  iree_status_t v69;
  bool v70;
  int32_t v71;
  bool v72;
  iree_vm_function_t* v73;
  iree_vm_function_t* v74;
  iree_vm_ref_t v75;
  iree_vm_ref_t* v76;
  iree_host_size_t v77;
  iree_vm_ref_t v78;
  iree_vm_ref_t* v79;
  iree_host_size_t v80;
  iree_vm_ref_t v81;
  iree_vm_ref_t* v82;
  iree_host_size_t v83;
  int32_t v84;
  int32_t* v85;
  int64_t v86;
  int64_t* v87;
  iree_status_t v88;
  bool v89;
  int32_t v90;
  bool v91;
  int32_t v92;
  int32_t v93;
  int32_t v94;
  iree_vm_function_t* v95;
  iree_vm_function_t* v96;
  iree_vm_ref_t v97;
  iree_vm_ref_t* v98;
  iree_host_size_t v99;
  iree_status_t v100;
  bool v101;
  int32_t v102;
  bool v103;
  iree_vm_function_t* v104;
  iree_vm_function_t* v105;
  iree_vm_ref_t v106;
  iree_vm_ref_t* v107;
  iree_host_size_t v108;
  iree_vm_ref_t v109;
  iree_vm_ref_t* v110;
  iree_host_size_t v111;
  iree_status_t v112;
  bool v113;
  int32_t v114;
  bool v115;
  iree_vm_function_t* v116;
  iree_vm_function_t* v117;
  iree_vm_ref_t v118;
  iree_vm_ref_t* v119;
  iree_host_size_t v120;
  iree_status_t v121;
  bool v122;
  int32_t v123;
  bool v124;
  iree_vm_function_t* v125;
  iree_vm_function_t* v126;
  iree_vm_ref_t v127;
  iree_vm_ref_t* v128;
  iree_host_size_t v129;
  iree_vm_ref_t v130;
  iree_vm_ref_t* v131;
  iree_host_size_t v132;
  iree_status_t v133;
  bool v134;
  int32_t v135;
  bool v136;
  iree_vm_function_t* v137;
  iree_vm_function_t* v138;
  iree_vm_ref_t v139;
  iree_vm_ref_t* v140;
  iree_host_size_t v141;
  iree_vm_ref_t v142;
  iree_vm_ref_t* v143;
  iree_host_size_t v144;
  iree_status_t v145;
  bool v146;
  int32_t v147;
  bool v148;
  iree_vm_function_t* v149;
  iree_vm_function_t* v150;
  iree_vm_ref_t v151;
  iree_vm_ref_t* v152;
  iree_host_size_t v153;
  iree_vm_ref_t v154;
  iree_vm_ref_t* v155;
  iree_host_size_t v156;
  iree_status_t v157;
  bool v158;
  int32_t v159;
  bool v160;
  iree_vm_function_t* v161;
  iree_vm_function_t* v162;
  iree_vm_ref_t v163;
  iree_vm_ref_t* v164;
  iree_host_size_t v165;
  iree_vm_ref_t v166;
  iree_vm_ref_t* v167;
  iree_host_size_t v168;
  iree_status_t v169;
  bool v170;
  int32_t v171;
  bool v172;
  iree_vm_function_t* v173;
  iree_vm_function_t* v174;
  iree_vm_ref_t v175;
  iree_vm_ref_t* v176;
  iree_host_size_t v177;
  iree_vm_ref_t v178;
  iree_vm_ref_t* v179;
  iree_host_size_t v180;
  iree_status_t v181;
  bool v182;
  int32_t v183;
  bool v184;
  uint8_t* v185;
  iree_vm_ref_t* v186;
  iree_vm_ref_t* v187;
  iree_vm_type_def_t v188;
  iree_vm_type_def_t* v189;
  iree_host_size_t v190;
  iree_string_view_t v191;
  const iree_vm_ref_type_descriptor_t* v192;
  iree_vm_ref_type_t v193;
  iree_vm_ref_type_t v194;
  iree_status_t v195;
  bool v196;
  int32_t v197;
  bool v198;
  iree_vm_ref_t* v199;
  iree_vm_ref_t* v200;
  iree_vm_type_def_t v201;
  iree_vm_type_def_t* v202;
  iree_host_size_t v203;
  iree_string_view_t v204;
  const iree_vm_ref_type_descriptor_t* v205;
  iree_vm_ref_type_t v206;
  iree_vm_ref_type_t v207;
  iree_status_t v208;
  bool v209;
  int32_t v210;
  bool v211;
  iree_vm_ref_t* v212;
  iree_vm_ref_t* v213;
  iree_vm_type_def_t v214;
  iree_vm_type_def_t* v215;
  iree_host_size_t v216;
  iree_string_view_t v217;
  const iree_vm_ref_type_descriptor_t* v218;
  iree_vm_ref_type_t v219;
  iree_vm_ref_type_t v220;
  iree_status_t v221;
  bool v222;
  int32_t v223;
  bool v224;
  iree_vm_ref_t* v225;
  iree_vm_ref_t* v226;
  iree_vm_type_def_t v227;
  iree_vm_type_def_t* v228;
  iree_host_size_t v229;
  iree_string_view_t v230;
  const iree_vm_ref_type_descriptor_t* v231;
  iree_vm_ref_type_t v232;
  iree_vm_ref_type_t v233;
  iree_status_t v234;
  bool v235;
  int32_t v236;
  bool v237;
  iree_vm_ref_t* v238;
  iree_vm_ref_t* v239;
  iree_vm_type_def_t v240;
  iree_vm_type_def_t* v241;
  iree_host_size_t v242;
  iree_string_view_t v243;
  const iree_vm_ref_type_descriptor_t* v244;
  iree_vm_ref_type_t v245;
  iree_vm_ref_type_t v246;
  iree_status_t v247;
  bool v248;
  int32_t v249;
  bool v250;
  iree_vm_ref_t* v251;
  iree_vm_ref_t* v252;
  iree_vm_type_def_t v253;
  iree_vm_type_def_t* v254;
  iree_host_size_t v255;
  iree_string_view_t v256;
  const iree_vm_ref_type_descriptor_t* v257;
  iree_vm_ref_type_t v258;
  iree_vm_ref_type_t v259;
  iree_status_t v260;
  bool v261;
  int32_t v262;
  bool v263;
  int32_t v264;
  bool v265;
  iree_vm_ref_t* v266;
  iree_vm_ref_t* v267;
  iree_vm_type_def_t v268;
  iree_vm_type_def_t* v269;
  iree_host_size_t v270;
  iree_string_view_t v271;
  const iree_vm_ref_type_descriptor_t* v272;
  iree_vm_ref_type_t v273;
  iree_vm_ref_type_t v274;
  iree_status_t v275;
  bool v276;
  int32_t v277;
  bool v278;
  iree_vm_ref_t* v279;
  iree_vm_ref_t* v280;
  iree_vm_type_def_t v281;
  iree_vm_type_def_t* v282;
  iree_host_size_t v283;
  iree_string_view_t v284;
  const iree_vm_ref_type_descriptor_t* v285;
  iree_vm_ref_type_t v286;
  iree_vm_ref_type_t v287;
  iree_status_t v288;
  bool v289;
  int32_t v290;
  bool v291;
  iree_vm_ref_t* v292;
  iree_vm_ref_t* v293;
  iree_vm_type_def_t v294;
  iree_vm_type_def_t* v295;
  iree_host_size_t v296;
  iree_string_view_t v297;
  const iree_vm_ref_type_descriptor_t* v298;
  iree_vm_ref_type_t v299;
  iree_vm_ref_type_t v300;
  iree_status_t v301;
  bool v302;
  int32_t v303;
  bool v304;
  iree_vm_ref_t* v305;
  iree_vm_ref_t* v306;
  iree_vm_type_def_t v307;
  iree_vm_type_def_t* v308;
  iree_host_size_t v309;
  iree_string_view_t v310;
  const iree_vm_ref_type_descriptor_t* v311;
  iree_vm_ref_type_t v312;
  iree_vm_ref_type_t v313;
  iree_status_t v314;
  bool v315;
  int32_t v316;
  bool v317;
  iree_vm_ref_t* v318;
  iree_vm_ref_t* v319;
  iree_vm_type_def_t v320;
  iree_vm_type_def_t* v321;
  iree_host_size_t v322;
  iree_string_view_t v323;
  const iree_vm_ref_type_descriptor_t* v324;
  iree_vm_ref_type_t v325;
  iree_vm_ref_type_t v326;
  iree_status_t v327;
  bool v328;
  int32_t v329;
  bool v330;
  iree_vm_ref_t* v331;
  iree_vm_ref_t* v332;
  iree_vm_type_def_t v333;
  iree_vm_type_def_t* v334;
  iree_host_size_t v335;
  iree_string_view_t v336;
  const iree_vm_ref_type_descriptor_t* v337;
  iree_vm_ref_type_t v338;
  iree_vm_ref_type_t v339;
  iree_status_t v340;
  bool v341;
  int32_t v342;
  bool v343;
  iree_vm_buffer_t* v344;
  iree_vm_buffer_t* v345;
  iree_vm_ref_type_t v346;
  iree_status_t v347;
  bool v348;
  int32_t v349;
  bool v350;
  iree_vm_function_t* v351;
  iree_vm_function_t* v352;
  iree_vm_ref_t v353;
  iree_vm_ref_t* v354;
  iree_host_size_t v355;
  iree_vm_ref_t v356;
  iree_vm_ref_t* v357;
  iree_host_size_t v358;
  iree_vm_ref_t v359;
  iree_vm_ref_t* v360;
  iree_host_size_t v361;
  iree_vm_ref_t v362;
  iree_vm_ref_t* v363;
  iree_host_size_t v364;
  iree_vm_ref_t v365;
  iree_vm_ref_t* v366;
  iree_host_size_t v367;
  iree_vm_ref_t v368;
  iree_vm_ref_t* v369;
  iree_host_size_t v370;
  iree_vm_ref_t v371;
  iree_vm_ref_t* v372;
  iree_host_size_t v373;
  iree_vm_ref_t v374;
  iree_vm_ref_t* v375;
  iree_host_size_t v376;
  iree_vm_ref_t v377;
  iree_vm_ref_t* v378;
  iree_host_size_t v379;
  iree_vm_ref_t v380;
  iree_vm_ref_t* v381;
  iree_host_size_t v382;
  iree_vm_ref_t v383;
  iree_vm_ref_t* v384;
  iree_host_size_t v385;
  iree_vm_ref_t v386;
  iree_vm_ref_t* v387;
  iree_host_size_t v388;
  iree_vm_ref_t v389;
  iree_vm_ref_t* v390;
  iree_host_size_t v391;
  iree_vm_ref_t v392;
  iree_vm_ref_t* v393;
  iree_host_size_t v394;
  iree_vm_ref_t v395;
  iree_vm_ref_t* v396;
  iree_host_size_t v397;
  iree_vm_ref_t v398;
  iree_vm_ref_t* v399;
  iree_host_size_t v400;
  iree_vm_ref_t v401;
  iree_vm_ref_t* v402;
  iree_host_size_t v403;
  iree_vm_ref_t v404;
  iree_vm_ref_t* v405;
  iree_host_size_t v406;
  iree_vm_ref_t v407;
  iree_vm_ref_t* v408;
  iree_host_size_t v409;
  iree_vm_ref_t v410;
  iree_vm_ref_t* v411;
  iree_host_size_t v412;
  iree_vm_ref_t v413;
  iree_vm_ref_t* v414;
  iree_host_size_t v415;
  iree_vm_ref_t v416;
  iree_vm_ref_t* v417;
  iree_host_size_t v418;
  iree_status_t v419;
  bool v420;
  int32_t v421;
  bool v422;
  iree_vm_ref_t v423;
  iree_vm_ref_t* v424;
  iree_host_size_t v425;
  iree_vm_buffer_t* v426;
  iree_vm_buffer_t* v427;
  iree_vm_ref_type_t v428;
  iree_status_t v429;
  bool v430;
  int32_t v431;
  bool v432;
  iree_vm_function_t* v433;
  iree_vm_function_t* v434;
  iree_vm_ref_t v435;
  iree_vm_ref_t* v436;
  iree_host_size_t v437;
  iree_status_t v438;
  bool v439;
  int32_t v440;
  bool v441;
  iree_vm_function_t* v442;
  iree_vm_function_t* v443;
  iree_vm_ref_t v444;
  iree_vm_ref_t* v445;
  iree_host_size_t v446;
  iree_vm_ref_t v447;
  iree_vm_ref_t* v448;
  iree_host_size_t v449;
  iree_status_t v450;
  bool v451;
  int32_t v452;
  bool v453;
  int32_t v454;
  iree_vm_ref_t* v455;
  iree_vm_ref_t* v456;
  iree_vm_type_def_t v457;
  iree_vm_type_def_t* v458;
  iree_host_size_t v459;
  iree_string_view_t v460;
  const iree_vm_ref_type_descriptor_t* v461;
  iree_vm_ref_type_t v462;
  iree_vm_ref_type_t v463;
  iree_status_t v464;
  bool v465;
  int32_t v466;
  bool v467;
  int32_t v468;
  bool v469;
  iree_vm_function_t* v470;
  iree_vm_function_t* v471;
  iree_vm_ref_t v472;
  iree_vm_ref_t* v473;
  iree_host_size_t v474;
  iree_vm_ref_t v475;
  iree_vm_ref_t* v476;
  iree_host_size_t v477;
  iree_status_t v478;
  bool v479;
  int32_t v480;
  bool v481;
  iree_vm_function_t* v482;
  iree_vm_function_t* v483;
  iree_vm_ref_t v484;
  iree_vm_ref_t* v485;
  iree_host_size_t v486;
  iree_status_t v487;
  bool v488;
  int32_t v489;
  bool v490;
  iree_vm_function_t* v491;
  iree_vm_function_t* v492;
  iree_vm_ref_t v493;
  iree_vm_ref_t* v494;
  iree_host_size_t v495;
  iree_status_t v496;
  bool v497;
  int32_t v498;
  bool v499;
  iree_vm_function_t* v500;
  iree_vm_function_t* v501;
  iree_vm_ref_t v502;
  iree_vm_ref_t* v503;
  iree_host_size_t v504;
  iree_vm_ref_t v505;
  iree_vm_ref_t* v506;
  iree_host_size_t v507;
  iree_vm_ref_t v508;
  iree_vm_ref_t* v509;
  iree_host_size_t v510;
  iree_status_t v511;
  bool v512;
  int32_t v513;
  bool v514;
  iree_vm_function_t* v515;
  iree_vm_function_t* v516;
  iree_vm_ref_t v517;
  iree_vm_ref_t* v518;
  iree_host_size_t v519;
  iree_status_t v520;
  bool v521;
  int32_t v522;
  bool v523;
  iree_vm_function_t* v524;
  iree_vm_function_t* v525;
  iree_vm_ref_t v526;
  iree_vm_ref_t* v527;
  iree_host_size_t v528;
  iree_status_t v529;
  bool v530;
  int32_t v531;
  bool v532;
  iree_vm_function_t* v533;
  iree_vm_function_t* v534;
  iree_vm_ref_t v535;
  iree_vm_ref_t* v536;
  iree_host_size_t v537;
  iree_status_t v538;
  bool v539;
  int32_t v540;
  bool v541;
  iree_vm_function_t* v542;
  iree_vm_function_t* v543;
  iree_vm_ref_t v544;
  iree_vm_ref_t* v545;
  iree_host_size_t v546;
  iree_vm_ref_t v547;
  iree_vm_ref_t* v548;
  iree_host_size_t v549;
  iree_vm_ref_t v550;
  iree_vm_ref_t* v551;
  iree_host_size_t v552;
  iree_vm_ref_t v553;
  iree_vm_ref_t* v554;
  iree_host_size_t v555;
  iree_status_t v556;
  bool v557;
  int32_t v558;
  bool v559;
  iree_vm_ref_t v560;
  iree_vm_ref_t* v561;
  iree_host_size_t v562;
  iree_vm_ref_t v563;
  iree_vm_ref_t* v564;
  iree_host_size_t v565;
  iree_vm_ref_t* v566;
  iree_vm_ref_t* v567;
  iree_vm_type_def_t v568;
  iree_vm_type_def_t* v569;
  iree_host_size_t v570;
  iree_string_view_t v571;
  const iree_vm_ref_type_descriptor_t* v572;
  iree_vm_ref_type_t v573;
  iree_vm_ref_type_t v574;
  iree_status_t v575;
  bool v576;
  int32_t v577;
  bool v578;
  iree_vm_ref_t* v579;
  iree_vm_ref_t* v580;
  iree_vm_type_def_t v581;
  iree_vm_type_def_t* v582;
  iree_host_size_t v583;
  iree_string_view_t v584;
  const iree_vm_ref_type_descriptor_t* v585;
  iree_vm_ref_type_t v586;
  iree_vm_ref_type_t v587;
  iree_status_t v588;
  bool v589;
  int32_t v590;
  bool v591;
  iree_status_t v592;
  iree_vm_ref_t* v593;
  iree_vm_ref_t* v594;
  iree_status_t v595;
  v4 = 18;
  v5 = 3;
  v6 = -1;
  v7 = 0;
  v8 = 1;
  v9 = 7;
  v10 = 2;
  v11 = 48;
  v12 = 527363;
  v13 = 0;
  v14 = 3968;
  v15 = 86;
  v16 = 150994947;
  v17 = 17;
  v18 = 28;
  v19 = 13;
  ;
  v21 = &v20;
  v22 = sizeof(iree_vm_ref_t);
  memset(v21, 0, v22);
  ;
  v24 = &v23;
  v25 = sizeof(iree_vm_ref_t);
  memset(v24, 0, v25);
  ;
  v27 = &v26;
  v28 = sizeof(iree_vm_ref_t);
  memset(v27, 0, v28);
  ;
  v30 = &v29;
  v31 = sizeof(iree_vm_ref_t);
  memset(v30, 0, v31);
  ;
  v33 = &v32;
  v34 = sizeof(iree_vm_ref_t);
  memset(v33, 0, v34);
  ;
  v36 = &v35;
  v37 = sizeof(iree_vm_ref_t);
  memset(v36, 0, v37);
  ;
  v39 = &v38;
  v40 = sizeof(iree_vm_ref_t);
  memset(v39, 0, v40);
  ;
  v42 = &v41;
  v43 = sizeof(iree_vm_ref_t);
  memset(v42, 0, v43);
  ;
  v45 = &v44;
  v46 = sizeof(iree_vm_ref_t);
  memset(v45, 0, v46);
  ;
  v48 = &v47;
  v49 = sizeof(iree_vm_ref_t);
  memset(v48, 0, v49);
  ;
  v51 = &v50;
  v52 = sizeof(iree_vm_ref_t);
  memset(v51, 0, v52);
  iree_vm_ref_release(v21);
  iree_vm_ref_release(v24);
  iree_vm_ref_release(v27);
  v53 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v54 = EMITC_ARRAY_ELEMENT_ADDRESS(v53, 0);
  v55 = module_call_0v_r_import_shim(v1, v54, v30);
  v56 = (bool) v55;
  v57 = vm_cmp_nz_i32(v56);
  v58 = (bool) v57;
  if (v58) {
  v595 = v55;
  goto label44;
  } else {
  goto label2;
  }
  label2:
  v59 = EMITC_STRUCT_PTR_MEMBER(v3, rodata_buffers);
  v60 = EMITC_ARRAY_ELEMENT_ADDRESS(v59, 1);
  v61 = iree_vm_buffer_type_id();
  v62 = iree_vm_ref_wrap_retain(v60, v61, v33);
  v63 = (bool) v62;
  v64 = vm_cmp_nz_i32(v63);
  v65 = (bool) v64;
  if (v65) {
  v595 = v62;
  goto label44;
  } else {
  goto label3;
  }
  label3:
  v66 = EMITC_STRUCT_PTR_MEMBER(v3, rodata_buffers);
  v67 = EMITC_ARRAY_ELEMENT_ADDRESS(v66, 2);
  v68 = iree_vm_buffer_type_id();
  v69 = iree_vm_ref_wrap_retain(v67, v68, v36);
  v70 = (bool) v69;
  v71 = vm_cmp_nz_i32(v70);
  v72 = (bool) v71;
  if (v72) {
  v595 = v69;
  goto label44;
  } else {
  goto label4;
  }
  label4:
  v73 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v74 = EMITC_ARRAY_ELEMENT_ADDRESS(v73, 18);
  ;
  v76 = &v75;
  v77 = sizeof(iree_vm_ref_t);
  memset(v76, 0, v77);
  iree_vm_ref_assign(v30, v76);
  ;
  v79 = &v78;
  v80 = sizeof(iree_vm_ref_t);
  memset(v79, 0, v80);
  iree_vm_ref_assign(v33, v79);
  ;
  v82 = &v81;
  v83 = sizeof(iree_vm_ref_t);
  memset(v82, 0, v83);
  iree_vm_ref_assign(v36, v82);
  ;
  v85 = &v84;
  ;
  v87 = &v86;
  v88 = module_call_0rrr_iI_import_shim(v1, v74, v76, v79, v82, v85, v87);
  v89 = (bool) v88;
  v90 = vm_cmp_nz_i32(v89);
  v91 = (bool) v90;
  if (v91) {
  v595 = v88;
  goto label44;
  } else {
  goto label5;
  }
  label5:
  v92 = vm_trunc_i64i32(v86);
  v93 = vm_and_i32(v92, v8);
  v94 = vm_select_i32(v84, v93, v7);
  v95 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v96 = EMITC_ARRAY_ELEMENT_ADDRESS(v95, 16);
  ;
  v98 = &v97;
  v99 = sizeof(iree_vm_ref_t);
  memset(v98, 0, v99);
  iree_vm_ref_assign(v30, v98);
  v100 = module_call_0riCiiiD_r_3_import_shim(v1, v96, v98, v7, v5, v7, v9, v8, v8, v9, v8, v10, v9, v7, v33);
  v101 = (bool) v100;
  v102 = vm_cmp_nz_i32(v101);
  v103 = (bool) v102;
  if (v103) {
  v595 = v100;
  goto label44;
  } else {
  goto label6;
  }
  label6:
  v104 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v105 = EMITC_ARRAY_ELEMENT_ADDRESS(v104, 25);
  ;
  v107 = &v106;
  v108 = sizeof(iree_vm_ref_t);
  memset(v107, 0, v108);
  iree_vm_ref_assign(v30, v107);
  ;
  v110 = &v109;
  v111 = sizeof(iree_vm_ref_t);
  memset(v110, 0, v111);
  iree_vm_ref_assign(v33, v110);
  v112 = module_call_0riCrD_r_1_import_shim(v1, v105, v107, v8, v8, v110, v39);
  v113 = (bool) v112;
  v114 = vm_cmp_nz_i32(v113);
  v115 = (bool) v114;
  if (v115) {
  v595 = v112;
  goto label44;
  } else {
  goto label7;
  }
  label7:
  v116 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v117 = EMITC_ARRAY_ELEMENT_ADDRESS(v116, 16);
  ;
  v119 = &v118;
  v120 = sizeof(iree_vm_ref_t);
  memset(v119, 0, v120);
  iree_vm_ref_assign(v30, v119);
  v121 = module_call_0riCiiiD_r_2_import_shim(v1, v117, v119, v7, v10, v7, v9, v8, v8, v9, v7, v42);
  v122 = (bool) v121;
  v123 = vm_cmp_nz_i32(v122);
  v124 = (bool) v123;
  if (v124) {
  v595 = v121;
  goto label44;
  } else {
  goto label8;
  }
  label8:
  v125 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v126 = EMITC_ARRAY_ELEMENT_ADDRESS(v125, 25);
  ;
  v128 = &v127;
  v129 = sizeof(iree_vm_ref_t);
  memset(v128, 0, v129);
  iree_vm_ref_assign(v30, v128);
  ;
  v131 = &v130;
  v132 = sizeof(iree_vm_ref_t);
  memset(v131, 0, v132);
  iree_vm_ref_assign(v42, v131);
  v133 = module_call_0riCrD_r_1_import_shim(v1, v126, v128, v8, v8, v131, v45);
  v134 = (bool) v133;
  v135 = vm_cmp_nz_i32(v134);
  v136 = (bool) v135;
  if (v136) {
  v595 = v133;
  goto label44;
  } else {
  goto label9;
  }
  label9:
  v137 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v138 = EMITC_ARRAY_ELEMENT_ADDRESS(v137, 25);
  ;
  v140 = &v139;
  v141 = sizeof(iree_vm_ref_t);
  memset(v140, 0, v141);
  iree_vm_ref_assign(v30, v140);
  ;
  v143 = &v142;
  v144 = sizeof(iree_vm_ref_t);
  memset(v143, 0, v144);
  iree_vm_ref_assign(v42, v143);
  v145 = module_call_0riCrD_r_1_import_shim(v1, v138, v140, v10, v8, v143, v48);
  v146 = (bool) v145;
  v147 = vm_cmp_nz_i32(v146);
  v148 = (bool) v147;
  if (v148) {
  v595 = v145;
  goto label44;
  } else {
  goto label10;
  }
  label10:
  v149 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v150 = EMITC_ARRAY_ELEMENT_ADDRESS(v149, 25);
  ;
  v152 = &v151;
  v153 = sizeof(iree_vm_ref_t);
  memset(v152, 0, v153);
  iree_vm_ref_assign(v30, v152);
  ;
  v155 = &v154;
  v156 = sizeof(iree_vm_ref_t);
  memset(v155, 0, v156);
  iree_vm_ref_assign(v33, v155);
  v157 = module_call_0riCrD_r_1_import_shim(v1, v150, v152, v10, v8, v155, v51);
  v158 = (bool) v157;
  v159 = vm_cmp_nz_i32(v158);
  v160 = (bool) v159;
  if (v160) {
  v595 = v157;
  goto label44;
  } else {
  goto label11;
  }
  label11:
  v161 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v162 = EMITC_ARRAY_ELEMENT_ADDRESS(v161, 25);
  ;
  v164 = &v163;
  v165 = sizeof(iree_vm_ref_t);
  memset(v164, 0, v165);
  iree_vm_ref_assign(v30, v164);
  ;
  v167 = &v166;
  v168 = sizeof(iree_vm_ref_t);
  memset(v167, 0, v168);
  iree_vm_ref_assign(v42, v167);
  v169 = module_call_0riCrD_r_1_import_shim(v1, v162, v164, v7, v8, v167, v42);
  v170 = (bool) v169;
  v171 = vm_cmp_nz_i32(v170);
  v172 = (bool) v171;
  if (v172) {
  v595 = v169;
  goto label44;
  } else {
  goto label12;
  }
  label12:
  v173 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v174 = EMITC_ARRAY_ELEMENT_ADDRESS(v173, 25);
  ;
  v176 = &v175;
  v177 = sizeof(iree_vm_ref_t);
  memset(v176, 0, v177);
  iree_vm_ref_assign(v30, v176);
  ;
  v179 = &v178;
  v180 = sizeof(iree_vm_ref_t);
  memset(v179, 0, v180);
  iree_vm_ref_assign(v33, v179);
  v181 = module_call_0riCrD_r_1_import_shim(v1, v174, v176, v7, v8, v179, v33);
  v182 = (bool) v181;
  v183 = vm_cmp_nz_i32(v182);
  v184 = (bool) v183;
  if (v184) {
  v595 = v181;
  goto label44;
  } else {
  goto label13;
  }
  label13:
  v185 = EMITC_STRUCT_PTR_MEMBER(v3, rwdata);
  vm_global_store_i32(v185, 0, v94);
  v186 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v187 = EMITC_ARRAY_ELEMENT_ADDRESS(v186, 0);
  ;
  v189 = &v188;
  v190 = sizeof(iree_vm_type_def_t);
  memset(v189, 0, v190);
  v191 = iree_make_cstring_view("hal.pipeline_layout");
  v192 = iree_vm_ref_lookup_registered_type(v191);
  v193 = EMITC_STRUCT_PTR_MEMBER(v192, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v188, ref_type, v193);
  v194 = EMITC_STRUCT_PTR_MEMBER(v189, ref_type);
  v195 = iree_vm_ref_retain_or_move_checked(false, v39, v194, v187);
  v196 = (bool) v195;
  v197 = vm_cmp_nz_i32(v196);
  v198 = (bool) v197;
  if (v198) {
  v595 = v195;
  goto label44;
  } else {
  goto label14;
  }
  label14:
  v199 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v200 = EMITC_ARRAY_ELEMENT_ADDRESS(v199, 1);
  ;
  v202 = &v201;
  v203 = sizeof(iree_vm_type_def_t);
  memset(v202, 0, v203);
  v204 = iree_make_cstring_view("hal.pipeline_layout");
  v205 = iree_vm_ref_lookup_registered_type(v204);
  v206 = EMITC_STRUCT_PTR_MEMBER(v205, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v201, ref_type, v206);
  v207 = EMITC_STRUCT_PTR_MEMBER(v202, ref_type);
  v208 = iree_vm_ref_retain_or_move_checked(false, v45, v207, v200);
  v209 = (bool) v208;
  v210 = vm_cmp_nz_i32(v209);
  v211 = (bool) v210;
  if (v211) {
  v595 = v208;
  goto label44;
  } else {
  goto label15;
  }
  label15:
  v212 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v213 = EMITC_ARRAY_ELEMENT_ADDRESS(v212, 2);
  ;
  v215 = &v214;
  v216 = sizeof(iree_vm_type_def_t);
  memset(v215, 0, v216);
  v217 = iree_make_cstring_view("hal.pipeline_layout");
  v218 = iree_vm_ref_lookup_registered_type(v217);
  v219 = EMITC_STRUCT_PTR_MEMBER(v218, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v214, ref_type, v219);
  v220 = EMITC_STRUCT_PTR_MEMBER(v215, ref_type);
  v221 = iree_vm_ref_retain_or_move_checked(false, v48, v220, v213);
  v222 = (bool) v221;
  v223 = vm_cmp_nz_i32(v222);
  v224 = (bool) v223;
  if (v224) {
  v595 = v221;
  goto label44;
  } else {
  goto label16;
  }
  label16:
  v225 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v226 = EMITC_ARRAY_ELEMENT_ADDRESS(v225, 3);
  ;
  v228 = &v227;
  v229 = sizeof(iree_vm_type_def_t);
  memset(v228, 0, v229);
  v230 = iree_make_cstring_view("hal.pipeline_layout");
  v231 = iree_vm_ref_lookup_registered_type(v230);
  v232 = EMITC_STRUCT_PTR_MEMBER(v231, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v227, ref_type, v232);
  v233 = EMITC_STRUCT_PTR_MEMBER(v228, ref_type);
  v234 = iree_vm_ref_retain_or_move_checked(false, v51, v233, v226);
  v235 = (bool) v234;
  v236 = vm_cmp_nz_i32(v235);
  v237 = (bool) v236;
  if (v237) {
  v595 = v234;
  goto label44;
  } else {
  goto label17;
  }
  label17:
  v238 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v239 = EMITC_ARRAY_ELEMENT_ADDRESS(v238, 4);
  ;
  v241 = &v240;
  v242 = sizeof(iree_vm_type_def_t);
  memset(v241, 0, v242);
  v243 = iree_make_cstring_view("hal.pipeline_layout");
  v244 = iree_vm_ref_lookup_registered_type(v243);
  v245 = EMITC_STRUCT_PTR_MEMBER(v244, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v240, ref_type, v245);
  v246 = EMITC_STRUCT_PTR_MEMBER(v241, ref_type);
  v247 = iree_vm_ref_retain_or_move_checked(false, v42, v246, v239);
  v248 = (bool) v247;
  v249 = vm_cmp_nz_i32(v248);
  v250 = (bool) v249;
  if (v250) {
  v595 = v247;
  goto label44;
  } else {
  goto label18;
  }
  label18:
  v251 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v252 = EMITC_ARRAY_ELEMENT_ADDRESS(v251, 5);
  ;
  v254 = &v253;
  v255 = sizeof(iree_vm_type_def_t);
  memset(v254, 0, v255);
  v256 = iree_make_cstring_view("hal.pipeline_layout");
  v257 = iree_vm_ref_lookup_registered_type(v256);
  v258 = EMITC_STRUCT_PTR_MEMBER(v257, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v253, ref_type, v258);
  v259 = EMITC_STRUCT_PTR_MEMBER(v254, ref_type);
  v260 = iree_vm_ref_retain_or_move_checked(false, v33, v259, v252);
  v261 = (bool) v260;
  v262 = vm_cmp_nz_i32(v261);
  v263 = (bool) v262;
  if (v263) {
  v595 = v260;
  goto label44;
  } else {
  goto label19;
  }
  label19:
  v264 = vm_cmp_nz_i32(v94);
  v265 = (bool) v264;
  if (v265) {
  goto label20;
  } else {
  goto label28;
  }
  label20:
  v266 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v267 = EMITC_ARRAY_ELEMENT_ADDRESS(v266, 5);
  ;
  v269 = &v268;
  v270 = sizeof(iree_vm_type_def_t);
  memset(v269, 0, v270);
  v271 = iree_make_cstring_view("hal.pipeline_layout");
  v272 = iree_vm_ref_lookup_registered_type(v271);
  v273 = EMITC_STRUCT_PTR_MEMBER(v272, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v268, ref_type, v273);
  v274 = EMITC_STRUCT_PTR_MEMBER(v269, ref_type);
  v275 = iree_vm_ref_retain_or_move_checked(false, v267, v274, v24);
  v276 = (bool) v275;
  v277 = vm_cmp_nz_i32(v276);
  v278 = (bool) v277;
  if (v278) {
  v595 = v275;
  goto label44;
  } else {
  goto label21;
  }
  label21:
  v279 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v280 = EMITC_ARRAY_ELEMENT_ADDRESS(v279, 4);
  ;
  v282 = &v281;
  v283 = sizeof(iree_vm_type_def_t);
  memset(v282, 0, v283);
  v284 = iree_make_cstring_view("hal.pipeline_layout");
  v285 = iree_vm_ref_lookup_registered_type(v284);
  v286 = EMITC_STRUCT_PTR_MEMBER(v285, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v281, ref_type, v286);
  v287 = EMITC_STRUCT_PTR_MEMBER(v282, ref_type);
  v288 = iree_vm_ref_retain_or_move_checked(false, v280, v287, v33);
  v289 = (bool) v288;
  v290 = vm_cmp_nz_i32(v289);
  v291 = (bool) v290;
  if (v291) {
  v595 = v288;
  goto label44;
  } else {
  goto label22;
  }
  label22:
  v292 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v293 = EMITC_ARRAY_ELEMENT_ADDRESS(v292, 3);
  ;
  v295 = &v294;
  v296 = sizeof(iree_vm_type_def_t);
  memset(v295, 0, v296);
  v297 = iree_make_cstring_view("hal.pipeline_layout");
  v298 = iree_vm_ref_lookup_registered_type(v297);
  v299 = EMITC_STRUCT_PTR_MEMBER(v298, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v294, ref_type, v299);
  v300 = EMITC_STRUCT_PTR_MEMBER(v295, ref_type);
  v301 = iree_vm_ref_retain_or_move_checked(false, v293, v300, v39);
  v302 = (bool) v301;
  v303 = vm_cmp_nz_i32(v302);
  v304 = (bool) v303;
  if (v304) {
  v595 = v301;
  goto label44;
  } else {
  goto label23;
  }
  label23:
  v305 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v306 = EMITC_ARRAY_ELEMENT_ADDRESS(v305, 2);
  ;
  v308 = &v307;
  v309 = sizeof(iree_vm_type_def_t);
  memset(v308, 0, v309);
  v310 = iree_make_cstring_view("hal.pipeline_layout");
  v311 = iree_vm_ref_lookup_registered_type(v310);
  v312 = EMITC_STRUCT_PTR_MEMBER(v311, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v307, ref_type, v312);
  v313 = EMITC_STRUCT_PTR_MEMBER(v308, ref_type);
  v314 = iree_vm_ref_retain_or_move_checked(false, v306, v313, v42);
  v315 = (bool) v314;
  v316 = vm_cmp_nz_i32(v315);
  v317 = (bool) v316;
  if (v317) {
  v595 = v314;
  goto label44;
  } else {
  goto label24;
  }
  label24:
  v318 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v319 = EMITC_ARRAY_ELEMENT_ADDRESS(v318, 1);
  ;
  v321 = &v320;
  v322 = sizeof(iree_vm_type_def_t);
  memset(v321, 0, v322);
  v323 = iree_make_cstring_view("hal.pipeline_layout");
  v324 = iree_vm_ref_lookup_registered_type(v323);
  v325 = EMITC_STRUCT_PTR_MEMBER(v324, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v320, ref_type, v325);
  v326 = EMITC_STRUCT_PTR_MEMBER(v321, ref_type);
  v327 = iree_vm_ref_retain_or_move_checked(false, v319, v326, v45);
  v328 = (bool) v327;
  v329 = vm_cmp_nz_i32(v328);
  v330 = (bool) v329;
  if (v330) {
  v595 = v327;
  goto label44;
  } else {
  goto label25;
  }
  label25:
  v331 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v332 = EMITC_ARRAY_ELEMENT_ADDRESS(v331, 0);
  ;
  v334 = &v333;
  v335 = sizeof(iree_vm_type_def_t);
  memset(v334, 0, v335);
  v336 = iree_make_cstring_view("hal.pipeline_layout");
  v337 = iree_vm_ref_lookup_registered_type(v336);
  v338 = EMITC_STRUCT_PTR_MEMBER(v337, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v333, ref_type, v338);
  v339 = EMITC_STRUCT_PTR_MEMBER(v334, ref_type);
  v340 = iree_vm_ref_retain_or_move_checked(false, v332, v339, v48);
  v341 = (bool) v340;
  v342 = vm_cmp_nz_i32(v341);
  v343 = (bool) v342;
  if (v343) {
  v595 = v340;
  goto label44;
  } else {
  goto label26;
  }
  label26:
  v344 = EMITC_STRUCT_PTR_MEMBER(v3, rodata_buffers);
  v345 = EMITC_ARRAY_ELEMENT_ADDRESS(v344, 0);
  v346 = iree_vm_buffer_type_id();
  v347 = iree_vm_ref_wrap_retain(v345, v346, v51);
  v348 = (bool) v347;
  v349 = vm_cmp_nz_i32(v348);
  v350 = (bool) v349;
  if (v350) {
  v595 = v347;
  goto label44;
  } else {
  goto label27;
  }
  label27:
  v351 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v352 = EMITC_ARRAY_ELEMENT_ADDRESS(v351, 22);
  ;
  v354 = &v353;
  v355 = sizeof(iree_vm_ref_t);
  memset(v354, 0, v355);
  iree_vm_ref_assign(v30, v354);
  ;
  v357 = &v356;
  v358 = sizeof(iree_vm_ref_t);
  memset(v357, 0, v358);
  iree_vm_ref_assign(v36, v357);
  ;
  v360 = &v359;
  v361 = sizeof(iree_vm_ref_t);
  memset(v360, 0, v361);
  iree_vm_ref_assign(v51, v360);
  ;
  v363 = &v362;
  v364 = sizeof(iree_vm_ref_t);
  memset(v363, 0, v364);
  iree_vm_ref_assign(v27, v363);
  ;
  v366 = &v365;
  v367 = sizeof(iree_vm_ref_t);
  memset(v366, 0, v367);
  iree_vm_ref_assign(v48, v366);
  ;
  v369 = &v368;
  v370 = sizeof(iree_vm_ref_t);
  memset(v369, 0, v370);
  iree_vm_ref_assign(v45, v369);
  ;
  v372 = &v371;
  v373 = sizeof(iree_vm_ref_t);
  memset(v372, 0, v373);
  iree_vm_ref_assign(v42, v372);
  ;
  v375 = &v374;
  v376 = sizeof(iree_vm_ref_t);
  memset(v375, 0, v376);
  iree_vm_ref_assign(v39, v375);
  ;
  v378 = &v377;
  v379 = sizeof(iree_vm_ref_t);
  memset(v378, 0, v379);
  iree_vm_ref_assign(v42, v378);
  ;
  v381 = &v380;
  v382 = sizeof(iree_vm_ref_t);
  memset(v381, 0, v382);
  iree_vm_ref_assign(v42, v381);
  ;
  v384 = &v383;
  v385 = sizeof(iree_vm_ref_t);
  memset(v384, 0, v385);
  iree_vm_ref_assign(v42, v384);
  ;
  v387 = &v386;
  v388 = sizeof(iree_vm_ref_t);
  memset(v387, 0, v388);
  iree_vm_ref_assign(v42, v387);
  ;
  v390 = &v389;
  v391 = sizeof(iree_vm_ref_t);
  memset(v390, 0, v391);
  iree_vm_ref_assign(v39, v390);
  ;
  v393 = &v392;
  v394 = sizeof(iree_vm_ref_t);
  memset(v393, 0, v394);
  iree_vm_ref_assign(v42, v393);
  ;
  v396 = &v395;
  v397 = sizeof(iree_vm_ref_t);
  memset(v396, 0, v397);
  iree_vm_ref_assign(v42, v396);
  ;
  v399 = &v398;
  v400 = sizeof(iree_vm_ref_t);
  memset(v399, 0, v400);
  iree_vm_ref_assign(v42, v399);
  ;
  v402 = &v401;
  v403 = sizeof(iree_vm_ref_t);
  memset(v402, 0, v403);
  iree_vm_ref_assign(v42, v402);
  ;
  v405 = &v404;
  v406 = sizeof(iree_vm_ref_t);
  memset(v405, 0, v406);
  iree_vm_ref_assign(v33, v405);
  ;
  v408 = &v407;
  v409 = sizeof(iree_vm_ref_t);
  memset(v408, 0, v409);
  iree_vm_ref_assign(v33, v408);
  ;
  v411 = &v410;
  v412 = sizeof(iree_vm_ref_t);
  memset(v411, 0, v412);
  iree_vm_ref_assign(v33, v411);
  ;
  v414 = &v413;
  v415 = sizeof(iree_vm_ref_t);
  memset(v414, 0, v415);
  iree_vm_ref_assign(v33, v414);
  ;
  v417 = &v416;
  v418 = sizeof(iree_vm_ref_t);
  memset(v417, 0, v418);
  iree_vm_ref_assign(v24, v417);
  v419 = module_call_0rrrrCrD_r_18_import_shim(v1, v352, v354, v357, v360, v363, v4, v366, v369, v372, v375, v378, v381, v384, v387, v390, v393, v396, v399, v402, v405, v408, v411, v414, v417, v24);
  v420 = (bool) v419;
  v421 = vm_cmp_nz_i32(v420);
  v422 = (bool) v421;
  if (v422) {
  v595 = v419;
  goto label44;
  } else {
  goto label28;
  }
  label28:
  ;
  v424 = &v423;
  v425 = sizeof(iree_vm_ref_t);
  memset(v424, 0, v425);
  iree_vm_ref_retain(v24, v424);
  iree_vm_ref_assign(v424, v24);
  v426 = EMITC_STRUCT_PTR_MEMBER(v3, rodata_buffers);
  v427 = EMITC_ARRAY_ELEMENT_ADDRESS(v426, 3);
  v428 = iree_vm_buffer_type_id();
  v429 = iree_vm_ref_wrap_retain(v427, v428, v27);
  v430 = (bool) v429;
  v431 = vm_cmp_nz_i32(v430);
  v432 = (bool) v431;
  if (v432) {
  v595 = v429;
  goto label44;
  } else {
  goto label29;
  }
  label29:
  v433 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v434 = EMITC_ARRAY_ELEMENT_ADDRESS(v433, 17);
  ;
  v436 = &v435;
  v437 = sizeof(iree_vm_ref_t);
  memset(v436, 0, v437);
  iree_vm_ref_assign(v30, v436);
  v438 = module_call_0r_r_import_shim(v1, v434, v436, v33);
  v439 = (bool) v438;
  v440 = vm_cmp_nz_i32(v439);
  v441 = (bool) v440;
  if (v441) {
  v595 = v438;
  goto label44;
  } else {
  goto label30;
  }
  label30:
  v442 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v443 = EMITC_ARRAY_ELEMENT_ADDRESS(v442, 3);
  ;
  v445 = &v444;
  v446 = sizeof(iree_vm_ref_t);
  memset(v445, 0, v446);
  iree_vm_ref_assign(v33, v445);
  ;
  v448 = &v447;
  v449 = sizeof(iree_vm_ref_t);
  memset(v448, 0, v449);
  iree_vm_ref_assign(v27, v448);
  v450 = module_call_0riiirII_r_import_shim(v1, v443, v445, v8, v11, v12, v448, v13, v14, v36);
  v451 = (bool) v450;
  v452 = vm_cmp_nz_i32(v451);
  v453 = (bool) v452;
  if (v453) {
  v595 = v450;
  goto label44;
  } else {
  goto label31;
  }
  label31:
  v454 = vm_cmp_nz_ref(v36);
  v455 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v456 = EMITC_ARRAY_ELEMENT_ADDRESS(v455, 6);
  ;
  v458 = &v457;
  v459 = sizeof(iree_vm_type_def_t);
  memset(v458, 0, v459);
  v460 = iree_make_cstring_view("hal.executable");
  v461 = iree_vm_ref_lookup_registered_type(v460);
  v462 = EMITC_STRUCT_PTR_MEMBER(v461, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v457, ref_type, v462);
  v463 = EMITC_STRUCT_PTR_MEMBER(v458, ref_type);
  v464 = iree_vm_ref_retain_or_move_checked(false, v24, v463, v456);
  v465 = (bool) v464;
  v466 = vm_cmp_nz_i32(v465);
  v467 = (bool) v466;
  if (v467) {
  v595 = v464;
  goto label44;
  } else {
  goto label32;
  }
  label32:
  v468 = vm_cmp_nz_i32(v454);
  v469 = (bool) v468;
  if (v469) {
  v593 = v21;
  v594 = v36;
  goto label41;
  } else {
  goto label33;
  }
  label33:
  v470 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v471 = EMITC_ARRAY_ELEMENT_ADDRESS(v470, 2);
  ;
  v473 = &v472;
  v474 = sizeof(iree_vm_ref_t);
  memset(v473, 0, v474);
  iree_vm_ref_assign(v33, v473);
  ;
  v476 = &v475;
  v477 = sizeof(iree_vm_ref_t);
  memset(v476, 0, v477);
  iree_vm_ref_assign(v27, v476);
  v478 = module_call_0riirII_r_import_shim(v1, v471, v473, v15, v16, v476, v13, v14, v24);
  v479 = (bool) v478;
  v480 = vm_cmp_nz_i32(v479);
  v481 = (bool) v480;
  if (v481) {
  v595 = v478;
  goto label44;
  } else {
  goto label34;
  }
  label34:
  v482 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v483 = EMITC_ARRAY_ELEMENT_ADDRESS(v482, 1);
  ;
  v485 = &v484;
  v486 = sizeof(iree_vm_ref_t);
  memset(v485, 0, v486);
  iree_vm_ref_assign(v33, v485);
  v487 = module_call_0riiI_r_import_shim(v1, v483, v485, v11, v12, v14, v27);
  v488 = (bool) v487;
  v489 = vm_cmp_nz_i32(v488);
  v490 = (bool) v489;
  if (v490) {
  v595 = v487;
  goto label44;
  } else {
  goto label35;
  }
  label35:
  v491 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v492 = EMITC_ARRAY_ELEMENT_ADDRESS(v491, 8);
  ;
  v494 = &v493;
  v495 = sizeof(iree_vm_ref_t);
  memset(v494, 0, v495);
  iree_vm_ref_assign(v30, v494);
  v496 = module_call_0riii_r_import_shim(v1, v492, v494, v17, v8, v7, v33);
  v497 = (bool) v496;
  v498 = vm_cmp_nz_i32(v497);
  v499 = (bool) v498;
  if (v499) {
  v595 = v496;
  goto label44;
  } else {
  goto label36;
  }
  label36:
  v500 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v501 = EMITC_ARRAY_ELEMENT_ADDRESS(v500, 12);
  ;
  v503 = &v502;
  v504 = sizeof(iree_vm_ref_t);
  memset(v503, 0, v504);
  iree_vm_ref_assign(v33, v503);
  ;
  v506 = &v505;
  v507 = sizeof(iree_vm_ref_t);
  memset(v506, 0, v507);
  iree_vm_ref_assign(v24, v506);
  ;
  v509 = &v508;
  v510 = sizeof(iree_vm_ref_t);
  memset(v509, 0, v510);
  iree_vm_ref_assign(v27, v509);
  v511 = module_call_0rrIrII_v_import_shim(v1, v501, v503, v506, v13, v509, v13, v14);
  v512 = (bool) v511;
  v513 = vm_cmp_nz_i32(v512);
  v514 = (bool) v513;
  if (v514) {
  v595 = v511;
  goto label44;
  } else {
  goto label37;
  }
  label37:
  v515 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v516 = EMITC_ARRAY_ELEMENT_ADDRESS(v515, 10);
  ;
  v518 = &v517;
  v519 = sizeof(iree_vm_ref_t);
  memset(v518, 0, v519);
  iree_vm_ref_assign(v33, v518);
  v520 = module_call_0riii_v_import_shim(v1, v516, v518, v18, v19, v7);
  v521 = (bool) v520;
  v522 = vm_cmp_nz_i32(v521);
  v523 = (bool) v522;
  if (v523) {
  v595 = v520;
  goto label44;
  } else {
  goto label38;
  }
  label38:
  v524 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v525 = EMITC_ARRAY_ELEMENT_ADDRESS(v524, 9);
  ;
  v527 = &v526;
  v528 = sizeof(iree_vm_ref_t);
  memset(v527, 0, v528);
  iree_vm_ref_assign(v33, v527);
  v529 = module_call_0r_v_import_shim(v1, v525, v527);
  v530 = (bool) v529;
  v531 = vm_cmp_nz_i32(v530);
  v532 = (bool) v531;
  if (v532) {
  v595 = v529;
  goto label44;
  } else {
  goto label39;
  }
  label39:
  v533 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v534 = EMITC_ARRAY_ELEMENT_ADDRESS(v533, 23);
  ;
  v536 = &v535;
  v537 = sizeof(iree_vm_ref_t);
  memset(v536, 0, v537);
  iree_vm_ref_assign(v30, v536);
  v538 = module_call_0ri_r_import_shim(v1, v534, v536, v7, v24);
  v539 = (bool) v538;
  v540 = vm_cmp_nz_i32(v539);
  v541 = (bool) v540;
  if (v541) {
  v595 = v538;
  goto label44;
  } else {
  goto label40;
  }
  label40:
  v542 = EMITC_STRUCT_PTR_MEMBER(v3, imports);
  v543 = EMITC_ARRAY_ELEMENT_ADDRESS(v542, 21);
  ;
  v545 = &v544;
  v546 = sizeof(iree_vm_ref_t);
  memset(v545, 0, v546);
  iree_vm_ref_assign(v30, v545);
  ;
  v548 = &v547;
  v549 = sizeof(iree_vm_ref_t);
  memset(v548, 0, v549);
  iree_vm_ref_assign(v21, v548);
  ;
  v551 = &v550;
  v552 = sizeof(iree_vm_ref_t);
  memset(v551, 0, v552);
  iree_vm_ref_assign(v24, v551);
  ;
  v554 = &v553;
  v555 = sizeof(iree_vm_ref_t);
  memset(v554, 0, v555);
  iree_vm_ref_assign(v33, v554);
  v556 = module_call_0rIrrCrD_v_1_import_shim(v1, v543, v545, v6, v548, v551, v8, v554);
  v557 = (bool) v556;
  v558 = vm_cmp_nz_i32(v557);
  v559 = (bool) v558;
  if (v559) {
  v595 = v556;
  goto label44;
  } else {
  v593 = v24;
  v594 = v27;
  goto label41;
  }
  label41:
  ;
  v561 = &v560;
  v562 = sizeof(iree_vm_ref_t);
  memset(v561, 0, v562);
  iree_vm_ref_retain(v593, v561);
  ;
  v564 = &v563;
  v565 = sizeof(iree_vm_ref_t);
  memset(v564, 0, v565);
  iree_vm_ref_retain(v594, v564);
  iree_vm_ref_assign(v561, v24);
  iree_vm_ref_assign(v564, v21);
  v566 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v567 = EMITC_ARRAY_ELEMENT_ADDRESS(v566, 8);
  ;
  v569 = &v568;
  v570 = sizeof(iree_vm_type_def_t);
  memset(v569, 0, v570);
  v571 = iree_make_cstring_view("hal.buffer");
  v572 = iree_vm_ref_lookup_registered_type(v571);
  v573 = EMITC_STRUCT_PTR_MEMBER(v572, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v568, ref_type, v573);
  v574 = EMITC_STRUCT_PTR_MEMBER(v569, ref_type);
  v575 = iree_vm_ref_retain_or_move_checked(false, v21, v574, v567);
  v576 = (bool) v575;
  v577 = vm_cmp_nz_i32(v576);
  v578 = (bool) v577;
  if (v578) {
  v595 = v575;
  goto label44;
  } else {
  goto label42;
  }
  label42:
  v579 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v580 = EMITC_ARRAY_ELEMENT_ADDRESS(v579, 7);
  ;
  v582 = &v581;
  v583 = sizeof(iree_vm_type_def_t);
  memset(v582, 0, v583);
  v584 = iree_make_cstring_view("hal.fence");
  v585 = iree_vm_ref_lookup_registered_type(v584);
  v586 = EMITC_STRUCT_PTR_MEMBER(v585, type);
  EMITC_STRUCT_MEMBER_ASSIGN(v581, ref_type, v586);
  v587 = EMITC_STRUCT_PTR_MEMBER(v582, ref_type);
  v588 = iree_vm_ref_retain_or_move_checked(false, v24, v587, v580);
  v589 = (bool) v588;
  v590 = vm_cmp_nz_i32(v589);
  v591 = (bool) v590;
  if (v591) {
  v595 = v588;
  goto label44;
  } else {
  goto label43;
  }
  label43:
  iree_vm_ref_release(v21);
  iree_vm_ref_release(v42);
  iree_vm_ref_release(v27);
  iree_vm_ref_release(v48);
  iree_vm_ref_release(v33);
  iree_vm_ref_release(v39);
  iree_vm_ref_release(v24);
  iree_vm_ref_release(v45);
  iree_vm_ref_release(v30);
  iree_vm_ref_release(v51);
  iree_vm_ref_release(v36);
  v592 = iree_ok_status();
  return v592;
  label44:
  iree_vm_ref_release(v21);
  iree_vm_ref_release(v42);
  iree_vm_ref_release(v27);
  iree_vm_ref_release(v48);
  iree_vm_ref_release(v33);
  iree_vm_ref_release(v39);
  iree_vm_ref_release(v24);
  iree_vm_ref_release(v45);
  iree_vm_ref_release(v30);
  iree_vm_ref_release(v51);
  iree_vm_ref_release(v36);
  return v595;
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
  const uint8_t* v40;
  void* v41;
  iree_host_size_t v42;
  iree_byte_span_t v43;
  iree_allocator_t v44;
  iree_vm_buffer_t* v45;
  iree_vm_buffer_t* v46;
  iree_vm_ref_t* v47;
  iree_vm_ref_t* v48;
  iree_host_size_t v49;
  iree_vm_ref_t* v50;
  iree_host_size_t v51;
  iree_vm_ref_t* v52;
  iree_host_size_t v53;
  iree_vm_ref_t* v54;
  iree_host_size_t v55;
  iree_vm_ref_t* v56;
  iree_host_size_t v57;
  iree_vm_ref_t* v58;
  iree_host_size_t v59;
  iree_vm_ref_t* v60;
  iree_host_size_t v61;
  iree_vm_ref_t* v62;
  iree_host_size_t v63;
  iree_vm_ref_t* v64;
  iree_host_size_t v65;
  iree_vm_module_state_t* v66;
  iree_status_t v67;
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
  v12 = module_ecg_small_fp32_linked_llvm_cpu_static;
  v13 = (void*) v12;
  v14 = sizeof(module_ecg_small_fp32_linked_llvm_cpu_static);
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
  v33 = module__const;
  v34 = (void*) v33;
  v35 = sizeof(module__const);
  v36 = iree_make_byte_span(v34, v35);
  v37 = iree_allocator_null();
  v38 = EMITC_STRUCT_PTR_MEMBER(v4, rodata_buffers);
  v39 = EMITC_ARRAY_ELEMENT_ADDRESS(v38, 3);
  iree_vm_buffer_initialize(IREE_VM_BUFFER_ACCESS_ORIGIN_MODULE, v36, v37, v39);
  v40 = module__utf8_tensor_3C6209B4FD120BDC;
  v41 = (void*) v40;
  v42 = sizeof(module__utf8_tensor_3C6209B4FD120BDC);
  v43 = iree_make_byte_span(v41, v42);
  v44 = iree_allocator_null();
  v45 = EMITC_STRUCT_PTR_MEMBER(v4, rodata_buffers);
  v46 = EMITC_ARRAY_ELEMENT_ADDRESS(v45, 4);
  iree_vm_buffer_initialize(IREE_VM_BUFFER_ACCESS_ORIGIN_MODULE, v43, v44, v46);
  v47 = EMITC_STRUCT_PTR_MEMBER(v4, refs);
  v48 = EMITC_ARRAY_ELEMENT_ADDRESS(v47, 0);
  v49 = sizeof(iree_vm_ref_t);
  memset(v48, 0, v49);
  v50 = EMITC_ARRAY_ELEMENT_ADDRESS(v47, 1);
  v51 = sizeof(iree_vm_ref_t);
  memset(v50, 0, v51);
  v52 = EMITC_ARRAY_ELEMENT_ADDRESS(v47, 2);
  v53 = sizeof(iree_vm_ref_t);
  memset(v52, 0, v53);
  v54 = EMITC_ARRAY_ELEMENT_ADDRESS(v47, 3);
  v55 = sizeof(iree_vm_ref_t);
  memset(v54, 0, v55);
  v56 = EMITC_ARRAY_ELEMENT_ADDRESS(v47, 4);
  v57 = sizeof(iree_vm_ref_t);
  memset(v56, 0, v57);
  v58 = EMITC_ARRAY_ELEMENT_ADDRESS(v47, 5);
  v59 = sizeof(iree_vm_ref_t);
  memset(v58, 0, v59);
  v60 = EMITC_ARRAY_ELEMENT_ADDRESS(v47, 6);
  v61 = sizeof(iree_vm_ref_t);
  memset(v60, 0, v61);
  v62 = EMITC_ARRAY_ELEMENT_ADDRESS(v47, 7);
  v63 = sizeof(iree_vm_ref_t);
  memset(v62, 0, v63);
  v64 = EMITC_ARRAY_ELEMENT_ADDRESS(v47, 8);
  v65 = sizeof(iree_vm_ref_t);
  memset(v64, 0, v65);
  v66 = (iree_vm_module_state_t*) v4;
  EMITC_DEREF_ASSIGN_VALUE(v3, v66);
  v67 = iree_ok_status();
  return v67;
  label3:
  return v8;
}

static void module_free_state(void* v1, iree_vm_module_state_t* v2) {
  module_state_t* v3;
  iree_vm_ref_t* v4;
  iree_vm_ref_t* v5;
  iree_vm_ref_t* v6;
  iree_vm_ref_t* v7;
  iree_vm_ref_t* v8;
  iree_vm_ref_t* v9;
  iree_vm_ref_t* v10;
  iree_vm_ref_t* v11;
  iree_vm_ref_t* v12;
  iree_vm_ref_t* v13;
  iree_allocator_t v14;
  v3 = (module_state_t*) v2;
  v4 = EMITC_STRUCT_PTR_MEMBER(v3, refs);
  v5 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 0);
  iree_vm_ref_release(v5);
  v6 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 1);
  iree_vm_ref_release(v6);
  v7 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 2);
  iree_vm_ref_release(v7);
  v8 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 3);
  iree_vm_ref_release(v8);
  v9 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 4);
  iree_vm_ref_release(v9);
  v10 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 5);
  iree_vm_ref_release(v10);
  v11 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 6);
  iree_vm_ref_release(v11);
  v12 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 7);
  iree_vm_ref_release(v12);
  v13 = EMITC_ARRAY_ELEMENT_ADDRESS(v4, 8);
  iree_vm_ref_release(v13);
  v14 = EMITC_STRUCT_PTR_MEMBER(v3, allocator);
  iree_allocator_free(v14, v3);
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
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.allocator.allocate.initialized", 34}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.allocator.map.byte_buffer", 29}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.buffer.assert", 17}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.buffer_view.create", 22}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.buffer_view.assert", 22}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.buffer_view.buffer", 22}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.create", 25}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.finalize", 27}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.execution_barrier", 36}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.fill_buffer", 30}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.copy_buffer", 30}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.push_constants", 33}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.push_descriptor_set", 38}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.command_buffer.dispatch", 27}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.descriptor_set_layout.create", 32}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.device.allocator", 20}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.device.query.i64", 20}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.device.queue.alloca", 23}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.device.queue.dealloca", 25}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.device.queue.execute", 24}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.executable.create", 21}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.fence.create", 16}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.fence.await", 15}},
{IREE_VM_NATIVE_IMPORT_REQUIRED, {"hal.pipeline_layout.create", 26}},
};

static const iree_vm_native_export_descriptor_t module_exports_[] = {
{{"__init", 6}, {"0v_v", 4}, 0, NULL},
{{"main", 4}, {"0rrrr_rrrrrrrr", 14}, 0, NULL},
};

static const iree_vm_native_function_ptr_t module_funcs_[] = {
{(iree_vm_native_function_shim_t)iree_emitc_shim, (iree_vm_native_function_target_t)module___init_export_shim},
{(iree_vm_native_function_shim_t)iree_emitc_shim, (iree_vm_native_function_target_t)module_main_export_shim},
};

static const iree_vm_native_module_descriptor_t module_descriptor_ = {
{"module", 6},
0,
0,
NULL,
1,
module_dependencies_,
26,
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
