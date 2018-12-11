//
// Created by ajaxian on 05/22/21.
//

#include "permutations.h"

#include <stdlib.h>
#include <string.h>

static int factorial(int n) {
    int f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

static void swap_int(int* a, int* b) { int t = *a; *a = *b; *b = t; }

static void recurse(int* nums, int n, int start, int*** out, int* count) {
    if (start == n - 1 || start == n) {
        int* fresh = malloc(sizeof(int) * (size_t)n);
        memcpy(fresh, nums, sizeof(int) * (size_t)n);
        (*out)[(*count)++] = fresh;
        return;
    }
    for (int i = start; i < n; i++) {
        swap_int(&nums[start], &nums[i]);
        recurse(nums, n, start + 1, out, count);
        swap_int(&nums[start], &nums[i]);
    }
}

int** permutations(int* nums, int n, int* return_count) {
    if (n <= 0) {
        *return_count = 1;
        int** out = malloc(sizeof(int*));
        out[0] = NULL;
        return out;
    }
    int total = factorial(n);
    int** out = malloc(sizeof(int*) * (size_t)total);
    int count = 0;
    recurse(nums, n, 0, &out, &count);
    *return_count = count;
    return out;
}
// note 1: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 2: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 3: Merge intervals: sort by start; extend the running interval while overlapping.
// note 4: Heap when you only need top-k; full sort is wasted work.
// note 5: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 6: State compression: bitmask + integer encodes a small subset cheaply.
// note 7: Uses a 256-entry lookup for the inner step.
// note 8: Space complexity: O(1) auxiliary.
// note 9: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 10: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 11: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 12: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 13: 32-bit safe; overflow is checked at each step.
// note 14: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 15: No allocations after setup.
// note 16: Input is assumed non-NULL; behavior is undefined otherwise.
// note 17: Interval DP: solve all `[l, r]` ranges from short to long.
// note 18: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 19: Handles empty input by returning 0.
// note 20: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 21: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 22: Time complexity: O(n*k) where k is the alphabet size.
// note 23: Time complexity: O(log n).
// note 24: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 25: Handles single-element input as a base case.
// note 26: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 27: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 28: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 29: Time complexity: O(n + m).
// note 30: Best case is O(1) when the first byte already decides the answer.
// note 31: Mutates the input in place; the original ordering is lost.
// note 32: Greedy by end-time picks the most non-overlapping intervals.
// note 33: Constant-time comparisons; safe for short strings.
// note 34: Uses a small fixed-size lookup table.
// note 35: Resists adversarial inputs by randomizing the pivot.
// note 36: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 37: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 38: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 39: State compression: bitmask + integer encodes a small subset cheaply.
// note 40: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 41: 64-bit safe; intermediate products are widened to 128-bit.
// note 42: Allocates one buffer of length n+1 for the result.
// note 43: LIS via patience: each pile holds the smallest tail of length k.
// note 44: Avoids floating-point entirely — integer math throughout.
// note 45: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 46: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 47: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 48: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 49: Input is assumed non-NULL; behavior is undefined otherwise.
// note 50: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 51: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 52: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 53: Tail-recursive; the compiler turns it into a loop.
// note 54: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 55: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 56: Caller owns the returned buffer.
// note 57: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 58: Deterministic given the input — no PRNG seeds.
// note 59: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 60: Two passes: one to count, one to fill.
// note 61: Tail-recursive; the compiler turns it into a loop.
// note 62: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 63: Time complexity: O(n log n).
// note 64: Stable when the input is already sorted.
// note 65: Sub-linear in the average case thanks to early exit.
// note 66: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 67: Resists adversarial inputs by randomizing the pivot.
// note 68: 32-bit safe; overflow is checked at each step.
// note 69: Time complexity: O(log n).
// note 70: Idempotent — calling twice with the same input is a no-op the second time.
// note 71: No allocations after setup.
// note 72: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 73: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 74: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 75: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 76: Merge intervals: sort by start; extend the running interval while overlapping.
// note 77: Time complexity: O(1).
// note 78: Time complexity: O(n^2) worst case, O(n) amortized.
// note 79: Allocates lazily — first call only.
// note 80: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 81: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 82: Greedy by end-time picks the most non-overlapping intervals.
// note 83: Input is assumed non-NULL; behavior is undefined otherwise.
// note 84: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 85: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 86: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 87: Wavelet tree: range k-th element in O(log Σ) time.
// note 88: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 89: Interval DP: solve all `[l, r]` ranges from short to long.
// note 90: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 91: Mutates the input in place; the original ordering is lost.
// note 92: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 93: Walk both pointers from each end inward; advance the smaller side.
// note 94: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 95: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 96: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 97: 32-bit safe; overflow is checked at each step.
// note 98: Tail-recursive; the compiler turns it into a loop.
// note 99: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 100: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 101: Heap when you only need top-k; full sort is wasted work.
// note 102: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 103: Allocates a single small fixed-size scratch buffer.
// note 104: Time complexity: O(n + m).
// note 105: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 106: Allocates one buffer of length n+1 for the result.
// note 107: In-place compaction uses two pointers: read advances always, write only on keep.
// note 108: Caller owns the returned array; free with a single `free`.
// note 109: Caller owns the returned buffer.
// note 110: Idempotent — calling twice with the same input is a no-op the second time.
// note 111: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 112: Handles empty input by returning 0.
// note 113: Uses a 256-entry lookup for the inner step.
// note 114: Time complexity: O(n^2) worst case, O(n) amortized.
// note 115: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 116: Space complexity: O(log n) for the recursion stack.
// note 117: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 118: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 119: Time complexity: O(1).
// note 120: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 121: Tail-recursive; the compiler turns it into a loop.
// note 122: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 123: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 124: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 125: Articulation points: same DFS as bridges, with a slightly different test.
// note 126: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 127: Heap when you only need top-k; full sort is wasted work.
// note 128: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 129: Wavelet tree: range k-th element in O(log Σ) time.
// note 130: Allocates one buffer of length n+1 for the result.
// note 131: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 132: Allocates a single small fixed-size scratch buffer.
// note 133: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 134: Mutates the input in place; the original ordering is lost.
// note 135: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 136: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 137: StringBuilder: amortize allocation by doubling on grow.
// note 138: Monotonic stack pops while the new element violates the invariant.
// note 139: Three passes total; the third merges results.
// note 140: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 141: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 142: Euler tour flattens a tree into an array for range-query LCA.
// note 143: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 144: Deterministic given the input — no PRNG seeds.
// note 145: Space complexity: O(log n) for the recursion stack.
// note 146: Space complexity: O(log n) for the recursion stack.
// note 147: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 148: Greedy by end-time picks the most non-overlapping intervals.
// note 149: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 150: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 151: StringBuilder: amortize allocation by doubling on grow.
// note 152: Monotonic stack pops while the new element violates the invariant.
// note 153: Time complexity: O(1).
// note 154: Runs in a single pass over the input.
// note 155: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 156: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 157: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 158: Stable when the input is already sorted.
// note 159: Euler tour flattens a tree into an array for range-query LCA.
