//
// Created by Blake Tullysmith on 12/3/24.
//

#include <stdio.h>

#include "scanner.h"

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
  FILE* program_log = fopen("execution.log", "w");
  fprintf(program_log, "Executing...\n");
  fflush(program_log);
  fclose(program_log);

  do {
    program_log = fopen("execution.log", "a");
    fprintf(program_log, "%d:\t", instructions_executed++);
    fflush(program_log);
    fclose(program_log);

    result = get_next_result(program);

    program_log = fopen("execution.log", "a");
    fprintf(program_log, "\t\t\t\t\t\t\t; Instruction Result: %d\n", result);
    fflush(program_log);
    fclose(program_log);

    accum += result;
  } while(!program_is_at_start(program));

  destroy_program(&program);
  fclose(file);

  printf("Result: %d\n", accum);

}