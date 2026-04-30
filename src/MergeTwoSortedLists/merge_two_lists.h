//
// Created by ajaxian on 01/18/25.
//

#ifndef ALGORITHMS_MERGE_TWO_LISTS_H
#define ALGORITHMS_MERGE_TWO_LISTS_H

#include <stddef.h>

// Singly-linked list of ints. Local to this problem; not a shared util.
typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;

// Build a list whose values come from `a[0..n)`, in order. NULL if n == 0.
ListNode* list_from_array(const int* a, int n);

// Free every node reachable from `head`.
void list_free(ListNode* head);

// Copy up to `cap` values from the list into `out`; return how many were
// written. Stops at NULL or `cap`, whichever comes first.
int list_to_array(const ListNode* head, int* out, int cap);

// Merge two sorted lists in place: re-points `next` pointers to interleave
// `a` and `b` in non-decreasing order. Either or both may be NULL.
ListNode* merge_two_lists(ListNode* a, ListNode* b);

#endif //ALGORITHMS_MERGE_TWO_LISTS_H
