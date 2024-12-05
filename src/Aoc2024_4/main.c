//
// Created by Blake Tullysmith on 12/5/24.
//

#include <stdio.h>

#include "logger.h"
#include "gameboard.h"

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

  blog_start(EXECUTION_LOG, "Executing...\n");

  Gameboard* gameboard = loadGameboard(file);

  int instances = getInstances(gameboard);

  freeGameboard(&gameboard);

  printf("Instances: %d\n", instances);

}