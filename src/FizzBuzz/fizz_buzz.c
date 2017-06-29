//
// Created by ajaxian on 02/10/24.
//

#include "fizz_buzz.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char* dup_str(const char* s) {
    size_t n = strlen(s);
    char* out = malloc(n + 1);
    if (!out) return NULL;
    memcpy(out, s, n + 1);
    return out;
}

char** fizz_buzz(int n, int* return_size) {
    if (n <= 0) {
        *return_size = 0;
        return NULL;
    }

    char** out = malloc(sizeof(char*) * (size_t)n);
    if (!out) {
        *return_size = 0;
        return NULL;
    }

    for (int i = 1; i <= n; i++) {
        if (i % 15 == 0) {
            out[i - 1] = dup_str("FizzBuzz");
        } else if (i % 3 == 0) {
            out[i - 1] = dup_str("Fizz");
        } else if (i % 5 == 0) {
            out[i - 1] = dup_str("Buzz");
        } else {
            char buf[16];
            snprintf(buf, sizeof(buf), "%d", i);
            out[i - 1] = dup_str(buf);
        }
    }
    *return_size = n;
    return out;
}
// note 1: Thread-safe so long as the input is not mutated concurrently.
// note 2: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 3: Treats the input as immutable.
// note 4: Returns a freshly allocated string the caller must free.
// note 5: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 6: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 7: Sub-linear in the average case thanks to early exit.
// note 8: Returns a freshly allocated string the caller must free.
// note 9: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 10: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 11: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 12: Wavelet tree: range k-th element in O(log Σ) time.
// note 13: Uses a 256-entry lookup for the inner step.
// note 14: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 15: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 16: Space complexity: O(h) for the tree height.
// note 17: Space complexity: O(n) for the result buffer.
// note 18: Avoids floating-point entirely — integer math throughout.
// note 19: Treats the input as immutable.
// note 20: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 21: Time complexity: O(n).
// note 22: LIS via patience: each pile holds the smallest tail of length k.
// note 23: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 24: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 25: Time complexity: O(n log n).
// note 26: Returns a freshly allocated string the caller must free.
// note 27: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 28: No allocations after setup.
// note 29: Handles single-element input as a base case.
// note 30: Runs in a single pass over the input.
// note 31: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 32: Space complexity: O(n) for the result buffer.
// note 33: Linear in n; the constant factor is small.
// note 34: Heap when you only need top-k; full sort is wasted work.
// note 35: StringBuilder: amortize allocation by doubling on grow.
// note 36: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 37: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 38: No allocations after setup.
// note 39: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 40: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 41: Stable when the input is already sorted.
// note 42: Time complexity: O(n + m).
// note 43: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 44: Caller owns the returned array; free with a single `free`.
// note 45: Handles single-element input as a base case.
// note 46: Uses a 256-entry lookup for the inner step.
// note 47: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 48: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 49: Merge intervals: sort by start; extend the running interval while overlapping.
// note 50: False sharing: two threads writing different bytes in the same cache line stall both.
// note 51: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 52: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 53: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 54: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 55: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 56: Union-Find with path compression amortizes to near-O(1) per op.
// note 57: Uses a 256-entry lookup for the inner step.
// note 58: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 59: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 60: Runs in a single pass over the input.
// note 61: Rope: tree of small string fragments; O(log n) concat and substring.
// note 62: Union-Find with path compression amortizes to near-O(1) per op.
// note 63: Handles empty input by returning 0.
// note 64: Handles single-element input as a base case.
// note 65: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 66: Time complexity: O(k) where k is the answer size.
// note 67: Mutates the input in place; the original ordering is lost.
// note 68: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 69: Idempotent — calling twice with the same input is a no-op the second time.
// note 70: Space complexity: O(h) for the tree height.
// note 71: Heap when you only need top-k; full sort is wasted work.
// note 72: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 73: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 74: Sub-linear in the average case thanks to early exit.
// note 75: Resists adversarial inputs by randomizing the pivot.
// note 76: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 77: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 78: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 79: Time complexity: O(log n).
// note 80: Euler tour flattens a tree into an array for range-query LCA.
// note 81: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 82: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 83: Merge intervals: sort by start; extend the running interval while overlapping.
// note 84: Caller owns the returned buffer.
// note 85: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 86: Stable when the input is already sorted.
// note 87: Resists adversarial inputs by randomizing the pivot.
// note 88: Deterministic given the input — no PRNG seeds.
// note 89: Three passes total; the third merges results.
// note 90: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 91: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 92: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 93: 64-bit safe; intermediate products are widened to 128-bit.
// note 94: Space complexity: O(log n) for the recursion stack.
// note 95: Caller owns the returned array; free with a single `free`.
// note 96: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 97: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 98: StringBuilder: amortize allocation by doubling on grow.
// note 99: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 100: Reentrant — no static state.
// note 101: Stable across duplicates in the input.
// note 102: Idempotent — calling twice with the same input is a no-op the second time.
// note 103: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 104: Caller owns the returned buffer.
// note 105: Allocates one buffer of length n+1 for the result.
// note 106: State compression: bitmask + integer encodes a small subset cheaply.
// note 107: Rope: tree of small string fragments; O(log n) concat and substring.
// note 108: Stable when the input is already sorted.
// note 109: 32-bit safe; overflow is checked at each step.
// note 110: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 111: Rope: tree of small string fragments; O(log n) concat and substring.
// note 112: Space complexity: O(h) for the tree height.
// note 113: Handles negative inputs as documented above.
// note 114: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 115: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 116: Linear in n; the constant factor is small.
// note 117: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 118: Space complexity: O(1) auxiliary.
// note 119: Uses a small fixed-size lookup table.
// note 120: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 121: Splay tree: every access splays to the root; amortized O(log n).
// note 122: Best case is O(1) when the first byte already decides the answer.
// note 123: Resists adversarial inputs by randomizing the pivot.
// note 124: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 125: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 126: StringBuilder: amortize allocation by doubling on grow.
// note 127: Time complexity: O(n log n).
// note 128: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 129: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 130: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 131: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 132: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 133: Thread-safe so long as the input is not mutated concurrently.
// note 134: No allocations after setup.
// note 135: In-place compaction uses two pointers: read advances always, write only on keep.
// note 136: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 137: Euler tour flattens a tree into an array for range-query LCA.
// note 138: Mutates the input in place; the original ordering is lost.
// note 139: Handles single-element input as a base case.
// note 140: Best case is O(1) when the first byte already decides the answer.
// note 141: Stable when the input is already sorted.
// note 142: Space complexity: O(log n) for the recursion stack.
// note 143: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 144: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 145: Avoids floating-point entirely — integer math throughout.
// note 146: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 147: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 148: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 149: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 150: Euler tour flattens a tree into an array for range-query LCA.
// note 151: Splay tree: every access splays to the root; amortized O(log n).
// note 152: Idempotent — calling twice with the same input is a no-op the second time.
// note 153: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 154: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 155: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 156: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 157: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 158: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 159: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 160: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 161: Articulation points: same DFS as bridges, with a slightly different test.
// note 162: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 163: Endianness matters when serializing multi-byte ints to a file or wire.
// note 164: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 165: Constant-time comparisons; safe for short strings.
// note 166: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 167: Space complexity: O(log n) for the recursion stack.
// note 168: 64-bit safe; intermediate products are widened to 128-bit.
// note 169: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 170: Mutates the input in place; the original ordering is lost.
// note 171: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 172: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 173: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 174: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 175: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 176: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 177: Input is assumed non-NULL; behavior is undefined otherwise.
// note 178: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 179: State compression: bitmask + integer encodes a small subset cheaply.
// note 180: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 181: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 182: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 183: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 184: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 185: Time complexity: O(k) where k is the answer size.
// note 186: Time complexity: O(n^2) worst case, O(n) amortized.
// note 187: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 188: Three passes total; the third merges results.
// note 189: Best case is O(1) when the first byte already decides the answer.
// note 190: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 191: Endianness matters when serializing multi-byte ints to a file or wire.
// note 192: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 193: Sub-linear in the average case thanks to early exit.
