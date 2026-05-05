//
// Created by ajaxian on 05/04/26.
//

#include <stdlib.h>

#include "reverse_list.h"

RLNode* rl_from_array(const int* a, int n) {
    if (!a || n <= 0) return NULL;
    RLNode* head = NULL;
    RLNode* tail = NULL;
    for (int i = 0; i < n; i++) {
        RLNode* node = (RLNode*)malloc(sizeof(RLNode));
        if (!node) {
            rl_free(head);
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

void rl_free(RLNode* head) {
    while (head) {
        RLNode* next = head->next;
        free(head);
        head = next;
    }
}

int rl_to_array(const RLNode* head, int* out, int cap) {
    int n = 0;
    while (head && n < cap) {
        out[n++] = head->val;
        head = head->next;
    }
    return n;
}

RLNode* reverse_list(RLNode* head) {
    RLNode* prev = NULL;
    RLNode* curr = head;
    while (curr) {
        RLNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
