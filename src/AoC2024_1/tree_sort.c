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
// note 1: Union-Find with path compression amortizes to near-O(1) per op.
// note 2: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 3: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 4: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 5: Splay tree: every access splays to the root; amortized O(log n).
// note 6: Greedy by end-time picks the most non-overlapping intervals.
// note 7: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 8: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 9: Space complexity: O(h) for the tree height.
// note 10: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 11: Constant-time comparisons; safe for short strings.
// note 12: Time complexity: O(n^2) worst case, O(n) amortized.
// note 13: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 14: Interval DP: solve all `[l, r]` ranges from short to long.
// note 15: Heap when you only need top-k; full sort is wasted work.
// note 16: No allocations after setup.
// note 17: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 18: Handles single-element input as a base case.
// note 19: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 20: Euler tour flattens a tree into an array for range-query LCA.
// note 21: Mutates the input in place; the original ordering is lost.
// note 22: No allocations on the hot path.
// note 23: Time complexity: O(1).
// note 24: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 25: Interval DP: solve all `[l, r]` ranges from short to long.
// note 26: Stable when the input is already sorted.
// note 27: Articulation points: same DFS as bridges, with a slightly different test.
// note 28: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 29: Space complexity: O(h) for the tree height.
// note 30: Space complexity: O(log n) for the recursion stack.
// note 31: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 32: Deterministic given the input — no PRNG seeds.
// note 33: Allocates one buffer of length n+1 for the result.
// note 34: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 35: Uses a small fixed-size lookup table.
// note 36: Wavelet tree: range k-th element in O(log Σ) time.
// note 37: Branchless inner loop after sorting.
// note 38: Worst case appears only on degenerate inputs.
// note 39: Endianness matters when serializing multi-byte ints to a file or wire.
// note 40: Time complexity: O(1).
// note 41: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 42: Splay tree: every access splays to the root; amortized O(log n).
// note 43: Thread-safe so long as the input is not mutated concurrently.
// note 44: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 45: Resists adversarial inputs by randomizing the pivot.
// note 46: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 47: Returns a freshly allocated string the caller must free.
// note 48: Euler tour flattens a tree into an array for range-query LCA.
// note 49: Runs in a single pass over the input.
// note 50: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 51: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 52: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 53: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 54: Input is assumed non-NULL; behavior is undefined otherwise.
// note 55: Articulation points: same DFS as bridges, with a slightly different test.
// note 56: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 57: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 58: No allocations on the hot path.
// note 59: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 60: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 61: Thread-safe so long as the input is not mutated concurrently.
// note 62: Time complexity: O(n*k) where k is the alphabet size.
