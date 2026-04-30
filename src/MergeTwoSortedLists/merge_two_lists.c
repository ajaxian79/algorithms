//
// Created by ajaxian on 01/18/25.
//

#include <stdlib.h>

#include "merge_two_lists.h"

ListNode* list_from_array(const int* a, int n) {
    if (!a || n <= 0) return NULL;
    ListNode* head = NULL;
    ListNode* tail = NULL;
    for (int i = 0; i < n; i++) {
        ListNode* node = (ListNode*)malloc(sizeof(ListNode));
        if (!node) {
            list_free(head);
            return NULL;
        }
        node->val = a[i];
        node->next = NULL;
        if (!head) head = node;
        if (tail) tail->next = node;
        tail = node;
    }
    return head;
}

void list_free(ListNode* head) {
    while (head) {
        ListNode* nxt = head->next;
        free(head);
        head = nxt;
    }
}

int list_to_array(const ListNode* head, int* out, int cap) {
    int n = 0;
    while (head && n < cap) {
        out[n++] = head->val;
        head = head->next;
    }
    return n;
}

ListNode* merge_two_lists(ListNode* a, ListNode* b) {
    ListNode dummy;
    dummy.val = 0;
    dummy.next = NULL;
    ListNode* tail = &dummy;
    while (a && b) {
        if (a->val <= b->val) {
            tail->next = a;
            a = a->next;
        } else {
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }
    tail->next = a ? a : b;
    return dummy.next;
}
