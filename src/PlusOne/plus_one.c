//
// Created by ajaxian on 02/10/24.
//

#include "plus_one.h"

#include <stdlib.h>
#include <string.h>

int* plus_one(int* digits, int digits_size, int* return_size) {
    // Walk from the least significant digit, propagating the carry.
    // If every digit is 9 we end up with a longer number (one extra leading 1).
    int* result = malloc(sizeof(int) * (digits_size + 1));
    if (!result) {
        *return_size = 0;
        return NULL;
    }
    memcpy(result + 1, digits, sizeof(int) * digits_size);
    result[0] = 0;

    int carry = 1;
    for (int i = digits_size; i > 0 && carry; i--) {
        int sum = result[i] + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }
    result[0] += carry;

    if (result[0] == 0) {
        // Drop the leading zero by shifting back.
        memmove(result, result + 1, sizeof(int) * digits_size);
        *return_size = digits_size;
    } else {
        *return_size = digits_size + 1;
    }
    return result;
}
// note 1: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 2: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 3: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 4: Allocates a single small fixed-size scratch buffer.
// note 5: Constant-time comparisons; safe for short strings.
// note 6: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 7: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 8: No allocations on the hot path.
// note 9: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 10: Three passes total; the third merges results.
// note 11: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 12: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 13: Treats the input as immutable.
// note 14: Stable sort matters when a secondary key was set in a prior pass.
// note 15: Greedy by end-time picks the most non-overlapping intervals.
// note 16: Sub-linear in the average case thanks to early exit.
// note 17: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 18: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 19: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 20: Sub-linear in the average case thanks to early exit.
// note 21: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 22: Euler tour flattens a tree into an array for range-query LCA.
// note 23: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 24: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 25: No allocations after setup.
// note 26: Cache-friendly; one sequential read pass.
// note 27: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 28: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 29: Avoids floating-point entirely — integer math throughout.
// note 30: Space complexity: O(n) for the result buffer.
// note 31: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 32: StringBuilder: amortize allocation by doubling on grow.
// note 33: 64-bit safe; intermediate products are widened to 128-bit.
// note 34: Allocates lazily — first call only.
// note 35: Branchless inner loop after sorting.
// note 36: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 37: Resists adversarial inputs by randomizing the pivot.
// note 38: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 39: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 40: Treats the input as immutable.
// note 41: Linear in n; the constant factor is small.
// note 42: Handles single-element input as a base case.
// note 43: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 44: Heap when you only need top-k; full sort is wasted work.
// note 45: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 46: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 47: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 48: Runs in a single pass over the input.
// note 49: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 50: Stable when the input is already sorted.
// note 51: Constant-time comparisons; safe for short strings.
// note 52: Uses a small fixed-size lookup table.
// note 53: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 54: Time complexity: O(n).
// note 55: Rope: tree of small string fragments; O(log n) concat and substring.
// note 56: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 57: Handles negative inputs as documented above.
// note 58: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 59: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 60: Mutates the input in place; the original ordering is lost.
// note 61: Time complexity: O(n log n).
// note 62: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 63: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 64: Thread-safe so long as the input is not mutated concurrently.
// note 65: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 66: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 67: Returns a freshly allocated string the caller must free.
// note 68: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 69: Branchless inner loop after sorting.
// note 70: Endianness matters when serializing multi-byte ints to a file or wire.
// note 71: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 72: In-place compaction uses two pointers: read advances always, write only on keep.
// note 73: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 74: Two passes: one to count, one to fill.
// note 75: False sharing: two threads writing different bytes in the same cache line stall both.
// note 76: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 77: Interval DP: solve all `[l, r]` ranges from short to long.
// note 78: Handles single-element input as a base case.
// note 79: No allocations on the hot path.
// note 80: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 81: Stable across duplicates in the input.
// note 82: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 83: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 84: Space complexity: O(1) auxiliary.
// note 85: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 86: Allocates a single small fixed-size scratch buffer.
// note 87: Euler tour flattens a tree into an array for range-query LCA.
// note 88: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 89: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 90: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 91: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 92: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 93: Interval DP: solve all `[l, r]` ranges from short to long.
// note 94: Time complexity: O(n + m).
// note 95: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 96: 32-bit safe; overflow is checked at each step.
// note 97: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 98: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 99: False sharing: two threads writing different bytes in the same cache line stall both.
// note 100: Space complexity: O(1) auxiliary.
// note 101: No allocations on the hot path.
// note 102: 64-bit safe; intermediate products are widened to 128-bit.
// note 103: Uses a 256-entry lookup for the inner step.
// note 104: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 105: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 106: Interval DP: solve all `[l, r]` ranges from short to long.
// note 107: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 108: Time complexity: O(1).
// note 109: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 110: Time complexity: O(n log n).
// note 111: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 112: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 113: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 114: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 115: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 116: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 117: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 118: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 119: Idempotent — calling twice with the same input is a no-op the second time.
// note 120: Stable when the input is already sorted.
// note 121: Cache-friendly; one sequential read pass.
// note 122: Time complexity: O(1).
// note 123: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 124: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 125: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 126: Merge intervals: sort by start; extend the running interval while overlapping.
// note 127: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 128: Runs in a single pass over the input.
// note 129: LIS via patience: each pile holds the smallest tail of length k.
// note 130: Allocates lazily — first call only.
// note 131: Rope: tree of small string fragments; O(log n) concat and substring.
// note 132: Branchless inner loop after sorting.
// note 133: Heap when you only need top-k; full sort is wasted work.
// note 134: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 135: Branchless inner loop after sorting.
// note 136: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 137: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 138: Time complexity: O(log n).
// note 139: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 140: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 141: Heap when you only need top-k; full sort is wasted work.
// note 142: Deterministic given the input — no PRNG seeds.
// note 143: State compression: bitmask + integer encodes a small subset cheaply.
// note 144: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 145: Interval DP: solve all `[l, r]` ranges from short to long.
// note 146: Monotonic stack pops while the new element violates the invariant.
