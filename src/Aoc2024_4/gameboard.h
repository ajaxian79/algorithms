//
// Created by Blake Tullysmith on 12/5/24.
//

#ifndef ALGORITHMS_GAMEBOARD_H
#define ALGORITHMS_GAMEBOARD_H

#include <stdio.h>

typedef struct Gameboard {
  char* board;
  size_t length;
} Gameboard;

Gameboard* loadGameboard(FILE* file);
int getInstances(Gameboard* gameboard);
void freeGameboard(Gameboard** gameboard);

#endif //ALGORITHMS_GAMEBOARD_H
