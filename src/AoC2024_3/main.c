//
// Created by Blake Tullysmith on 12/3/24.
//

#include <stdio.h>

#include "scanner.h"
#include "parser.h"
#include "program.h"
#include "logger.h"

#define EXECUTION_LOG "execution"

int main(int argc, char* argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
    return 1;
  }

  FILE *file = fopen(argv[1], "rb");
  if (file == NULL) {
    fprintf(stderr, "Failed to open file: %s\n", argv[0]);
    return 1;
  }

  Program* program = create_program();
  tokenize(file, program);

  start_program(program);

  int accum = 0;
  int result;
  int instructions_executed = 0;
  blog_start(EXECUTION_LOG, "Executing...\n");

  do {
    blog(EXECUTION_LOG, "%d:\t", instructions_executed++);

    result = get_next_result(program);

    blog(EXECUTION_LOG, "\t\t\t\t\t\t\t; Instruction Result: %d\n", result);

    accum += result;
  } while(!program_is_at_start(program));

  destroy_program(&program);
  fclose(file);

  printf("Result: %d\n", accum);

}