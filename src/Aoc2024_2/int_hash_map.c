//
// Created by Blake Tullysmith on 12/2/24.
//

#include <stdlib.h>

#ifndef __APPLE__
#include <malloc.h>
#endif

#include <memory.h>

#include "int_hash_map.h"


void map_init(HashMapNode** map) {
  for(int index = 0; index < MAP_SIZE; index++) {
    map[index] = NULL;
  }
}

void map_destroy(HashMapNode** map) {
  for (int index = 0; index < MAP_SIZE; index++) {
    HashMapNode* current = map[index];

    while(current != NULL) {
      HashMapNode* next = current->next;
      free(current);
      current = next;
    }
  }
}

int map_hash(int val) {
  return val % MAP_SIZE;
}

void map_insert(HashMapNode** map, int val) {
  int index = map_hash(val);

  HashMapNode* new_node = malloc(sizeof(HashMapNode));
  new_node->val = val;

  if (map[index] != NULL) {
    new_node->next = map[index];
  }

  map[index] = new_node;
}

int map_has_val(HashMapNode** map, int val) {
  int index = map_hash(val);
  int result = 0;

  HashMapNode* current = map[index];

  while (current != NULL && result == 0) {
    if (current->val == val) {
      result = 1;
    }

    current = current->next;
  }

  return result;
}