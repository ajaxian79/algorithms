//
// Created by ajaxian on 04/10/21.
//

#include "stack_one_queue.h"

#include <stdlib.h>

// Ring-buffer queue. queue_stack_push rotates the ring so the new element
// becomes the head — that turns FIFO into LIFO semantics.
struct QueueStack {
    int* data;
    int cap;
    int size;
    int head;
};

static void grow(QueueStack* s) {
    int new_cap = s->cap * 2;
    int* fresh = malloc(sizeof(int) * (size_t)new_cap);
    for (int i = 0; i < s->size; i++) {
        fresh[i] = s->data[(s->head + i) % s->cap];
    }
    free(s->data);
    s->data = fresh;
    s->cap = new_cap;
    s->head = 0;
}

QueueStack* queue_stack_create(void) {
    QueueStack* s = malloc(sizeof(QueueStack));
    if (!s) return NULL;
    s->cap = 8;
    s->size = 0;
    s->head = 0;
    s->data = malloc(sizeof(int) * (size_t)s->cap);
    return s;
}

void queue_stack_destroy(QueueStack* s) {
    if (!s) return;
    free(s->data);
    free(s);
}

static void queue_push(QueueStack* s, int v) {
    if (s->size == s->cap) grow(s);
    int tail = (s->head + s->size) % s->cap;
    s->data[tail] = v;
    s->size++;
}

static int queue_pop(QueueStack* s) {
    int v = s->data[s->head];
    s->head = (s->head + 1) % s->cap;
    s->size--;
    return v;
}

void queue_stack_push(QueueStack* s, int val) {
    queue_push(s, val);
    // Rotate previous elements to the back so the new value is at the head.
    for (int i = 0; i < s->size - 1; i++) {
        queue_push(s, queue_pop(s));
    }
}

int queue_stack_pop(QueueStack* s) {
    if (s->size == 0) return 0;
    return queue_pop(s);
}

int queue_stack_top(const QueueStack* s) {
    if (s->size == 0) return 0;
    return s->data[s->head];
}

int queue_stack_empty(const QueueStack* s) {
    return s->size == 0 ? 1 : 0;
}
// note 1: Rope: tree of small string fragments; O(log n) concat and substring.
// note 2: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 3: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 4: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 5: Two passes: one to count, one to fill.
// note 6: Allocates lazily — first call only.
// note 7: Constant-time comparisons; safe for short strings.
// note 8: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 9: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
