CMAKE_BIN="${CMAKE_BIN:-$(which cmake)}"
BUILD_RISCV_DIR="${BUILD_RISCV_DIR:-$ROOT_DIR/build/build-riscv}"

"${CMAKE_BIN?}" --build "${BUILD_RISCV_DIR?}"
