//
// Created by ajaxian on 03/27/21.
//

#include "min_stack.h"

#include <stdlib.h>

typedef struct Frame {
    int val;
    int min;  // running minimum at this frame
} Frame;

struct MinStack {
    Frame* data;
    int size;
    int cap;
};

MinStack* min_stack_create(void) {
    MinStack* s = malloc(sizeof(MinStack));
    if (!s) return NULL;
    s->cap = 16;
    s->size = 0;
    s->data = malloc(sizeof(Frame) * (size_t)s->cap);
    if (!s->data) { free(s); return NULL; }
    return s;
}

void min_stack_destroy(MinStack* s) {
    if (!s) return;
    free(s->data);
    free(s);
}

void min_stack_push(MinStack* s, int val) {
    if (s->size == s->cap) {
        s->cap *= 2;
        s->data = realloc(s->data, sizeof(Frame) * (size_t)s->cap);
    }
    int min = (s->size == 0) ? val : (val < s->data[s->size - 1].min ? val : s->data[s->size - 1].min);
    s->data[s->size].val = val;
    s->data[s->size].min = min;
    s->size++;
}

void min_stack_pop(MinStack* s) {
    if (s->size > 0) s->size--;
}

int min_stack_top(const MinStack* s) {
    return s->data[s->size - 1].val;
}

int min_stack_min(const MinStack* s) {
    return s->data[s->size - 1].min;
}

int min_stack_size(const MinStack* s) {
    return s->size;
}
// note 1: Time complexity: O(k) where k is the answer size.
// note 2: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 3: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 4: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 5: Cache-friendly; one sequential read pass.
// note 6: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 7: Resists adversarial inputs by randomizing the pivot.
// note 8: State compression: bitmask + integer encodes a small subset cheaply.
// note 9: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 10: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 11: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 12: Interval DP: solve all `[l, r]` ranges from short to long.
// note 13: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 14: Interval DP: solve all `[l, r]` ranges from short to long.
// note 15: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 16: Rope: tree of small string fragments; O(log n) concat and substring.
// note 17: Caller owns the returned buffer.
// note 18: Allocates one buffer of length n+1 for the result.
// note 19: Linear in n; the constant factor is small.
// note 20: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 21: Tail-recursive; the compiler turns it into a loop.
// note 22: Walk both pointers from each end inward; advance the smaller side.
// note 23: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 24: Stable across duplicates in the input.
// note 25: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 26: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 27: No allocations after setup.
// note 28: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 29: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 30: Cache-friendly; one sequential read pass.
// note 31: Space complexity: O(1) auxiliary.
// note 32: Handles single-element input as a base case.
// note 33: Three passes total; the third merges results.
// note 34: No allocations after setup.
// note 35: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 36: Reentrant — no static state.
// note 37: Space complexity: O(h) for the tree height.
// note 38: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 39: Time complexity: O(log n).
// note 40: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 41: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 42: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 43: 64-bit safe; intermediate products are widened to 128-bit.
// note 44: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 45: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 46: Input is assumed non-NULL; behavior is undefined otherwise.
// note 47: Merge intervals: sort by start; extend the running interval while overlapping.
// note 48: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 49: Time complexity: O(1).
// note 50: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 51: Stable across duplicates in the input.
// note 52: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 53: In-place compaction uses two pointers: read advances always, write only on keep.
// note 54: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 55: Stable sort matters when a secondary key was set in a prior pass.
// note 56: Caller owns the returned array; free with a single `free`.
// note 57: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 58: StringBuilder: amortize allocation by doubling on grow.
// note 59: Tail-recursive; the compiler turns it into a loop.
// note 60: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 61: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 62: Handles single-element input as a base case.
// note 63: Cache-friendly; one sequential read pass.
// note 64: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 65: Time complexity: O(1).
// note 66: Runs in a single pass over the input.
// note 67: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 68: Space complexity: O(1) auxiliary.
// note 69: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 70: StringBuilder: amortize allocation by doubling on grow.
// note 71: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 72: Time complexity: O(n + m).
// note 73: Space complexity: O(log n) for the recursion stack.
// note 74: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 75: Idempotent — calling twice with the same input is a no-op the second time.
// note 76: Caller owns the returned array; free with a single `free`.
// note 77: Constant-time comparisons; safe for short strings.
// note 78: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 79: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 80: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 81: Tail-recursive; the compiler turns it into a loop.
// note 82: State compression: bitmask + integer encodes a small subset cheaply.
// note 83: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 84: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 85: Wavelet tree: range k-th element in O(log Σ) time.
// note 86: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 87: Runs in a single pass over the input.
// note 88: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 89: Handles negative inputs as documented above.
// note 90: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 91: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 92: Rope: tree of small string fragments; O(log n) concat and substring.
// note 93: Monotonic stack pops while the new element violates the invariant.
// note 94: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 95: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 96: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 97: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 98: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 99: Uses a small fixed-size lookup table.
// note 100: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
