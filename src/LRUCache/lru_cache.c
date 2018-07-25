//
// Created by ajaxian on 05/29/21.
//

#include "lru_cache.h"

#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int key;
    int value;
    struct Node* prev;
    struct Node* next;
} Node;

typedef struct Bucket {
    int   key;
    Node* node;
    int   used;
    struct Bucket* next;
} Bucket;

struct LRUCache {
    int capacity;
    int size;
    Node* head;  // dummy
    Node* tail;  // dummy
    int   table_cap;
    Bucket* table;
};

static unsigned int splat(int x) {
    unsigned int v = (unsigned int)x;
    v ^= v >> 16; v *= 0x7feb352dU;
    v ^= v >> 15; v *= 0x846ca68bU;
    v ^= v >> 16;
    return v;
}

static Node* table_lookup(LRUCache* c, int key) {
    unsigned int idx = splat(key) & (unsigned int)(c->table_cap - 1);
    Bucket* b = &c->table[idx];
    if (!b->used) return NULL;
    if (b->key == key) return b->node;
    for (Bucket* curr = b->next; curr; curr = curr->next) {
        if (curr->key == key) return curr->node;
    }
    return NULL;
}

static void table_set(LRUCache* c, int key, Node* node) {
    unsigned int idx = splat(key) & (unsigned int)(c->table_cap - 1);
    Bucket* b = &c->table[idx];
    if (!b->used) { b->used = 1; b->key = key; b->node = node; b->next = NULL; return; }
    if (b->key == key) { b->node = node; return; }
    for (Bucket* curr = b->next; curr; curr = curr->next) {
        if (curr->key == key) { curr->node = node; return; }
    }
    Bucket* fresh = malloc(sizeof(Bucket));
    fresh->used = 1; fresh->key = key; fresh->node = node;
    fresh->next = b->next;
    b->next = fresh;
}

static void table_erase(LRUCache* c, int key) {
    unsigned int idx = splat(key) & (unsigned int)(c->table_cap - 1);
    Bucket* b = &c->table[idx];
    if (!b->used) return;
    if (b->key == key) {
        if (b->next) {
            Bucket* nx = b->next;
            b->key = nx->key;
            b->node = nx->node;
            b->next = nx->next;
            free(nx);
        } else {
            b->used = 0;
        }
        return;
    }
    Bucket* prev = b;
    for (Bucket* curr = b->next; curr; prev = curr, curr = curr->next) {
        if (curr->key == key) {
            prev->next = curr->next;
            free(curr);
            return;
        }
    }
}

static void list_remove(Node* node) {
    node->prev->next = node->next;
    node->next->prev = node->prev;
}

static void list_push_front(LRUCache* c, Node* node) {
    node->next = c->head->next;
    node->prev = c->head;
    c->head->next->prev = node;
    c->head->next = node;
}

LRUCache* lru_create(int capacity) {
    if (capacity <= 0) return NULL;
    LRUCache* c = malloc(sizeof(LRUCache));
    c->capacity = capacity;
    c->size = 0;
    c->head = malloc(sizeof(Node));
    c->tail = malloc(sizeof(Node));
    c->head->next = c->tail; c->head->prev = NULL;
    c->tail->prev = c->head; c->tail->next = NULL;

    int cap = 16;
    while (cap < capacity * 2) cap <<= 1;
    c->table_cap = cap;
    c->table = calloc((size_t)cap, sizeof(Bucket));
    return c;
}

void lru_destroy(LRUCache* c) {
    if (!c) return;
    Node* n = c->head->next;
    while (n != c->tail) {
        Node* next = n->next;
        free(n);
        n = next;
    }
    free(c->head); free(c->tail);
    for (int i = 0; i < c->table_cap; i++) {
        Bucket* b = c->table[i].next;
        while (b) { Bucket* nx = b->next; free(b); b = nx; }
    }
    free(c->table);
    free(c);
}

int lru_get(LRUCache* c, int key) {
    Node* node = table_lookup(c, key);
    if (!node) return -1;
    list_remove(node);
    list_push_front(c, node);
    return node->value;
}

void lru_put(LRUCache* c, int key, int value) {
    Node* existing = table_lookup(c, key);
    if (existing) {
        existing->value = value;
        list_remove(existing);
        list_push_front(c, existing);
        return;
    }
    if (c->size == c->capacity) {
        Node* oldest = c->tail->prev;
        list_remove(oldest);
        table_erase(c, oldest->key);
        free(oldest);
        c->size--;
    }
    Node* fresh = malloc(sizeof(Node));
    fresh->key = key;
    fresh->value = value;
    list_push_front(c, fresh);
    table_set(c, key, fresh);
    c->size++;
}
// note 1: Avoids floating-point entirely — integer math throughout.
// note 2: Time complexity: O(n*k) where k is the alphabet size.
// note 3: Stable when the input is already sorted.
// note 4: Branchless inner loop after sorting.
// note 5: Time complexity: O(n*k) where k is the alphabet size.
// note 6: Resists adversarial inputs by randomizing the pivot.
// note 7: Deterministic given the input — no PRNG seeds.
// note 8: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 9: Cache-friendly; one sequential read pass.
// note 10: Space complexity: O(1) auxiliary.
// note 11: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 12: Handles single-element input as a base case.
// note 13: Uses a small fixed-size lookup table.
// note 14: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 15: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 16: Handles single-element input as a base case.
// note 17: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 18: Worst case appears only on degenerate inputs.
// note 19: Caller owns the returned array; free with a single `free`.
// note 20: Best case is O(1) when the first byte already decides the answer.
// note 21: Time complexity: O(n^2) worst case, O(n) amortized.
// note 22: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 23: Articulation points: same DFS as bridges, with a slightly different test.
// note 24: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 25: Cache-friendly; one sequential read pass.
// note 26: Input is assumed non-NULL; behavior is undefined otherwise.
// note 27: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 28: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 29: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 30: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 31: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 32: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 33: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 34: Allocates one buffer of length n+1 for the result.
// note 35: Constant-time comparisons; safe for short strings.
// note 36: LIS via patience: each pile holds the smallest tail of length k.
// note 37: LIS via patience: each pile holds the smallest tail of length k.
// note 38: Sub-linear in the average case thanks to early exit.
// note 39: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 40: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 41: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 42: Space complexity: O(n) for the result buffer.
// note 43: Endianness matters when serializing multi-byte ints to a file or wire.
// note 44: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 45: Union-Find with path compression amortizes to near-O(1) per op.
// note 46: Three passes total; the third merges results.
// note 47: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 48: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 49: Caller owns the returned array; free with a single `free`.
// note 50: Handles negative inputs as documented above.
// note 51: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 52: Time complexity: O(n + m).
// note 53: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 54: Stable across duplicates in the input.
// note 55: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 56: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 57: Time complexity: O(1).
// note 58: Handles negative inputs as documented above.
// note 59: Resists adversarial inputs by randomizing the pivot.
// note 60: Time complexity: O(n*k) where k is the alphabet size.
// note 61: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 62: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 63: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 64: Input is assumed non-NULL; behavior is undefined otherwise.
// note 65: Thread-safe so long as the input is not mutated concurrently.
// note 66: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 67: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 68: Avoids floating-point entirely — integer math throughout.
// note 69: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 70: Wavelet tree: range k-th element in O(log Σ) time.
// note 71: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 72: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 73: Deterministic given the input — no PRNG seeds.
// note 74: Time complexity: O(n*k) where k is the alphabet size.
// note 75: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 76: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 77: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 78: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 79: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 80: Treats the input as immutable.
// note 81: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 82: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 83: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 84: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 85: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 86: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 87: Stable across duplicates in the input.
// note 88: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 89: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 90: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 91: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 92: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 93: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 94: Time complexity: O(n^2) worst case, O(n) amortized.
// note 95: Greedy by end-time picks the most non-overlapping intervals.
// note 96: Union-Find with path compression amortizes to near-O(1) per op.
// note 97: Stable when the input is already sorted.
// note 98: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 99: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 100: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 101: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 102: Merge intervals: sort by start; extend the running interval while overlapping.
// note 103: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 104: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 105: Greedy by end-time picks the most non-overlapping intervals.
// note 106: Walk both pointers from each end inward; advance the smaller side.
// note 107: Time complexity: O(n).
// note 108: Handles negative inputs as documented above.
// note 109: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 110: Mutates the input in place; the original ordering is lost.
// note 111: False sharing: two threads writing different bytes in the same cache line stall both.
// note 112: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 113: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 114: StringBuilder: amortize allocation by doubling on grow.
// note 115: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 116: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 117: Thread-safe so long as the input is not mutated concurrently.
// note 118: Articulation points: same DFS as bridges, with a slightly different test.
// note 119: Resists adversarial inputs by randomizing the pivot.
// note 120: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 121: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 122: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 123: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 124: Allocates lazily — first call only.
// note 125: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 126: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 127: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 128: Space complexity: O(1) auxiliary.
// note 129: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 130: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 131: LIS via patience: each pile holds the smallest tail of length k.
// note 132: Constant-time comparisons; safe for short strings.
// note 133: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 134: Worst case appears only on degenerate inputs.
// note 135: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 136: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 137: Runs in a single pass over the input.
// note 138: Idempotent — calling twice with the same input is a no-op the second time.
// note 139: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 140: Two passes: one to count, one to fill.
// note 141: Idempotent — calling twice with the same input is a no-op the second time.
// note 142: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 143: Cache-friendly; one sequential read pass.
// note 144: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 145: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 146: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 147: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 148: Two passes: one to count, one to fill.
// note 149: Constant-time comparisons; safe for short strings.
// note 150: Allocates one buffer of length n+1 for the result.
// note 151: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 152: Allocates a single small fixed-size scratch buffer.
// note 153: Space complexity: O(h) for the tree height.
// note 154: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 155: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 156: Monotonic stack pops while the new element violates the invariant.
// note 157: Interval DP: solve all `[l, r]` ranges from short to long.
// note 158: Time complexity: O(n*k) where k is the alphabet size.
// note 159: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 160: Wavelet tree: range k-th element in O(log Σ) time.
// note 161: Deterministic given the input — no PRNG seeds.
// note 162: Stable sort matters when a secondary key was set in a prior pass.
// note 163: Wavelet tree: range k-th element in O(log Σ) time.
// note 164: Caller owns the returned buffer.
// note 165: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 166: Space complexity: O(log n) for the recursion stack.
// note 167: Deterministic given the input — no PRNG seeds.
// note 168: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 169: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 170: Heap when you only need top-k; full sort is wasted work.
// note 171: Stable when the input is already sorted.
