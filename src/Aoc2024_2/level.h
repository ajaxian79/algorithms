//
// Created by Blake Tullysmith on 12/2/24.
//

#ifndef ALGORITHMS_LEVEL_H
#define ALGORITHMS_LEVEL_H

#include <stdio.h>

typedef struct Level {
  int value;
  struct Level* prev;
  struct Level* next;
  int end;
} Level;

Level* read_level(FILE* file);

#endif //ALGORITHMS_LEVEL_H
