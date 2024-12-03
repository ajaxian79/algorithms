//
// Created by Blake Tullysmith on 12/2/24.
//

#ifndef ALGORITHMS_INT_HASH_MAP_H
#define ALGORITHMS_INT_HASH_MAP_H

/*
 * Crude implementation of a modulo hash map for uniqueness checking
 */

#define MAP_SIZE 40

typedef struct HashMapNode {
  int val;
  struct HashMapNode* next;
} HashMapNode;

void map_init(HashMapNode** map);
void map_destroy(HashMapNode** map);
void map_insert(HashMapNode** map, int val);
int map_has_val(HashMapNode** map, int val);

#endif //ALGORITHMS_INT_HASH_MAP_H
