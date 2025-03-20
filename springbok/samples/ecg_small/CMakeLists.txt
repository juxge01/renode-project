#-------------------------------------------------------------------------------
# Build the mlir bytecode modules with iree-compile.
#-------------------------------------------------------------------------------

springbok_modules(
  NAME
    ecg_small_fp32
  SRC
    "ecg_small_fp32.tflite"
  C_IDENTIFIER
    "samples_ecg_small_fp32"
  FLAGS
    "-iree-input-type=tosa"
)

#-------------------------------------------------------------------------------
# Binaries to execute the IREE model input
#-------------------------------------------------------------------------------

# iree_model_input(
#   NAME
#     mobilenet_input
#   SHAPE
#     "1, 224, 224, 3"
#   SRC
#     "https://storage.googleapis.com/download.tensorflow.org/ \
#     example_images/YellowLabradorLooking_new.jpg"
# )

#-------------------------------------------------------------------------------
# Binaries to execute the MLIR bytecode modules
#-------------------------------------------------------------------------------
# *_bytecode_module_static_*
iree_cc_binary(
  NAME
    ecg_small_fp32_bytecode_static
  SRCS
    "ecg_small.c"
  DEPS
    ::ecg_small_fp32_bytecode_module_static_c
    ::ecg_small_fp32_bytecode_module_static_lib
    iree::vm::bytecode_module
    samples::util::util_static
  LINKOPTS
#    "LINKER:--defsym=__itcm_length__=1M"
    "LINKER:--defsym=__stack_size__=200K"
)
# *_c_module_static_*
iree_cc_binary(
  NAME
    ecg_small_fp32_emitc_static
  SRCS
    "ecg_small.c"
  DEPS
    ::ecg_small_fp32_c_module_static_emitc
    ::ecg_small_fp32_c_module_static_lib
    samples::util::util_static
  LINKOPTS
    "LINKER:--defsym=__stack_size__=200K"
  COPTS
    "-DBUILD_EMITC"
)
