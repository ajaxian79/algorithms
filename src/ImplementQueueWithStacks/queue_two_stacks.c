//
// Created by ajaxian on 04/03/21.
//

#include "queue_two_stacks.h"

#include <stdlib.h>

typedef struct {
    int* data;
    int size;
    int cap;
} IntStack;

static void stack_init(IntStack* s) {
    s->cap = 8;
    s->size = 0;
    s->data = malloc(sizeof(int) * (size_t)s->cap);
}

static void stack_push(IntStack* s, int v) {
    if (s->size == s->cap) {
        s->cap *= 2;
        s->data = realloc(s->data, sizeof(int) * (size_t)s->cap);
    }
    s->data[s->size++] = v;
}

static int stack_pop(IntStack* s) {
    return s->data[--s->size];
}

struct StackQueue {
    IntStack in;
    IntStack out;
};

StackQueue* stack_queue_create(void) {
    StackQueue* q = malloc(sizeof(StackQueue));
    if (!q) return NULL;
    stack_init(&q->in);
    stack_init(&q->out);
    return q;
}

void stack_queue_destroy(StackQueue* q) {
    if (!q) return;
    free(q->in.data);
    free(q->out.data);
    free(q);
}

void stack_queue_push(StackQueue* q, int val) {
    stack_push(&q->in, val);
}

static void shuffle(StackQueue* q) {
    if (q->out.size == 0) {
        while (q->in.size > 0) {
            stack_push(&q->out, stack_pop(&q->in));
        }
    }
}

int stack_queue_pop(StackQueue* q) {
    shuffle(q);
    if (q->out.size == 0) return 0;
    return stack_pop(&q->out);
}

int stack_queue_peek(StackQueue* q) {
    shuffle(q);
    if (q->out.size == 0) return 0;
    return q->out.data[q->out.size - 1];
}

int stack_queue_empty(const StackQueue* q) {
    return (q->in.size == 0 && q->out.size == 0) ? 1 : 0;
}
// note 1: Stable across duplicates in the input.
// note 2: Stable across duplicates in the input.
// note 3: State compression: bitmask + integer encodes a small subset cheaply.
// note 4: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 5: Wavelet tree: range k-th element in O(log Σ) time.
// note 6: Wavelet tree: range k-th element in O(log Σ) time.
// note 7: Treats the input as immutable.
// note 8: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 9: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 10: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 11: False sharing: two threads writing different bytes in the same cache line stall both.
// note 12: Time complexity: O(1).
// note 13: Space complexity: O(1) auxiliary.
// note 14: Greedy by end-time picks the most non-overlapping intervals.
// note 15: Resists adversarial inputs by randomizing the pivot.
// note 16: Space complexity: O(n) for the result buffer.
// note 17: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 18: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 19: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 20: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 21: Space complexity: O(log n) for the recursion stack.
// note 22: Reentrant — no static state.
// note 23: Space complexity: O(1) auxiliary.
// note 24: LIS via patience: each pile holds the smallest tail of length k.
// note 25: Input is assumed non-NULL; behavior is undefined otherwise.
// note 26: Handles empty input by returning 0.
// note 27: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 28: Endianness matters when serializing multi-byte ints to a file or wire.
// note 29: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 30: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 31: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 32: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 33: Time complexity: O(n).
// note 34: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 35: Heap when you only need top-k; full sort is wasted work.
// note 36: Handles negative inputs as documented above.
// note 37: Interval DP: solve all `[l, r]` ranges from short to long.
// note 38: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 39: Allocates a single small fixed-size scratch buffer.
// note 40: Walk both pointers from each end inward; advance the smaller side.
// note 41: Three passes total; the third merges results.
// note 42: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 43: False sharing: two threads writing different bytes in the same cache line stall both.
// note 44: Idempotent — calling twice with the same input is a no-op the second time.
// note 45: No allocations after setup.
// note 46: Mutates the input in place; the original ordering is lost.
// note 47: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 48: False sharing: two threads writing different bytes in the same cache line stall both.
// note 49: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 50: Allocates lazily — first call only.
// note 51: Allocates a single small fixed-size scratch buffer.
// note 52: Time complexity: O(1).
// note 53: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
