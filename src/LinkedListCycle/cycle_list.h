//
// Created by ajaxian on 05/05/26.
//

#ifndef ALGORITHMS_CYCLE_LIST_H
#define ALGORITHMS_CYCLE_LIST_H

#include <stddef.h>

// Singly-linked list of ints. Unique tag so the header can sit alongside
// other linked-list problems without redefining `struct ListNode`.
typedef struct LLCNode {
    int val;
    struct LLCNode* next;
} LLCNode;

// Build a list whose values come from `a[0..n)`. NULL if n == 0.
LLCNode* llc_from_array(const int* a, int n);

// Free every node reachable from `head`. The caller MUST ensure the list
// is acyclic before calling — `llc_break_cycle` exists for that.
void llc_free(LLCNode* head);

// Splice the tail back into the list at index `at` (0-based). After this
// call the list has a cycle. Pass `at == -1` to leave the list acyclic.
void llc_make_cycle(LLCNode* head, int at);

// If a cycle exists, locate where the loop begins and snip it. Idempotent
// on acyclic input.
void llc_break_cycle(LLCNode* head);

// Floyd's tortoise-and-hare: returns 1 if the list contains a cycle, 0
// otherwise. NULL or one-node list returns 0.
int has_cycle(const LLCNode* head);

#endif //ALGORITHMS_CYCLE_LIST_H
