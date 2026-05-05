//
// Created by ajaxian on 05/04/26.
//

#ifndef ALGORITHMS_REVERSE_LIST_H
#define ALGORITHMS_REVERSE_LIST_H

#include <stddef.h>

// Singly-linked list of ints. Local to this problem; uses a unique tag so
// tests/main.c can include it alongside other linked-list problems without
// hitting a struct-redefinition error.
typedef struct RLNode {
    int val;
    struct RLNode* next;
} RLNode;

// Build a list whose values come from `a[0..n)`, in order. NULL if n == 0.
RLNode* rl_from_array(const int* a, int n);

// Free every node reachable from `head`.
void rl_free(RLNode* head);

// Copy up to `cap` values from the list into `out`; return how many were
// written.
int rl_to_array(const RLNode* head, int* out, int cap);

// Reverse the list in place and return the new head. Iterative pointer
// shuffle: prev/curr/next, no extra allocation.
RLNode* reverse_list(RLNode* head);

#endif //ALGORITHMS_REVERSE_LIST_H
