//
// Created by Blake Tullysmith on 12/2/24.
//

#include <stdio.h>
#include <stdlib.h>

#include "tree_sort.h"

// Node structure for the binary tree
typedef struct TreeNode {
  int value;
  struct TreeNode* left;
  struct TreeNode* right;
} TreeNode;

// Function prototypes
TreeNode* create_node(int value);
TreeNode* insert(TreeNode* root, int value);
void inorder_traversal(TreeNode* root, int* array, int* index);
void free_tree(TreeNode* root);

unsigned int hash_function(int key);
void hash_insert(HashNode* hash_table[], int key, int left_inc, int right_inc);
void print_hash_table(HashNode* hash_table[]);
void score_hash_table(HashNode* hash_table[]);

// Function to create a new tree node
TreeNode* create_node(int value) {
  TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
  if (node == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return NULL;
  }
  node->value = value;
  node->left = NULL;
  node->right = NULL;
  return node;
}

// Function to insert a value into the binary tree
TreeNode* insert(TreeNode* root, int value) {
  if (root == NULL) {
    return create_node(value);
  }
  if (value < root->value) {
    root->left = insert(root->left, value);
  } else {
    root->right = insert(root->right, value);
  }
  return root;
}

// Function to perform an in-order traversal and fill an array with sorted values
void inorder_traversal(TreeNode* root, int* array, int* index) {
  if (root != NULL) {
    inorder_traversal(root->left, array, index);
    array[(*index)++] = root->value;
    inorder_traversal(root->right, array, index);
  }
}

// Function to free the binary tree
void free_tree(TreeNode* root) {
  if (root != NULL) {
    free_tree(root->left);
    free_tree(root->right);
    free(root);
  }
}

// Hash function
unsigned int hash_function(int key) {
  return abs(key) % HASH_TABLE_SIZE;
}

// Function to insert or update a key in the hash table
void hash_insert(HashNode* hash_table[], int key, int left_inc, int right_inc) {
  unsigned int index = hash_function(key);
  HashNode* current = hash_table[index];

  while (current != NULL) {
    if (current->key == key) {
      current->left_count += left_inc;
      current->right_count += right_inc;
      return;
    }
    current = current->next;
  }

  // Create a new hash node
  HashNode* new_node = (HashNode*)malloc(sizeof(HashNode));
  if (new_node == NULL) {
    fprintf(stderr, "Memory allocation failed for hash node\n");
    return;
  }
  new_node->key = key;
  new_node->left_count = left_inc;
  new_node->right_count = right_inc;
  new_node->next = hash_table[index];
  hash_table[index] = new_node;
}

// Function to print the hash table
void print_hash_table(HashNode* hash_table[]) {
  printf("Hash Table:\n");
  for (int i = 0; i < HASH_TABLE_SIZE; i++) {
    HashNode* current = hash_table[i];
    while (current != NULL) {
      printf("Key: %d, Left Count: %d, Right Count: %d\n", current->key, current->left_count, current->right_count);
      current = current->next;
    }
  }
}


// Function to get similarity score
void score_hash_table(HashNode* hash_table[]) {
  int similarity_score = 0;

  for (int i = 0; i < HASH_TABLE_SIZE; i++) {
    HashNode* current = hash_table[i];
    while (current != NULL) {
      if (current->left_count > 0 && current->right_count > 0) {
        similarity_score += current->key * current->right_count * current->left_count;
      }

      current = current->next;
    }
  }

  printf("Similarity Score: %d\n", similarity_score);
}

// Function to free the hash table
void free_hash_table(HashNode* hash_table[]) {
  for (int i = 0; i < HASH_TABLE_SIZE; i++) {
    HashNode* current = hash_table[i];
    while (current != NULL) {
      HashNode* temp = current;
      current = current->next;
      free(temp);
    }
  }
}

// Function to process the file and populate the sorted arrays and hash table
int load_and_sort_arrays(const char* filename, int** left_list, int** right_list, HashNode* hash_table[]) {
  FILE* file = fopen(filename, "r");
  if (file == NULL) {
    fprintf(stderr, "Failed to open file: %s\n", filename);
    return -1;
  }

  TreeNode* left_tree = NULL;
  TreeNode* right_tree = NULL;
  int size = 0;
  int left_value, right_value;

  // Process the file and build the trees
  while (fscanf(file, "%d %d", &left_value, &right_value) == 2) {
    left_tree = insert(left_tree, left_value);
    right_tree = insert(right_tree, right_value);
    hash_insert(hash_table, left_value, 1, 0);
    hash_insert(hash_table, right_value, 0, 1);
    size++;
  }
  fclose(file);

  // Allocate arrays for sorted values
  *left_list = (int*)malloc(size * sizeof(int));
  *right_list = (int*)malloc(size * sizeof(int));
  if (*left_list == NULL || *right_list == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    free_tree(left_tree);
    free_tree(right_tree);
    return -1;
  }

  // Extract sorted values from the trees
  int index = 0;
  inorder_traversal(left_tree, *left_list, &index);

  index = 0;
  inorder_traversal(right_tree, *right_list, &index);

  // Free the trees
  free_tree(left_tree);
  free_tree(right_tree);

  return size;
}

// Function to process arrays and calculate distances
void process_arrays(int* left_list, int* right_list, int size, HashNode* hash_table[]) {
  int* distance_list = malloc(size * sizeof(int));
  if (distance_list == NULL) {
    fprintf(stderr, "Memory allocation failed\n");
    return;
  }

  // Calculate distances and accumulate their sum
  int accum = 0;
  printf("Distance list: ");
  for (int i = 0; i < size; i++) {
    distance_list[i] = abs(left_list[i] - right_list[i]);
    accum += distance_list[i];
    printf("%d ", distance_list[i]);
  }
  printf("\n");

  // Print accumulated sum
  printf("Accumulated distance: %d\n", accum);

  // Print the hash table
  // print_hash_table(hash_table);

  score_hash_table(hash_table);

  // Free allocated memory
  free(distance_list);
}

