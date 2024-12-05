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

  FILE *file = fopen(argv[1], "r");
  if (file == NULL) {
    fprintf(stderr, "Failed to open file: %s\n", argv[0]);
    return 1;
  }

  Program* program = create_program();
  tokenize(file, program);

  start_program(program);

  int accum = 0;

  do {
    accum += get_next_result(program);
  } while(!program_is_at_start(program));

  destroy_program(&program);
  fclose(file);

  printf("Result: %d\n", accum);

}