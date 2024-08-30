#!/bin/bash
#
# Copyright 2021 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# bin_file="https://dl.antmicro.com/projects/renode/uartlite--custom_uart_demo--zephyr.elf-s_184340-129eb92404f437a466cd8700f6743b1c5b0da912"
# (cd "${ROOTDIR}" && ./build/renode/renode -e "\$bin=@${bin_file}; i @sim/config/springbok_verilated.resc; \
# ${command} sysbus.vec_controlblock WriteDoubleWord 0xc 0" \
#     --disable-xwt --console)

cd "${ROOTDIR}" && ./build/renode/renode

# /home/euntae/projects/iree-rv32-springbok-legacy/sim/config/springbok_verilated.resc