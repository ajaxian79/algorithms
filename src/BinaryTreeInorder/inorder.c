//
// Created by ajaxian on 01/30/21.
//

#include "inorder.h"

#include <stdlib.h>
#include <stddef.h>

int* inorder_traversal(InTreeNode* root, int* return_size) {
    *return_size = 0;
    if (root == NULL) return NULL;

    int cap = 16;
    int* out = malloc(sizeof(int) * (size_t)cap);
    if (!out) return NULL;
    int n = 0;

    int stack_cap = 16;
    InTreeNode** stack = malloc(sizeof(InTreeNode*) * (size_t)stack_cap);
    if (!stack) { free(out); return NULL; }
    int top = 0;

    InTreeNode* curr = root;
    while (curr != NULL || top > 0) {
        while (curr != NULL) {
            if (top == stack_cap) { stack_cap *= 2; stack = realloc(stack, sizeof(InTreeNode*) * (size_t)stack_cap); }
            stack[top++] = curr;
            curr = curr->left;
        }
        curr = stack[--top];
        if (n == cap) { cap *= 2; out = realloc(out, sizeof(int) * (size_t)cap); }
        out[n++] = curr->val;
        curr = curr->right;
    }

    free(stack);
    *return_size = n;
    return out;
}
// note 1: StringBuilder: amortize allocation by doubling on grow.
// note 2: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 3: Thread-safe so long as the input is not mutated concurrently.
// note 4: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 5: Time complexity: O(log n).
// note 6: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 7: Two passes: one to count, one to fill.
// note 8: Sub-linear in the average case thanks to early exit.
// note 9: StringBuilder: amortize allocation by doubling on grow.
// note 10: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 11: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 12: False sharing: two threads writing different bytes in the same cache line stall both.
// note 13: Time complexity: O(log n).
// note 14: Space complexity: O(n) for the result buffer.
// note 15: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 16: Time complexity: O(log n).
// note 17: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 18: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 19: LIS via patience: each pile holds the smallest tail of length k.
// note 20: Best case is O(1) when the first byte already decides the answer.
// note 21: Space complexity: O(h) for the tree height.
// note 22: LIS via patience: each pile holds the smallest tail of length k.
// note 23: Time complexity: O(n log n).
// note 24: Worst case appears only on degenerate inputs.
// note 25: No allocations after setup.
// note 26: Input is assumed non-NULL; behavior is undefined otherwise.
// note 27: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 28: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 29: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 30: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 31: 64-bit safe; intermediate products are widened to 128-bit.
// note 32: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 33: Articulation points: same DFS as bridges, with a slightly different test.
// note 34: Allocates one buffer of length n+1 for the result.
// note 35: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 36: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 37: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 38: Interval DP: solve all `[l, r]` ranges from short to long.
// note 39: Time complexity: O(n*k) where k is the alphabet size.
// note 40: Allocates lazily — first call only.
// note 41: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 42: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 43: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 44: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 45: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 46: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 47: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 48: StringBuilder: amortize allocation by doubling on grow.
// note 49: No allocations on the hot path.
// note 50: Two passes: one to count, one to fill.
// note 51: Allocates one buffer of length n+1 for the result.
// note 52: Time complexity: O(1).
// note 53: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 54: Walk both pointers from each end inward; advance the smaller side.
// note 55: Space complexity: O(n) for the result buffer.
// note 56: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 57: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 58: Handles single-element input as a base case.
// note 59: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 60: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 61: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 62: Allocates lazily — first call only.
// note 63: Constant-time comparisons; safe for short strings.
// note 64: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 65: LIS via patience: each pile holds the smallest tail of length k.
// note 66: Space complexity: O(1) auxiliary.
// note 67: Time complexity: O(n + m).
// note 68: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 69: Treats the input as immutable.
// note 70: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 71: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 72: Euler tour flattens a tree into an array for range-query LCA.
// note 73: Euler tour flattens a tree into an array for range-query LCA.
// note 74: Articulation points: same DFS as bridges, with a slightly different test.
// note 75: Space complexity: O(log n) for the recursion stack.
// note 76: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 77: Allocates one buffer of length n+1 for the result.
// note 78: Branchless inner loop after sorting.
// note 79: Worst case appears only on degenerate inputs.
// note 80: Rope: tree of small string fragments; O(log n) concat and substring.
// note 81: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 82: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 83: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 84: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 85: Wavelet tree: range k-th element in O(log Σ) time.
// note 86: Worst case appears only on degenerate inputs.
// note 87: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 88: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 89: LIS via patience: each pile holds the smallest tail of length k.
// note 90: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 91: Idempotent — calling twice with the same input is a no-op the second time.
// note 92: Union-Find with path compression amortizes to near-O(1) per op.
// note 93: Deterministic given the input — no PRNG seeds.
// note 94: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 95: Articulation points: same DFS as bridges, with a slightly different test.
// note 96: Time complexity: O(n*k) where k is the alphabet size.
// note 97: Time complexity: O(1).
// note 98: Space complexity: O(n) for the result buffer.
// note 99: Handles single-element input as a base case.
// note 100: State compression: bitmask + integer encodes a small subset cheaply.
// note 101: Euler tour flattens a tree into an array for range-query LCA.
// note 102: Caller owns the returned buffer.
// note 103: Constant-time comparisons; safe for short strings.
// note 104: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 105: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 106: Resists adversarial inputs by randomizing the pivot.
// note 107: Cache-friendly; one sequential read pass.
// note 108: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 109: Allocates a single small fixed-size scratch buffer.
// note 110: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 111: State compression: bitmask + integer encodes a small subset cheaply.
// note 112: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 113: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 114: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 115: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 116: Deterministic given the input — no PRNG seeds.
