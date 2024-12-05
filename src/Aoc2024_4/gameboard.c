//
// Created by Blake Tullysmith on 12/5/24.
//


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef __APPLE__
#include <malloc.h>
#endif

#include "gameboard.h"
#include "logger.h"

#define GAMEBOARD_LOG "gameboard"

int evaluate(Gameboard *gameboard, int x, int y);

int getBoardWidth(Gameboard* gameboard) {
  for(int width = 0; width < gameboard->length; width++) {
    if (gameboard->board[width] == '\n') {
      return width;
    }
  }

  return 0;
}

char getAt(Gameboard* gameboard, unsigned long x, unsigned long y) {
  unsigned long width = getBoardWidth(gameboard);
  unsigned long height = gameboard->length/width;

  if (x < width && y < height) {
    return gameboard->board[y*(width+1)+x];
  }

  return 0;
}

int getInstances(Gameboard* gameboard) {
  unsigned long width = getBoardWidth(gameboard);
  unsigned long height = gameboard->length/width;

  blog_start(GAMEBOARD_LOG, "Width: %d, Height: %d", width, height);

  int accum = 0;

  for(int y = 0; y < height; y++) {
    for (int x = 0; x < width; x++) {
      accum += evaluate(gameboard, x, y);
    }
  }

  return accum;
}


static char* match = "MAS"; //"XMAS";
static int numDirections = 8;
static int directions[] = {
    -1, -1, // Up-Left Diag
     1,  1, // Down-Right Diag
     1, -1, // Up-Right Diag
    -1,  1, // Down-Left Diag
};

int evaluate(Gameboard *gameboard, int x, int y) {
  int accum = 0;
  char cur = getAt(gameboard, x, y);

  if (cur == match[1]) {
    for(int currentDirection = 0; currentDirection < numDirections; currentDirection += 2) {
      int incX = directions[currentDirection];
      int incY = directions[currentDirection+1];

      int matches = 0;

      char prev = getAt(gameboard, x-incX, y-incY);
      char next = getAt(gameboard, x+incX, y+incY);

      if (prev == match[0] && next == match[2]) {
        matches = 1;
      }

      printf("Checking %c == %c at %d,%d\n", cur, match[1], x, y);
      printf("\tChecking %c == %c at %d,%d\n", prev, match[0], x-incX, y-incY);
      printf("\tChecking %c == %c at %d,%d\n", next, match[2], x+incX, y+incY);

      accum += matches;
    }
  }

  return accum == 2 ? 1 : 0;
}

void freeGameboard(Gameboard** gameboard) {
  free((*gameboard)->board);
  free(*gameboard);
  *gameboard = NULL;
}

Gameboard* loadGameboard(FILE* file) {
  if (!file) {
    blog(GAMEBOARD_LOG, "Invalid file pointer.\n");
    return NULL;
  }

  // Seek to the end of the file to determine its size
  if (fseek(file, 0, SEEK_END) != 0) {
    blog(GAMEBOARD_LOG, "Failed to seek end of file\n");
    return NULL;
  }

  long length = ftell(file);
  if (length < 0) {
    blog(GAMEBOARD_LOG, "Failed to get file length\n");
    return NULL;
  }

  // Return to the start of the file
  rewind(file);

  // Allocate memory for the file contents plus a null terminator
  char *buffer = (char *)malloc(length + 1);
  if (!buffer) {
    blog(GAMEBOARD_LOG, "Failed to allocate memory\n");
    return NULL;
  }

  // Read the file into the buffer
  size_t read_size = fread(buffer, 1, length, file);
  if (read_size != (size_t)length) {
    blog(GAMEBOARD_LOG, "Failed to read entire file\n");
    free(buffer);
    return NULL;
  }

  Gameboard* gameboard = malloc(sizeof(Gameboard));

  // Null-terminate the buffer
  buffer[length] = '\0';

  gameboard->board = buffer;

  // Set the output length
  gameboard->length = length;

  blog(GAMEBOARD_LOG, "Loaded File\n");

  return gameboard;
}