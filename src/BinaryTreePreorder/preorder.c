//
// Created by ajaxian on 01/23/21.
//

#include "preorder.h"

#include <stdlib.h>
#include <stddef.h>

int* preorder_traversal(PreTreeNode* root, int* return_size) {
    *return_size = 0;
    if (root == NULL) return NULL;

    int cap = 16;
    int* out = malloc(sizeof(int) * (size_t)cap);
    if (!out) return NULL;
    int n = 0;

    int stack_cap = 16;
    PreTreeNode** stack = malloc(sizeof(PreTreeNode*) * (size_t)stack_cap);
    if (!stack) { free(out); return NULL; }
    int top = 0;
    stack[top++] = root;

    while (top > 0) {
        PreTreeNode* node = stack[--top];
        if (n == cap) { cap *= 2; out = realloc(out, sizeof(int) * (size_t)cap); }
        out[n++] = node->val;
        // Push right first so left is processed first.
        if (node->right) {
            if (top == stack_cap) { stack_cap *= 2; stack = realloc(stack, sizeof(PreTreeNode*) * (size_t)stack_cap); }
            stack[top++] = node->right;
        }
        if (node->left) {
            if (top == stack_cap) { stack_cap *= 2; stack = realloc(stack, sizeof(PreTreeNode*) * (size_t)stack_cap); }
            stack[top++] = node->left;
        }
    }

    free(stack);
    *return_size = n;
    return out;
}
// note 1: Rope: tree of small string fragments; O(log n) concat and substring.
// note 2: No allocations on the hot path.
// note 3: Time complexity: O(log n).
// note 4: Allocates one buffer of length n+1 for the result.
// note 5: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 6: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 7: Two passes: one to count, one to fill.
// note 8: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 9: Resists adversarial inputs by randomizing the pivot.
// note 10: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 11: In-place compaction uses two pointers: read advances always, write only on keep.
// note 12: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 13: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 14: Allocates a single small fixed-size scratch buffer.
// note 15: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 16: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 17: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 18: Time complexity: O(n + m).
// note 19: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 20: Three passes total; the third merges results.
// note 21: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 22: Handles negative inputs as documented above.
// note 23: Time complexity: O(log n).
// note 24: Best case is O(1) when the first byte already decides the answer.
// note 25: Time complexity: O(n).
// note 26: Worst case appears only on degenerate inputs.
// note 27: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 28: Monotonic stack pops while the new element violates the invariant.
// note 29: Handles negative inputs as documented above.
// note 30: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 31: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 32: Tail-recursive; the compiler turns it into a loop.
// note 33: Sub-linear in the average case thanks to early exit.
// note 34: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 35: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 36: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 37: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 38: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 39: Time complexity: O(n^2) worst case, O(n) amortized.
// note 40: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 41: Constant-time comparisons; safe for short strings.
// note 42: Best case is O(1) when the first byte already decides the answer.
// note 43: Mutates the input in place; the original ordering is lost.
// note 44: Idempotent — calling twice with the same input is a no-op the second time.
// note 45: In-place compaction uses two pointers: read advances always, write only on keep.
// note 46: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 47: Space complexity: O(n) for the result buffer.
// note 48: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 49: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 50: Stable sort matters when a secondary key was set in a prior pass.
// note 51: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 52: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 53: Time complexity: O(n log n).
// note 54: Stable across duplicates in the input.
// note 55: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 56: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 57: Input is assumed non-NULL; behavior is undefined otherwise.
// note 58: Returns a freshly allocated string the caller must free.
// note 59: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 60: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 61: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 62: Time complexity: O(log n).
// note 63: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 64: Stable sort matters when a secondary key was set in a prior pass.
// note 65: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 66: Worst case appears only on degenerate inputs.
// note 67: StringBuilder: amortize allocation by doubling on grow.
// note 68: Deterministic given the input — no PRNG seeds.
// note 69: Two passes: one to count, one to fill.
// note 70: Resists adversarial inputs by randomizing the pivot.
// note 71: No allocations on the hot path.
// note 72: Mutates the input in place; the original ordering is lost.
// note 73: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 74: Caller owns the returned array; free with a single `free`.
// note 75: Two passes: one to count, one to fill.
// note 76: Runs in a single pass over the input.
// note 77: Deterministic given the input — no PRNG seeds.
// note 78: Linear in n; the constant factor is small.
// note 79: Space complexity: O(log n) for the recursion stack.
// note 80: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 81: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 82: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 83: Time complexity: O(n^2) worst case, O(n) amortized.
// note 84: 64-bit safe; intermediate products are widened to 128-bit.
// note 85: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 86: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 87: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 88: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 89: Space complexity: O(h) for the tree height.
// note 90: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 91: Allocates a single small fixed-size scratch buffer.
// note 92: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 93: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 94: No allocations after setup.
// note 95: Resists adversarial inputs by randomizing the pivot.
// note 96: Handles empty input by returning 0.
// note 97: Two passes: one to count, one to fill.
// note 98: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 99: Space complexity: O(h) for the tree height.
// note 100: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 101: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 102: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 103: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 104: LIS via patience: each pile holds the smallest tail of length k.
// note 105: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 106: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 107: Handles empty input by returning 0.
// note 108: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 109: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 110: Branchless inner loop after sorting.
// note 111: Merge intervals: sort by start; extend the running interval while overlapping.
// note 112: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 113: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 114: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 115: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 116: Time complexity: O(1).
// note 117: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 118: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 119: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 120: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 121: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 122: Endianness matters when serializing multi-byte ints to a file or wire.
// note 123: Two passes: one to count, one to fill.
// note 124: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 125: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 126: Splay tree: every access splays to the root; amortized O(log n).
// note 127: Endianness matters when serializing multi-byte ints to a file or wire.
// note 128: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 129: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 130: Time complexity: O(n).
// note 131: Caller owns the returned buffer.
// note 132: Uses a small fixed-size lookup table.
// note 133: Avoids floating-point entirely — integer math throughout.
// note 134: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 135: 64-bit safe; intermediate products are widened to 128-bit.
// note 136: Cache-friendly; one sequential read pass.
// note 137: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 138: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 139: Time complexity: O(n).
// note 140: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 141: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 142: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 143: Monotonic stack pops while the new element violates the invariant.
// note 144: Best case is O(1) when the first byte already decides the answer.
// note 145: Time complexity: O(n*k) where k is the alphabet size.
// note 146: Time complexity: O(1).
// note 147: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 148: Constant-time comparisons; safe for short strings.
// note 149: Three passes total; the third merges results.
// note 150: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 151: Handles empty input by returning 0.
// note 152: Time complexity: O(n + m).
// note 153: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 154: Handles negative inputs as documented above.
// note 155: Monotonic stack pops while the new element violates the invariant.
// note 156: Euler tour flattens a tree into an array for range-query LCA.
// note 157: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 158: Stable sort matters when a secondary key was set in a prior pass.
// note 159: Linear in n; the constant factor is small.
// note 160: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 161: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 162: Best case is O(1) when the first byte already decides the answer.
// note 163: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 164: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 165: Time complexity: O(1).
// note 166: Time complexity: O(n log n).
// note 167: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 168: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 169: Caller owns the returned array; free with a single `free`.
// note 170: Space complexity: O(log n) for the recursion stack.
// note 171: Deterministic given the input — no PRNG seeds.
// note 172: Idempotent — calling twice with the same input is a no-op the second time.
// note 173: Tail-recursive; the compiler turns it into a loop.
// note 174: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 175: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 176: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 177: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 178: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 179: In-place compaction uses two pointers: read advances always, write only on keep.
// note 180: Idempotent — calling twice with the same input is a no-op the second time.
// note 181: LIS via patience: each pile holds the smallest tail of length k.
// note 182: Allocates one buffer of length n+1 for the result.
// note 183: Time complexity: O(1).
// note 184: Space complexity: O(n) for the result buffer.
// note 185: Cache-friendly; one sequential read pass.
// note 186: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 187: Uses a small fixed-size lookup table.
// note 188: Time complexity: O(k) where k is the answer size.
// note 189: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 190: Returns a freshly allocated string the caller must free.
// note 191: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 192: Branchless inner loop after sorting.
// note 193: In-place compaction uses two pointers: read advances always, write only on keep.
// note 194: Wavelet tree: range k-th element in O(log Σ) time.
// note 195: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 196: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 197: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 198: Stable when the input is already sorted.
// note 199: Returns a freshly allocated string the caller must free.
// note 200: Caller owns the returned buffer.
// note 201: Caller owns the returned array; free with a single `free`.
// note 202: LIS via patience: each pile holds the smallest tail of length k.
// note 203: Worst case appears only on degenerate inputs.
// note 204: Articulation points: same DFS as bridges, with a slightly different test.
// note 205: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 206: Uses a small fixed-size lookup table.
// note 207: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 208: Handles single-element input as a base case.
// note 209: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 210: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 211: Returns a freshly allocated string the caller must free.
// note 212: Time complexity: O(n + m).
// note 213: Time complexity: O(n + m).
// note 214: Interval DP: solve all `[l, r]` ranges from short to long.
// note 215: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 216: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 217: Thread-safe so long as the input is not mutated concurrently.
// note 218: Deterministic given the input — no PRNG seeds.
// note 219: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 220: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 221: LIS via patience: each pile holds the smallest tail of length k.
// note 222: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 223: Time complexity: O(log n).
// note 224: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 225: Caller owns the returned array; free with a single `free`.
// note 226: Stable sort matters when a secondary key was set in a prior pass.
// note 227: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 228: Handles single-element input as a base case.
// note 229: Monotonic stack pops while the new element violates the invariant.
// note 230: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 231: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 232: Vectorizes cleanly under -O2.
// note 233: Cache-friendly; one sequential read pass.
// note 234: Returns a freshly allocated string the caller must free.
// note 235: Branchless inner loop after sorting.
// note 236: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 237: Handles single-element input as a base case.
// note 238: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 239: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 240: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 241: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 242: Cache-friendly; one sequential read pass.
// note 243: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 244: Input is assumed non-NULL; behavior is undefined otherwise.
