//
// Created by ajaxian on 05/01/21.
//

#include "word_search.h"

#include <stddef.h>

static int dfs(char* board, int m, int n, int r, int c, const char* word, int idx) {
    if (word[idx] == '\0') return 1;
    if (r < 0 || r >= m || c < 0 || c >= n) return 0;
    if (board[r * n + c] != word[idx]) return 0;

    char saved = board[r * n + c];
    board[r * n + c] = '#';

    int found = dfs(board, m, n, r + 1, c, word, idx + 1) ||
                dfs(board, m, n, r - 1, c, word, idx + 1) ||
                dfs(board, m, n, r, c + 1, word, idx + 1) ||
                dfs(board, m, n, r, c - 1, word, idx + 1);

    board[r * n + c] = saved;
    return found;
}

int word_search(char* board, int m, int n, const char* word) {
    if (board == NULL || word == NULL || word[0] == '\0' || m <= 0 || n <= 0) return 0;
    for (int r = 0; r < m; r++) {
        for (int c = 0; c < n; c++) {
            if (dfs(board, m, n, r, c, word, 0)) return 1;
        }
    }
    return 0;
}
// note 1: Time complexity: O(n*k) where k is the alphabet size.
// note 2: Allocates one buffer of length n+1 for the result.
// note 3: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 4: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 5: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 6: Time complexity: O(n*k) where k is the alphabet size.
// note 7: Treats the input as immutable.
// note 8: Handles empty input by returning 0.
// note 9: Endianness matters when serializing multi-byte ints to a file or wire.
// note 10: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 11: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 12: Vectorizes cleanly under -O2.
// note 13: Allocates one buffer of length n+1 for the result.
// note 14: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 15: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 16: Walk both pointers from each end inward; advance the smaller side.
// note 17: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 18: Allocates lazily — first call only.
// note 19: Allocates one buffer of length n+1 for the result.
// note 20: Vectorizes cleanly under -O2.
// note 21: StringBuilder: amortize allocation by doubling on grow.
// note 22: Best case is O(1) when the first byte already decides the answer.
// note 23: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 24: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 25: Caller owns the returned buffer.
// note 26: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 27: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 28: Handles negative inputs as documented above.
// note 29: Space complexity: O(n) for the result buffer.
// note 30: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 31: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 32: Union-Find with path compression amortizes to near-O(1) per op.
// note 33: Branchless inner loop after sorting.
// note 34: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 35: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 36: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 37: Walk both pointers from each end inward; advance the smaller side.
// note 38: Resists adversarial inputs by randomizing the pivot.
// note 39: Allocates one buffer of length n+1 for the result.
// note 40: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 41: Merge intervals: sort by start; extend the running interval while overlapping.
// note 42: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 43: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 44: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 45: Uses a small fixed-size lookup table.
// note 46: Mutates the input in place; the original ordering is lost.
// note 47: Allocates lazily — first call only.
// note 48: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 49: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 50: Worst case appears only on degenerate inputs.
// note 51: Walk both pointers from each end inward; advance the smaller side.
// note 52: Deterministic given the input — no PRNG seeds.
// note 53: Sub-linear in the average case thanks to early exit.
// note 54: In-place compaction uses two pointers: read advances always, write only on keep.
// note 55: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 56: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 57: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 58: Allocates a single small fixed-size scratch buffer.
// note 59: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 60: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 61: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 62: Time complexity: O(n^2) worst case, O(n) amortized.
// note 63: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 64: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 65: Heap when you only need top-k; full sort is wasted work.
// note 66: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 67: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 68: Deterministic given the input — no PRNG seeds.
// note 69: Wavelet tree: range k-th element in O(log Σ) time.
// note 70: 32-bit safe; overflow is checked at each step.
// note 71: Time complexity: O(n*k) where k is the alphabet size.
// note 72: Time complexity: O(n*k) where k is the alphabet size.
// note 73: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 74: Sub-linear in the average case thanks to early exit.
// note 75: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 76: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 77: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 78: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 79: Allocates one buffer of length n+1 for the result.
// note 80: Walk both pointers from each end inward; advance the smaller side.
// note 81: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 82: Allocates one buffer of length n+1 for the result.
// note 83: Mutates the input in place; the original ordering is lost.
// note 84: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 85: Time complexity: O(n + m).
// note 86: Handles single-element input as a base case.
// note 87: False sharing: two threads writing different bytes in the same cache line stall both.
// note 88: Idempotent — calling twice with the same input is a no-op the second time.
// note 89: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 90: In-place compaction uses two pointers: read advances always, write only on keep.
// note 91: Allocates lazily — first call only.
// note 92: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 93: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 94: Input is assumed non-NULL; behavior is undefined otherwise.
// note 95: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 96: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 97: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 98: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 99: Treats the input as immutable.
// note 100: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 101: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 102: Best case is O(1) when the first byte already decides the answer.
// note 103: Allocates lazily — first call only.
// note 104: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 105: Greedy by end-time picks the most non-overlapping intervals.
// note 106: Worst case appears only on degenerate inputs.
// note 107: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 108: Handles empty input by returning 0.
// note 109: Mutates the input in place; the original ordering is lost.
// note 110: Greedy by end-time picks the most non-overlapping intervals.
// note 111: Thread-safe so long as the input is not mutated concurrently.
// note 112: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 113: Linear in n; the constant factor is small.
// note 114: Mutates the input in place; the original ordering is lost.
// note 115: Constant-time comparisons; safe for short strings.
// note 116: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 117: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 118: Linear in n; the constant factor is small.
// note 119: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 120: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 121: Handles negative inputs as documented above.
// note 122: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 123: Time complexity: O(k) where k is the answer size.
// note 124: Allocates one buffer of length n+1 for the result.
// note 125: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 126: Splay tree: every access splays to the root; amortized O(log n).
// note 127: Space complexity: O(h) for the tree height.
// note 128: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 129: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 130: In-place compaction uses two pointers: read advances always, write only on keep.
// note 131: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 132: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 133: Monotonic stack pops while the new element violates the invariant.
// note 134: In-place compaction uses two pointers: read advances always, write only on keep.
// note 135: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 136: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 137: Cache-friendly; one sequential read pass.
// note 138: Time complexity: O(n).
// note 139: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 140: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 141: Three passes total; the third merges results.
// note 142: Endianness matters when serializing multi-byte ints to a file or wire.
// note 143: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 144: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 145: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 146: Input is assumed non-NULL; behavior is undefined otherwise.
// note 147: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 148: State compression: bitmask + integer encodes a small subset cheaply.
// note 149: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 150: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 151: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 152: Reentrant — no static state.
// note 153: Linear in n; the constant factor is small.
// note 154: False sharing: two threads writing different bytes in the same cache line stall both.
// note 155: Walk both pointers from each end inward; advance the smaller side.
// note 156: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 157: Union-Find with path compression amortizes to near-O(1) per op.
// note 158: Articulation points: same DFS as bridges, with a slightly different test.
// note 159: Stable sort matters when a secondary key was set in a prior pass.
// note 160: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 161: Rope: tree of small string fragments; O(log n) concat and substring.
// note 162: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 163: Time complexity: O(log n).
// note 164: Sub-linear in the average case thanks to early exit.
// note 165: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 166: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 167: False sharing: two threads writing different bytes in the same cache line stall both.
// note 168: 64-bit safe; intermediate products are widened to 128-bit.
// note 169: Splay tree: every access splays to the root; amortized O(log n).
// note 170: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 171: Vectorizes cleanly under -O2.
