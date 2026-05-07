//
// Created by ajaxian on 05/06/26.
//

#ifndef ALGORITHMS_MIDDLE_LIST_H
#define ALGORITHMS_MIDDLE_LIST_H

#include <stddef.h>

// Singly-linked list of ints. Unique tag so this header coexists with the
// other linked-list problems in the same translation unit.
typedef struct MLNode {
    int val;
    struct MLNode* next;
} MLNode;

// Build a list whose values come from `a[0..n)`. NULL if n == 0.
MLNode* ml_from_array(const int* a, int n);

// Free every node reachable from `head`.
void ml_free(MLNode* head);

// Slow/fast pointer middle: when `fast` falls off the end, `slow` is at the
// middle. For even-length lists this returns the second of the two middle
// nodes (the LeetCode convention).
MLNode* middle_node(MLNode* head);

#endif //ALGORITHMS_MIDDLE_LIST_H
