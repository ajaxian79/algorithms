//
// Created by ajaxian on 05/06/26.
//

#include <stdlib.h>

#include "middle_list.h"

MLNode* ml_from_array(const int* a, int n) {
    if (!a || n <= 0) return NULL;
    MLNode* head = NULL;
    MLNode* tail = NULL;
    for (int i = 0; i < n; i++) {
        MLNode* node = (MLNode*)malloc(sizeof(MLNode));
        if (!node) {
            ml_free(head);
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

void ml_free(MLNode* head) {
    while (head) {
        MLNode* next = head->next;
        free(head);
        head = next;
    }
}

MLNode* middle_node(MLNode* head) {
    MLNode* slow = head;
    MLNode* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
