//
// Created by ajaxian on 05/06/26.
//

#ifndef ALGORITHMS_DLL_H
#define ALGORITHMS_DLL_H

#include <stddef.h>

// Doubly-linked list of ints with a sentinel head/tail pair. Sentinels
// remove every NULL-check on insertion and deletion: the list is never
// "empty" from the perspective of an internal node, only from the user's.
//
// Local to this problem; uses a unique tag so it does not collide with
// the singly-linked node tags from other problems in the same TU.
typedef struct DLLNode {
    int val;
    struct DLLNode* prev;
    struct DLLNode* next;
} DLLNode;

typedef struct DLL {
    DLLNode head;  // sentinel
    DLLNode tail;  // sentinel
    int size;
} DLL;

// Initialize an already-allocated list. Wires the sentinels and zeros the
// size.
void dll_init(DLL* l);

// Free every real node. The DLL struct itself is the caller's memory.
void dll_clear(DLL* l);

int dll_size(const DLL* l);

// Insert at the front (after head sentinel).
int dll_push_front(DLL* l, int v);

// Insert at the back (before tail sentinel).
int dll_push_back(DLL* l, int v);

// Pop and return the front value. Sets `*ok = 0` and returns 0 if empty.
int dll_pop_front(DLL* l, int* ok);

// Pop and return the back value. Sets `*ok = 0` and returns 0 if empty.
int dll_pop_back(DLL* l, int* ok);

// Find the first node with value `v` and unlink it. Returns 1 on
// success, 0 if not found.
int dll_remove_first(DLL* l, int v);

// Walk into `out[]` up to `cap` values from front to back. Returns the
// number written.
int dll_to_array(const DLL* l, int* out, int cap);

#endif //ALGORITHMS_DLL_H
