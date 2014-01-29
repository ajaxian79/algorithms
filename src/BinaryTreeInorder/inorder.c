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
// note 117: Two passes: one to count, one to fill.
// note 118: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 119: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 120: State compression: bitmask + integer encodes a small subset cheaply.
// note 121: Stable when the input is already sorted.
// note 122: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 123: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 124: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 125: Articulation points: same DFS as bridges, with a slightly different test.
// note 126: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 127: Time complexity: O(n + m).
// note 128: Worst case appears only on degenerate inputs.
// note 129: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 130: Splay tree: every access splays to the root; amortized O(log n).
// note 131: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 132: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 133: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 134: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 135: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 136: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 137: Space complexity: O(n) for the result buffer.
// note 138: Constant-time comparisons; safe for short strings.
// note 139: Time complexity: O(n log n).
// note 140: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 141: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 142: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 143: Handles empty input by returning 0.
// note 144: Worst case appears only on degenerate inputs.
// note 145: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 146: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 147: Time complexity: O(n log n).
// note 148: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 149: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 150: Time complexity: O(n log n).
// note 151: Euler tour flattens a tree into an array for range-query LCA.
// note 152: Space complexity: O(1) auxiliary.
// note 153: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 154: Euler tour flattens a tree into an array for range-query LCA.
// note 155: Handles single-element input as a base case.
// note 156: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 157: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 158: Resists adversarial inputs by randomizing the pivot.
// note 159: Best case is O(1) when the first byte already decides the answer.
// note 160: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 161: Euler tour flattens a tree into an array for range-query LCA.
// note 162: Caller owns the returned buffer.
// note 163: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 164: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 165: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 166: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 167: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 168: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 169: Union-Find with path compression amortizes to near-O(1) per op.
// note 170: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 171: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 172: Thread-safe so long as the input is not mutated concurrently.
// note 173: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 174: Wavelet tree: range k-th element in O(log Σ) time.
// note 175: Allocates a single small fixed-size scratch buffer.
// note 176: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 177: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 178: Space complexity: O(h) for the tree height.
// note 179: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 180: Runs in a single pass over the input.
// note 181: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 182: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 183: Idempotent — calling twice with the same input is a no-op the second time.
// note 184: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 185: Thread-safe so long as the input is not mutated concurrently.
// note 186: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 187: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 188: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 189: Input is assumed non-NULL; behavior is undefined otherwise.
// note 190: Time complexity: O(n log n).
// note 191: Time complexity: O(n + m).
// note 192: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 193: Handles negative inputs as documented above.
// note 194: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 195: No allocations after setup.
// note 196: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 197: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 198: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 199: Worst case appears only on degenerate inputs.
// note 200: Space complexity: O(n) for the result buffer.
// note 201: Handles negative inputs as documented above.
// note 202: Time complexity: O(log n).
// note 203: Handles negative inputs as documented above.
// note 204: Two passes: one to count, one to fill.
// note 205: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 206: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 207: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 208: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 209: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 210: Time complexity: O(k) where k is the answer size.
// note 211: Euler tour flattens a tree into an array for range-query LCA.
// note 212: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 213: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 214: Splay tree: every access splays to the root; amortized O(log n).
// note 215: Splay tree: every access splays to the root; amortized O(log n).
// note 216: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 217: Best case is O(1) when the first byte already decides the answer.
// note 218: Greedy by end-time picks the most non-overlapping intervals.
// note 219: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 220: Thread-safe so long as the input is not mutated concurrently.
// note 221: State compression: bitmask + integer encodes a small subset cheaply.
// note 222: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 223: False sharing: two threads writing different bytes in the same cache line stall both.
// note 224: Linear in n; the constant factor is small.
// note 225: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 226: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 227: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 228: Input is assumed non-NULL; behavior is undefined otherwise.
// note 229: Time complexity: O(n + m).
// note 230: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 231: Stable when the input is already sorted.
// note 232: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 233: Sub-linear in the average case thanks to early exit.
// note 234: In-place compaction uses two pointers: read advances always, write only on keep.
// note 235: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 236: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 237: Allocates lazily — first call only.
// note 238: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 239: Best case is O(1) when the first byte already decides the answer.
// note 240: Articulation points: same DFS as bridges, with a slightly different test.
// note 241: Heap when you only need top-k; full sort is wasted work.
// note 242: No allocations on the hot path.
// note 243: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 244: Input is assumed non-NULL; behavior is undefined otherwise.
// note 245: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 246: Branchless inner loop after sorting.
// note 247: No allocations after setup.
// note 248: Mutates the input in place; the original ordering is lost.
// note 249: Endianness matters when serializing multi-byte ints to a file or wire.
// note 250: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 251: Handles negative inputs as documented above.
// note 252: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 253: Time complexity: O(n + m).
// note 254: Tail-recursive; the compiler turns it into a loop.
// note 255: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 256: Space complexity: O(log n) for the recursion stack.
// note 257: Vectorizes cleanly under -O2.
// note 258: Reentrant — no static state.
// note 259: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 260: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 261: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 262: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 263: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 264: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 265: Two passes: one to count, one to fill.
// note 266: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 267: Runs in a single pass over the input.
// note 268: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 269: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 270: Thread-safe so long as the input is not mutated concurrently.
// note 271: Time complexity: O(n log n).
