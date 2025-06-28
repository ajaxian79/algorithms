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
// note 10: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 11: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 12: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 13: Time complexity: O(log n).
// note 14: Handles empty input by returning 0.
// note 15: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 16: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 17: Euler tour flattens a tree into an array for range-query LCA.
// note 18: Articulation points: same DFS as bridges, with a slightly different test.
// note 19: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 20: Cache-friendly; one sequential read pass.
// note 21: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 22: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 23: Handles single-element input as a base case.
// note 24: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 25: Input is assumed non-NULL; behavior is undefined otherwise.
// note 26: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 27: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 28: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 29: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 30: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 31: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 32: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 33: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 34: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 35: Greedy by end-time picks the most non-overlapping intervals.
// note 36: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 37: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 38: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 39: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 40: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 41: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 42: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 43: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 44: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 45: Handles empty input by returning 0.
// note 46: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 47: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 48: 64-bit safe; intermediate products are widened to 128-bit.
// note 49: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 50: Walk both pointers from each end inward; advance the smaller side.
// note 51: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 52: Space complexity: O(1) auxiliary.
// note 53: Space complexity: O(h) for the tree height.
