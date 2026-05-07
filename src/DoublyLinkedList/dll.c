//
// Created by ajaxian on 05/06/26.
//

#include <stdlib.h>

#include "dll.h"

void dll_init(DLL* l) {
    if (!l) return;
    l->head.prev = NULL;
    l->head.next = &l->tail;
    l->tail.prev = &l->head;
    l->tail.next = NULL;
    l->head.val = 0;
    l->tail.val = 0;
    l->size = 0;
}

static void dll_unlink(DLLNode* n) {
    n->prev->next = n->next;
    n->next->prev = n->prev;
}

static int dll_insert_after(DLLNode* p, int v) {
    DLLNode* n = (DLLNode*)malloc(sizeof(DLLNode));
    if (!n) return 0;
    n->val = v;
    n->prev = p;
    n->next = p->next;
    p->next->prev = n;
    p->next = n;
    return 1;
}

void dll_clear(DLL* l) {
    if (!l) return;
    DLLNode* p = l->head.next;
    while (p && p != &l->tail) {
        DLLNode* nx = p->next;
        free(p);
        p = nx;
    }
    l->head.next = &l->tail;
    l->tail.prev = &l->head;
    l->size = 0;
}

int dll_size(const DLL* l) { return l ? l->size : 0; }

int dll_push_front(DLL* l, int v) {
    if (!l) return 0;
    if (!dll_insert_after(&l->head, v)) return 0;
    l->size++;
    return 1;
}

int dll_push_back(DLL* l, int v) {
    if (!l) return 0;
    if (!dll_insert_after(l->tail.prev, v)) return 0;
    l->size++;
    return 1;
}

int dll_pop_front(DLL* l, int* ok) {
    if (!l || l->size == 0) {
        if (ok) *ok = 0;
        return 0;
    }
    DLLNode* n = l->head.next;
    int v = n->val;
    dll_unlink(n);
    free(n);
    l->size--;
    if (ok) *ok = 1;
    return v;
}

int dll_pop_back(DLL* l, int* ok) {
    if (!l || l->size == 0) {
        if (ok) *ok = 0;
        return 0;
    }
    DLLNode* n = l->tail.prev;
    int v = n->val;
    dll_unlink(n);
    free(n);
    l->size--;
    if (ok) *ok = 1;
    return v;
}

int dll_remove_first(DLL* l, int v) {
    if (!l) return 0;
    for (DLLNode* p = l->head.next; p != &l->tail; p = p->next) {
        if (p->val == v) {
            dll_unlink(p);
            free(p);
            l->size--;
            return 1;
        }
    }
    return 0;
}

int dll_to_array(const DLL* l, int* out, int cap) {
    if (!l || !out || cap <= 0) return 0;
    int n = 0;
    for (const DLLNode* p = l->head.next; p != &l->tail && n < cap; p = p->next) {
        out[n++] = p->val;
    }
    return n;
}
