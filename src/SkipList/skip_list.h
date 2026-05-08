//
// Created by ajaxian on 05/07/26.
//

#ifndef ALGORITHMS_SKIP_LIST_H
#define ALGORITHMS_SKIP_LIST_H

#include <stddef.h>

// Probabilistic ordered set of distinct ints. Each node carries an array
// of forward pointers; a node with `level` forward pointers participates
// in lists at levels 0..level-1. Higher levels are exponentially sparser
// (each level appears with probability 1/2 of the level below), so
// search/insert run in O(log n) expected time.
//
// Used in some database engines as the in-memory write buffer (RocksDB,
// LevelDB) because it gives ordered iteration plus O(log n) lookups
// without the rebalancing of a tree.

#define SKIPLIST_MAX_LEVEL 16

typedef struct SkipNode {
    int key;
    int level;
    struct SkipNode** forward; // length == level
} SkipNode;

typedef struct SkipList {
    SkipNode* head;     // sentinel; level == SKIPLIST_MAX_LEVEL, key unused
    int level;          // current top level used (0-based: 0 means only base list)
    int size;
    unsigned int rng;
} SkipList;

// Initialize an already-allocated list with `seed` driving the level RNG
// (any non-zero seed is fine; 0 is replaced internally).
int skiplist_init(SkipList* l, unsigned int seed);

// Free every node including the sentinel-allocated forward array.
void skiplist_clear(SkipList* l);

// Insert `key`. Returns 1 if inserted, 0 if it was already present, -1
// on allocation failure.
int skiplist_insert(SkipList* l, int key);

// Returns 1 if `key` is present, 0 otherwise.
int skiplist_contains(const SkipList* l, int key);

int skiplist_size(const SkipList* l);

// In-order walk into `out`, up to `cap` entries. Returns the count.
int skiplist_to_array(const SkipList* l, int* out, int cap);

#endif //ALGORITHMS_SKIP_LIST_H
