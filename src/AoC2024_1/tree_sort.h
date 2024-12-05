//
// Created by Blake Tullysmith on 12/2/24.
//

#ifndef ALGORITHMS_TREE_SORT_H
#define ALGORITHMS_TREE_SORT_H

// Hash table node structure
typedef struct HashNode {
  int key;
  int left_count;
  int right_count;
  struct HashNode* next;
} HashNode;

// Function to load, sort, and populate arrays using binary trees
int load_and_sort_arrays(const char* filename, int** left_list, int** right_list, HashNode* hash_table[]);

// Function to process arrays and calculate distances
void process_arrays(int* left_list, int* right_list, int size, HashNode* hash_table[]);

#define HASH_TABLE_SIZE 101

void free_hash_table(HashNode* hash_table[]);

#endif //ALGORITHMS_TREE_SORT_H
