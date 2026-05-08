//
// Created by ajaxian on 05/07/26.
//

#include <stdlib.h>

#include "skip_list.h"

static unsigned int xorshift(unsigned int* s) {
    unsigned int x = *s;
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;
    *s = x ? x : 1u;
    return *s;
}

static int random_level(SkipList* l) {
    int lvl = 1;
    while (lvl < SKIPLIST_MAX_LEVEL && (xorshift(&l->rng) & 1u)) {
        lvl++;
    }
    return lvl;
}

static SkipNode* node_new(int key, int level) {
    SkipNode* n = (SkipNode*)malloc(sizeof(SkipNode));
    if (!n) return NULL;
    n->forward = (SkipNode**)calloc((size_t)level, sizeof(SkipNode*));
    if (!n->forward) {
        free(n);
        return NULL;
    }
    n->key = key;
    n->level = level;
    return n;
}

int skiplist_init(SkipList* l, unsigned int seed) {
    if (!l) return 0;
    l->head = node_new(0, SKIPLIST_MAX_LEVEL);
    if (!l->head) return 0;
    l->level = 1;
    l->size = 0;
    l->rng = seed ? seed : 0xC0FFEEu;
    return 1;
}

void skiplist_clear(SkipList* l) {
    if (!l || !l->head) return;
    SkipNode* p = l->head->forward[0];
    while (p) {
        SkipNode* nx = p->forward[0];
        free(p->forward);
        free(p);
        p = nx;
    }
    free(l->head->forward);
    free(l->head);
    l->head = NULL;
    l->level = 0;
    l->size = 0;
}

int skiplist_insert(SkipList* l, int key) {
    if (!l || !l->head) return -1;

    SkipNode* update[SKIPLIST_MAX_LEVEL];
    SkipNode* x = l->head;
    for (int i = l->level - 1; i >= 0; i--) {
        while (x->forward[i] && x->forward[i]->key < key) {
            x = x->forward[i];
        }
        update[i] = x;
    }
    SkipNode* nxt = x->forward[0];
    if (nxt && nxt->key == key) return 0;

    int lvl = random_level(l);
    if (lvl > l->level) {
        for (int i = l->level; i < lvl; i++) update[i] = l->head;
        l->level = lvl;
    }

    SkipNode* n = node_new(key, lvl);
    if (!n) return -1;

    for (int i = 0; i < lvl; i++) {
        n->forward[i] = update[i]->forward[i];
        update[i]->forward[i] = n;
    }
    l->size++;
    return 1;
}

int skiplist_contains(const SkipList* l, int key) {
    if (!l || !l->head) return 0;
    const SkipNode* x = l->head;
    for (int i = l->level - 1; i >= 0; i--) {
        while (x->forward[i] && x->forward[i]->key < key) {
            x = x->forward[i];
        }
    }
    const SkipNode* nxt = x->forward[0];
    return nxt && nxt->key == key;
}

int skiplist_size(const SkipList* l) { return l ? l->size : 0; }

int skiplist_to_array(const SkipList* l, int* out, int cap) {
    if (!l || !out || cap <= 0 || !l->head) return 0;
    int n = 0;
    for (const SkipNode* p = l->head->forward[0]; p && n < cap; p = p->forward[0]) {
        out[n++] = p->key;
    }
    return n;
}
