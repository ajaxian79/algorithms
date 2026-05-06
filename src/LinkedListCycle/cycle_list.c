//
// Created by ajaxian on 05/05/26.
//

#include <stdlib.h>

#include "cycle_list.h"

LLCNode* llc_from_array(const int* a, int n) {
    if (!a || n <= 0) return NULL;
    LLCNode* head = NULL;
    LLCNode* tail = NULL;
    for (int i = 0; i < n; i++) {
        LLCNode* node = (LLCNode*)malloc(sizeof(LLCNode));
        if (!node) {
            llc_free(head);
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

void llc_free(LLCNode* head) {
    while (head) {
        LLCNode* next = head->next;
        free(head);
        head = next;
    }
}

void llc_make_cycle(LLCNode* head, int at) {
    if (!head || at < 0) return;
    LLCNode* target = head;
    for (int i = 0; i < at && target; i++) target = target->next;
    if (!target) return;
    LLCNode* tail = head;
    while (tail->next) tail = tail->next;
    tail->next = target;
}

void llc_break_cycle(LLCNode* head) {
    if (!head) return;
    const LLCNode* slow = head;
    const LLCNode* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) break;
    }
    if (!fast || !fast->next) return;

    const LLCNode* a = head;
    const LLCNode* b = slow;
    while (a != b) {
        a = a->next;
        b = b->next;
    }
    LLCNode* p = (LLCNode*)b;
    while (p->next != a) p = p->next;
    p->next = NULL;
}

int has_cycle(const LLCNode* head) {
    const LLCNode* slow = head;
    const LLCNode* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return 1;
    }
    return 0;
}
