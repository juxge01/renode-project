/*
 * Copyright 2021 The CFU-Playground Authors
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

#include "proj_menu.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "cfu.h"
#include "menu.h"

namespace {

// Template Fn
void do_hello_world(void) { puts("Hello, DataLab!!!\n"); }

// Test template instruction
void do_exercise_cfu_op0(void) {
  // puts("\nExercise CFU Op0 - Read Operations\n");
  puts("\nExercise CFU Op0 - Read Operations\n");
  int count = 0;

  for (int a = -0x71234567; a < 0x68000000; a += 0x10012345) {
    for (int b = -0x7edcba98; b < 0x68000000; b += 0x10770077) {
      int cfu = cfu_op0(0, a, b);
      printf("READ >> a: %08x b:%08x, cfu= %08x\n", a, b, cfu);
      
      count++;
    } 
  } 
  printf("Performed %d comparisons", count);
}

void do_exercise_cfu_op1(void) {
  // puts("\nExercise CFU Op1 - Write Operations\n");
  puts("\nExercise CFU Op1 - Write Operations\n");
  int count = 0;

  for (int a = -0x71234567; a < 0x68000000; a += 0x10012345) {
    for (int b = -0x7edcba98; b < 0x68000000; b += 0x10770077) {
      int cfu = cfu_op1(0, a, b);
      printf("WRITE >> a: %08x b:%08x, cfu= %08x\n", a, b, cfu);
      
      count++;
    } 
  } 
  printf("Performed %d comparisons", count);
}

void do_exercise_cfu_op2(void) {
  // puts("\nExercise CFU Op2 - Read/Write/MAC Operations\n");
  puts("\nExercise CFU Op2 - MAC Operations\n");
  int count = 0;

  for (int a = -0x71234567; a < 0x68000000; a += 0x10012345) {
    for (int b = -0x7edcba98; b < 0x68000000; b += 0x10770077) {
      int cfu = cfu_op2(0, a, b);
      printf("MAC_OUT >> a: %08x b:%08x, cfu= %08x\n", a, b, cfu);
      
      count++;
    } 
  } 
  printf("Performed %d comparisons", count);
}

struct Menu MENU = {
    "Project Menu",
    "project",
    {
        MENU_ITEM('0', "exercise cfu op0", do_exercise_cfu_op0),
        MENU_ITEM('1', "exercise cfu op1", do_exercise_cfu_op1),
        MENU_ITEM('2', "exercise cfu op2", do_exercise_cfu_op2),
        MENU_ITEM('h', "say Hello", do_hello_world),
        MENU_END,
    },
};
};  // anonymous namespace

extern "C" void do_proj_menu() { menu_run(&MENU); }
