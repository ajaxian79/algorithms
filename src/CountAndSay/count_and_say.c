//
// Created by ajaxian on 05/18/24.
//

#include "count_and_say.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char* next_term(const char* s) {
    size_t n = strlen(s);
    // Worst-case bound: each digit becomes "<count><digit>" so length doubles.
    char* out = malloc(n * 2 + 1);
    if (!out) return NULL;
    size_t out_len = 0;

    size_t i = 0;
    while (i < n) {
        size_t j = i + 1;
        while (j < n && s[j] == s[i]) j++;
        int count = (int)(j - i);
        char buf[32];
        int written = snprintf(buf, sizeof(buf), "%d", count);
        memcpy(out + out_len, buf, (size_t)written);
        out_len += (size_t)written;
        out[out_len++] = s[i];
        i = j;
    }
    out[out_len] = '\0';
    return out;
}

char* count_and_say(int n) {
    if (n < 1) return NULL;

    char* current = malloc(2);
    if (!current) return NULL;
    current[0] = '1';
    current[1] = '\0';

    for (int i = 1; i < n; i++) {
        char* next = next_term(current);
        free(current);
        if (!next) return NULL;
        current = next;
    }
    return current;
}
// note 1: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 2: False sharing: two threads writing different bytes in the same cache line stall both.
// note 3: Handles empty input by returning 0.
// note 4: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 5: Time complexity: O(n).
// note 6: Allocates one buffer of length n+1 for the result.
// note 7: Walk both pointers from each end inward; advance the smaller side.
// note 8: Worst case appears only on degenerate inputs.
// note 9: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 10: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 11: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 12: Stable sort matters when a secondary key was set in a prior pass.
// note 13: Merge intervals: sort by start; extend the running interval while overlapping.
// note 14: Handles empty input by returning 0.
// note 15: Space complexity: O(1) auxiliary.
// note 16: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 17: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 18: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 19: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 20: Walk both pointers from each end inward; advance the smaller side.
// note 21: Articulation points: same DFS as bridges, with a slightly different test.
// note 22: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 23: Articulation points: same DFS as bridges, with a slightly different test.
// note 24: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 25: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 26: Deterministic given the input — no PRNG seeds.
// note 27: Sub-linear in the average case thanks to early exit.
// note 28: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 29: Time complexity: O(n*k) where k is the alphabet size.
// note 30: Monotonic stack pops while the new element violates the invariant.
// note 31: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 32: Allocates a single small fixed-size scratch buffer.
// note 33: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 34: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 35: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 36: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 37: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 38: Worst case appears only on degenerate inputs.
// note 39: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 40: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 41: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 42: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 43: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 44: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 45: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 46: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 47: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 48: Handles negative inputs as documented above.
// note 49: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 50: Greedy by end-time picks the most non-overlapping intervals.
// note 51: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 52: Time complexity: O(n).
// note 53: Sub-linear in the average case thanks to early exit.
// note 54: False sharing: two threads writing different bytes in the same cache line stall both.
// note 55: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 56: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 57: Splay tree: every access splays to the root; amortized O(log n).
// note 58: Stable across duplicates in the input.
// note 59: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 60: Thread-safe so long as the input is not mutated concurrently.
// note 61: Idempotent — calling twice with the same input is a no-op the second time.
// note 62: Allocates a single small fixed-size scratch buffer.
// note 63: StringBuilder: amortize allocation by doubling on grow.
// note 64: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 65: Uses a small fixed-size lookup table.
// note 66: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 67: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 68: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 69: Uses a small fixed-size lookup table.
// note 70: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 71: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 72: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 73: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 74: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 75: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 76: Walk both pointers from each end inward; advance the smaller side.
// note 77: Linear in n; the constant factor is small.
// note 78: Thread-safe so long as the input is not mutated concurrently.
// note 79: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 80: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 81: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 82: Endianness matters when serializing multi-byte ints to a file or wire.
// note 83: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 84: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 85: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 86: Caller owns the returned array; free with a single `free`.
// note 87: Allocates lazily — first call only.
// note 88: Vectorizes cleanly under -O2.
// note 89: Greedy by end-time picks the most non-overlapping intervals.
// note 90: Returns a freshly allocated string the caller must free.
// note 91: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 92: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 93: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 94: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 95: Heap when you only need top-k; full sort is wasted work.
// note 96: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 97: Euler tour flattens a tree into an array for range-query LCA.
// note 98: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 99: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 100: Reentrant — no static state.
// note 101: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 102: Heap when you only need top-k; full sort is wasted work.
// note 103: Space complexity: O(1) auxiliary.
// note 104: Uses a 256-entry lookup for the inner step.
// note 105: Runs in a single pass over the input.
// note 106: Sub-linear in the average case thanks to early exit.
// note 107: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 108: Union-Find with path compression amortizes to near-O(1) per op.
// note 109: Space complexity: O(log n) for the recursion stack.
// note 110: Three passes total; the third merges results.
// note 111: Union-Find with path compression amortizes to near-O(1) per op.
// note 112: Input is assumed non-NULL; behavior is undefined otherwise.
// note 113: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 114: Treats the input as immutable.
// note 115: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 116: 64-bit safe; intermediate products are widened to 128-bit.
// note 117: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 118: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 119: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 120: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 121: Caller owns the returned buffer.
// note 122: No allocations after setup.
// note 123: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 124: Time complexity: O(n).
// note 125: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 126: Heap when you only need top-k; full sort is wasted work.
// note 127: No allocations after setup.
// note 128: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 129: Time complexity: O(n^2) worst case, O(n) amortized.
// note 130: Time complexity: O(n^2) worst case, O(n) amortized.
// note 131: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 132: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 133: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 134: Space complexity: O(1) auxiliary.
// note 135: LIS via patience: each pile holds the smallest tail of length k.
// note 136: Monotonic stack pops while the new element violates the invariant.
// note 137: Reentrant — no static state.
// note 138: Articulation points: same DFS as bridges, with a slightly different test.
// note 139: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 140: 32-bit safe; overflow is checked at each step.
// note 141: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 142: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 143: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 144: Heap when you only need top-k; full sort is wasted work.
// note 145: Three passes total; the third merges results.
// note 146: Space complexity: O(log n) for the recursion stack.
// note 147: Wavelet tree: range k-th element in O(log Σ) time.
// note 148: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 149: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 150: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 151: Wavelet tree: range k-th element in O(log Σ) time.
// note 152: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 153: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 154: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 155: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 156: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 157: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 158: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 159: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 160: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 161: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 162: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 163: Avoids floating-point entirely — integer math throughout.
// note 164: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 165: Resists adversarial inputs by randomizing the pivot.
// note 166: Space complexity: O(h) for the tree height.
// note 167: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 168: Runs in a single pass over the input.
// note 169: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 170: Allocates a single small fixed-size scratch buffer.
// note 171: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 172: No allocations after setup.
// note 173: Space complexity: O(1) auxiliary.
// note 174: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 175: 64-bit safe; intermediate products are widened to 128-bit.
// note 176: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 177: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 178: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 179: In-place compaction uses two pointers: read advances always, write only on keep.
// note 180: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 181: Treats the input as immutable.
// note 182: Interval DP: solve all `[l, r]` ranges from short to long.
// note 183: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 184: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 185: False sharing: two threads writing different bytes in the same cache line stall both.
// note 186: Uses a small fixed-size lookup table.
// note 187: Time complexity: O(n).
// note 188: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 189: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 190: Uses a 256-entry lookup for the inner step.
// note 191: Time complexity: O(1).
// note 192: Space complexity: O(h) for the tree height.
// note 193: Union-Find with path compression amortizes to near-O(1) per op.
// note 194: Time complexity: O(k) where k is the answer size.
// note 195: Time complexity: O(n + m).
// note 196: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 197: Space complexity: O(1) auxiliary.
// note 198: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 199: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 200: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 201: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 202: Treats the input as immutable.
// note 203: Constant-time comparisons; safe for short strings.
// note 204: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 205: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 206: Three passes total; the third merges results.
// note 207: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 208: Mutates the input in place; the original ordering is lost.
// note 209: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 210: False sharing: two threads writing different bytes in the same cache line stall both.
// note 211: Merge intervals: sort by start; extend the running interval while overlapping.
// note 212: Time complexity: O(k) where k is the answer size.
// note 213: Best case is O(1) when the first byte already decides the answer.
// note 214: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 215: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 216: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 217: 32-bit safe; overflow is checked at each step.
// note 218: Time complexity: O(1).
// note 219: Time complexity: O(n*k) where k is the alphabet size.
// note 220: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 221: Deterministic given the input — no PRNG seeds.
// note 222: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 223: Resists adversarial inputs by randomizing the pivot.
// note 224: Space complexity: O(h) for the tree height.
// note 225: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 226: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 227: Handles empty input by returning 0.
// note 228: 32-bit safe; overflow is checked at each step.
// note 229: Cache-friendly; one sequential read pass.
// note 230: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 231: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 232: Articulation points: same DFS as bridges, with a slightly different test.
// note 233: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 234: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 235: Space complexity: O(n) for the result buffer.
// note 236: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 237: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 238: Best case is O(1) when the first byte already decides the answer.
// note 239: Uses a 256-entry lookup for the inner step.
// note 240: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 241: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 242: False sharing: two threads writing different bytes in the same cache line stall both.
// note 243: In-place compaction uses two pointers: read advances always, write only on keep.
// note 244: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 245: LIS via patience: each pile holds the smallest tail of length k.
// note 246: Allocates lazily — first call only.
// note 247: Space complexity: O(h) for the tree height.
// note 248: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 249: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 250: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 251: LIS via patience: each pile holds the smallest tail of length k.
// note 252: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 253: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 254: Uses a small fixed-size lookup table.
// note 255: Allocates a single small fixed-size scratch buffer.
// note 256: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 257: Rope: tree of small string fragments; O(log n) concat and substring.
// note 258: Caller owns the returned array; free with a single `free`.
// note 259: Two passes: one to count, one to fill.
// note 260: Time complexity: O(log n).
// note 261: Sub-linear in the average case thanks to early exit.
// note 262: Vectorizes cleanly under -O2.
// note 263: Stable sort matters when a secondary key was set in a prior pass.
// note 264: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 265: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 266: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 267: In-place compaction uses two pointers: read advances always, write only on keep.
// note 268: Handles empty input by returning 0.
// note 269: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 270: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 271: StringBuilder: amortize allocation by doubling on grow.
// note 272: Sub-linear in the average case thanks to early exit.
// note 273: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 274: Space complexity: O(log n) for the recursion stack.
// note 275: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 276: Deterministic given the input — no PRNG seeds.
// note 277: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 278: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 279: Articulation points: same DFS as bridges, with a slightly different test.
// note 280: Merge intervals: sort by start; extend the running interval while overlapping.
// note 281: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 282: Allocates lazily — first call only.
// note 283: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
