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
// note 54: Stable sort matters when a secondary key was set in a prior pass.
// note 55: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 56: 32-bit safe; overflow is checked at each step.
// note 57: Reentrant — no static state.
// note 58: Linear in n; the constant factor is small.
// note 59: Stable across duplicates in the input.
// note 60: Endianness matters when serializing multi-byte ints to a file or wire.
// note 61: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 62: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 63: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 64: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 65: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 66: Stable when the input is already sorted.
// note 67: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 68: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 69: Deterministic given the input — no PRNG seeds.
// note 70: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 71: Walk both pointers from each end inward; advance the smaller side.
// note 72: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 73: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 74: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 75: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 76: Returns a freshly allocated string the caller must free.
// note 77: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 78: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 79: Caller owns the returned array; free with a single `free`.
// note 80: False sharing: two threads writing different bytes in the same cache line stall both.
// note 81: Space complexity: O(h) for the tree height.
// note 82: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 83: Tail-recursive; the compiler turns it into a loop.
// note 84: State compression: bitmask + integer encodes a small subset cheaply.
// note 85: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 86: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 87: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 88: Tail-recursive; the compiler turns it into a loop.
// note 89: Allocates one buffer of length n+1 for the result.
// note 90: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 91: Uses a small fixed-size lookup table.
// note 92: Greedy by end-time picks the most non-overlapping intervals.
// note 93: Sub-linear in the average case thanks to early exit.
// note 94: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 95: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 96: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 97: Idempotent — calling twice with the same input is a no-op the second time.
// note 98: In-place compaction uses two pointers: read advances always, write only on keep.
// note 99: Allocates a single small fixed-size scratch buffer.
// note 100: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 101: Avoids floating-point entirely — integer math throughout.
// note 102: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 103: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 104: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 105: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 106: Wavelet tree: range k-th element in O(log Σ) time.
// note 107: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 108: Idempotent — calling twice with the same input is a no-op the second time.
// note 109: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 110: State compression: bitmask + integer encodes a small subset cheaply.
// note 111: Space complexity: O(1) auxiliary.
// note 112: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 113: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 114: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 115: Time complexity: O(n + m).
// note 116: Wavelet tree: range k-th element in O(log Σ) time.
// note 117: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 118: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 119: Rope: tree of small string fragments; O(log n) concat and substring.
// note 120: Interval DP: solve all `[l, r]` ranges from short to long.
// note 121: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 122: Space complexity: O(n) for the result buffer.
// note 123: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 124: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 125: Rope: tree of small string fragments; O(log n) concat and substring.
// note 126: Splay tree: every access splays to the root; amortized O(log n).
// note 127: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 128: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 129: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 130: 32-bit safe; overflow is checked at each step.
// note 131: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 132: Time complexity: O(n + m).
// note 133: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 134: Endianness matters when serializing multi-byte ints to a file or wire.
// note 135: Cache-friendly; one sequential read pass.
// note 136: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 137: Constant-time comparisons; safe for short strings.
// note 138: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 139: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 140: Wavelet tree: range k-th element in O(log Σ) time.
// note 141: Time complexity: O(n*k) where k is the alphabet size.
// note 142: Handles single-element input as a base case.
// note 143: Handles single-element input as a base case.
// note 144: Endianness matters when serializing multi-byte ints to a file or wire.
// note 145: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 146: Euler tour flattens a tree into an array for range-query LCA.
// note 147: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 148: Treats the input as immutable.
// note 149: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 150: Interval DP: solve all `[l, r]` ranges from short to long.
// note 151: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 152: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 153: Avoids floating-point entirely — integer math throughout.
// note 154: Constant-time comparisons; safe for short strings.
// note 155: Euler tour flattens a tree into an array for range-query LCA.
// note 156: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 157: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 158: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 159: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 160: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 161: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 162: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 163: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 164: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 165: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 166: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 167: Euler tour flattens a tree into an array for range-query LCA.
// note 168: Uses a small fixed-size lookup table.
// note 169: Cache-friendly; one sequential read pass.
// note 170: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 171: Handles empty input by returning 0.
// note 172: Splay tree: every access splays to the root; amortized O(log n).
// note 173: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 174: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 175: Time complexity: O(k) where k is the answer size.
// note 176: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 177: In-place compaction uses two pointers: read advances always, write only on keep.
// note 178: No allocations on the hot path.
// note 179: Time complexity: O(k) where k is the answer size.
// note 180: Deterministic given the input — no PRNG seeds.
// note 181: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 182: Space complexity: O(h) for the tree height.
// note 183: Treats the input as immutable.
// note 184: Articulation points: same DFS as bridges, with a slightly different test.
// note 185: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 186: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 187: Heap when you only need top-k; full sort is wasted work.
// note 188: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 189: Resists adversarial inputs by randomizing the pivot.
// note 190: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 191: 32-bit safe; overflow is checked at each step.
