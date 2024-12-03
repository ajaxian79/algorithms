//
// Created by Blake Tullysmith on 12/2/24.
//

#include <stdlib.h>

#ifndef __APPLE__
#include <malloc.h>
#endif

#include "level.h"

Level* read_level(FILE* file) {
  Level* level = malloc(sizeof(Level));

  level->prev = NULL;
  level->next = NULL;
  level->end = 0;
  char buffer[1024];
  char* endPtr;
  int cur = 0;

  int eol = 0;

  while(!feof(file)) {
    buffer[cur] = '\0';
    buffer[cur] = (char)fgetc(file);

    if (buffer[cur] < '0' || buffer[cur] > '9') {
      if (buffer[cur] == '\r' || buffer[cur] == '\n') {
        eol = 1;
      }

      buffer[cur] = '\0';
      break;
    }

    cur++;
  }

  level->value = (int)strtol(buffer, &endPtr, 10);

  if (eol || feof(file)) {
    level->end = 1;
  }

  return level;
}
