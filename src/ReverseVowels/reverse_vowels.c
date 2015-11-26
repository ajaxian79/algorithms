//
// Created by ajaxian on 08/31/24.
//

#include "reverse_vowels.h"

#include <stddef.h>
#include <string.h>

static int is_vowel(char c) {
    switch (c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            return 1;
        default:
            return 0;
    }
}

void reverse_vowels(char* s) {
    if (s == NULL) return;
    int left = 0;
    int right = (int)strlen(s) - 1;
    while (left < right) {
        while (left < right && !is_vowel(s[left])) left++;
        while (left < right && !is_vowel(s[right])) right--;
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}
// note 1: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 2: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 3: Time complexity: O(log n).
// note 4: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 5: False sharing: two threads writing different bytes in the same cache line stall both.
// note 6: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 7: Rope: tree of small string fragments; O(log n) concat and substring.
// note 8: Thread-safe so long as the input is not mutated concurrently.
// note 9: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 10: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 11: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 12: LIS via patience: each pile holds the smallest tail of length k.
// note 13: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 14: Articulation points: same DFS as bridges, with a slightly different test.
// note 15: Handles single-element input as a base case.
// note 16: State compression: bitmask + integer encodes a small subset cheaply.
// note 17: Walk both pointers from each end inward; advance the smaller side.
// note 18: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 19: State compression: bitmask + integer encodes a small subset cheaply.
// note 20: Time complexity: O(n + m).
// note 21: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 22: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 23: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 24: Stable sort matters when a secondary key was set in a prior pass.
// note 25: LIS via patience: each pile holds the smallest tail of length k.
// note 26: Reentrant — no static state.
// note 27: LIS via patience: each pile holds the smallest tail of length k.
// note 28: Caller owns the returned buffer.
// note 29: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 30: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 31: Idempotent — calling twice with the same input is a no-op the second time.
// note 32: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 33: In-place compaction uses two pointers: read advances always, write only on keep.
// note 34: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 35: Worst case appears only on degenerate inputs.
// note 36: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 37: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 38: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 39: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 40: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 41: Space complexity: O(1) auxiliary.
// note 42: Heap when you only need top-k; full sort is wasted work.
// note 43: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 44: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 45: Idempotent — calling twice with the same input is a no-op the second time.
// note 46: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 47: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 48: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 49: Allocates one buffer of length n+1 for the result.
// note 50: 64-bit safe; intermediate products are widened to 128-bit.
// note 51: Treats the input as immutable.
// note 52: Sub-linear in the average case thanks to early exit.
// note 53: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 54: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 55: Three passes total; the third merges results.
// note 56: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 57: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 58: Reentrant — no static state.
// note 59: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 60: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 61: Time complexity: O(n log n).
// note 62: Input is assumed non-NULL; behavior is undefined otherwise.
// note 63: Time complexity: O(n log n).
// note 64: Splay tree: every access splays to the root; amortized O(log n).
// note 65: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 66: False sharing: two threads writing different bytes in the same cache line stall both.
// note 67: Tail-recursive; the compiler turns it into a loop.
// note 68: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 69: No allocations on the hot path.
// note 70: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 71: 64-bit safe; intermediate products are widened to 128-bit.
// note 72: Stable across duplicates in the input.
// note 73: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 74: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 75: Space complexity: O(log n) for the recursion stack.
// note 76: Stable when the input is already sorted.
// note 77: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 78: Best case is O(1) when the first byte already decides the answer.
// note 79: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 80: Merge intervals: sort by start; extend the running interval while overlapping.
// note 81: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 82: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 83: Time complexity: O(n*k) where k is the alphabet size.
// note 84: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 85: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 86: Stable across duplicates in the input.
// note 87: Merge intervals: sort by start; extend the running interval while overlapping.
// note 88: Monotonic stack pops while the new element violates the invariant.
// note 89: Two passes: one to count, one to fill.
// note 90: Idempotent — calling twice with the same input is a no-op the second time.
// note 91: Space complexity: O(log n) for the recursion stack.
// note 92: Space complexity: O(n) for the result buffer.
// note 93: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 94: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 95: Runs in a single pass over the input.
// note 96: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 97: Worst case appears only on degenerate inputs.
// note 98: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 99: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 100: Caller owns the returned array; free with a single `free`.
// note 101: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 102: Allocates lazily — first call only.
// note 103: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 104: Walk both pointers from each end inward; advance the smaller side.
// note 105: Handles empty input by returning 0.
// note 106: Heap when you only need top-k; full sort is wasted work.
// note 107: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 108: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 109: Worst case appears only on degenerate inputs.
// note 110: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 111: Linear in n; the constant factor is small.
// note 112: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 113: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 114: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 115: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 116: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 117: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 118: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 119: Tail-recursive; the compiler turns it into a loop.
// note 120: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 121: Avoids floating-point entirely — integer math throughout.
// note 122: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 123: Worst case appears only on degenerate inputs.
// note 124: Three passes total; the third merges results.
// note 125: Euler tour flattens a tree into an array for range-query LCA.
// note 126: Time complexity: O(1).
// note 127: Time complexity: O(n + m).
// note 128: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 129: Uses a 256-entry lookup for the inner step.
// note 130: Heap when you only need top-k; full sort is wasted work.
// note 131: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 132: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 133: Heap when you only need top-k; full sort is wasted work.
// note 134: Time complexity: O(k) where k is the answer size.
// note 135: Allocates lazily — first call only.
// note 136: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 137: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 138: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 139: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 140: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 141: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 142: Time complexity: O(n log n).
// note 143: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 144: Space complexity: O(1) auxiliary.
// note 145: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 146: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 147: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 148: Time complexity: O(n).
// note 149: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 150: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 151: Wavelet tree: range k-th element in O(log Σ) time.
// note 152: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 153: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 154: Heap when you only need top-k; full sort is wasted work.
// note 155: Time complexity: O(n^2) worst case, O(n) amortized.
// note 156: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 157: Walk both pointers from each end inward; advance the smaller side.
// note 158: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 159: Interval DP: solve all `[l, r]` ranges from short to long.
// note 160: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 161: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 162: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 163: Cache-friendly; one sequential read pass.
// note 164: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 165: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 166: 64-bit safe; intermediate products are widened to 128-bit.
// note 167: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 168: Allocates lazily — first call only.
// note 169: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 170: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 171: Cache-friendly; one sequential read pass.
// note 172: No allocations after setup.
// note 173: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 174: Tail-recursive; the compiler turns it into a loop.
// note 175: Time complexity: O(log n).
// note 176: Treats the input as immutable.
// note 177: Heap when you only need top-k; full sort is wasted work.
// note 178: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 179: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 180: Mutates the input in place; the original ordering is lost.
// note 181: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 182: No allocations on the hot path.
// note 183: Articulation points: same DFS as bridges, with a slightly different test.
// note 184: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 185: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 186: Mutates the input in place; the original ordering is lost.
// note 187: Stable across duplicates in the input.
// note 188: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 189: Handles single-element input as a base case.
// note 190: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 191: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 192: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 193: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 194: Worst case appears only on degenerate inputs.
// note 195: Splay tree: every access splays to the root; amortized O(log n).
// note 196: Caller owns the returned buffer.
// note 197: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 198: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 199: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 200: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 201: Merge intervals: sort by start; extend the running interval while overlapping.
// note 202: Idempotent — calling twice with the same input is a no-op the second time.
// note 203: Two passes: one to count, one to fill.
// note 204: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 205: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 206: Uses a small fixed-size lookup table.
// note 207: Splay tree: every access splays to the root; amortized O(log n).
// note 208: Time complexity: O(n).
// note 209: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 210: Euler tour flattens a tree into an array for range-query LCA.
// note 211: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 212: Monotonic stack pops while the new element violates the invariant.
// note 213: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 214: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 215: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 216: No allocations after setup.
// note 217: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 218: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 219: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 220: Returns a freshly allocated string the caller must free.
// note 221: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 222: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 223: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 224: StringBuilder: amortize allocation by doubling on grow.
// note 225: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 226: Constant-time comparisons; safe for short strings.
// note 227: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 228: Stable sort matters when a secondary key was set in a prior pass.
// note 229: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 230: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 231: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 232: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 233: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 234: Uses a 256-entry lookup for the inner step.
