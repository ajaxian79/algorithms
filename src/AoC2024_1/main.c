//
// Created by Blake Tullysmith on 12/2/24.
//

#include <stdio.h>
#include <stdlib.h>

#ifndef __APPLE__
#include <malloc.h>
#endif

#include "tree_sort.h"

int main(int argc, char* argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
    return 1;
  }

  int* left_list = NULL;
  int* right_list = NULL;
  HashNode* hash_table[HASH_TABLE_SIZE] = {0};

  int size = load_and_sort_arrays(argv[1], &left_list, &right_list, hash_table);
  if (size < 0) {
    return 1;
  }

  process_arrays(left_list, right_list, size, hash_table);

  free(left_list);
  free(right_list);
  free_hash_table(hash_table);

  return 0;
}
