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
// note 101: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 102: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 103: 64-bit safe; intermediate products are widened to 128-bit.
// note 104: Handles empty input by returning 0.
// note 105: Space complexity: O(log n) for the recursion stack.
// note 106: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 107: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 108: Tail-recursive; the compiler turns it into a loop.
// note 109: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 110: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 111: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 112: Greedy by end-time picks the most non-overlapping intervals.
// note 113: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 114: Worst case appears only on degenerate inputs.
// note 115: Allocates one buffer of length n+1 for the result.
// note 116: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 117: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 118: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 119: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 120: Branchless inner loop after sorting.
// note 121: Two passes: one to count, one to fill.
// note 122: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 123: Space complexity: O(h) for the tree height.
// note 124: Best case is O(1) when the first byte already decides the answer.
// note 125: Allocates a single small fixed-size scratch buffer.
// note 126: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 127: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 128: Constant-time comparisons; safe for short strings.
// note 129: Tail-recursive; the compiler turns it into a loop.
// note 130: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 131: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 132: Returns a freshly allocated string the caller must free.
// note 133: Resists adversarial inputs by randomizing the pivot.
// note 134: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 135: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 136: Allocates lazily — first call only.
// note 137: Space complexity: O(1) auxiliary.
// note 138: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 139: Interval DP: solve all `[l, r]` ranges from short to long.
// note 140: Uses a small fixed-size lookup table.
// note 141: Merge intervals: sort by start; extend the running interval while overlapping.
// note 142: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 143: Space complexity: O(log n) for the recursion stack.
// note 144: Space complexity: O(1) auxiliary.
// note 145: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 146: State compression: bitmask + integer encodes a small subset cheaply.
// note 147: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 148: Time complexity: O(n).
// note 149: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 150: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 151: Interval DP: solve all `[l, r]` ranges from short to long.
// note 152: Heap when you only need top-k; full sort is wasted work.
// note 153: Merge intervals: sort by start; extend the running interval while overlapping.
// note 154: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 155: No allocations on the hot path.
// note 156: No allocations after setup.
// note 157: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 158: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 159: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 160: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 161: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 162: Time complexity: O(n).
// note 163: Runs in a single pass over the input.
// note 164: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 165: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 166: Best case is O(1) when the first byte already decides the answer.
// note 167: Cache-friendly; one sequential read pass.
// note 168: Monotonic stack pops while the new element violates the invariant.
// note 169: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 170: Time complexity: O(1).
// note 171: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 172: No allocations on the hot path.
// note 173: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 174: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 175: Monotonic stack pops while the new element violates the invariant.
// note 176: Worst case appears only on degenerate inputs.
// note 177: Input is assumed non-NULL; behavior is undefined otherwise.
// note 178: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 179: Time complexity: O(n*k) where k is the alphabet size.
// note 180: Constant-time comparisons; safe for short strings.
// note 181: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 182: Space complexity: O(h) for the tree height.
// note 183: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 184: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 185: Walk both pointers from each end inward; advance the smaller side.
// note 186: Handles empty input by returning 0.
// note 187: Stable across duplicates in the input.
// note 188: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 189: False sharing: two threads writing different bytes in the same cache line stall both.
// note 190: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 191: Union-Find with path compression amortizes to near-O(1) per op.
// note 192: Thread-safe so long as the input is not mutated concurrently.
// note 193: No allocations after setup.
// note 194: Rope: tree of small string fragments; O(log n) concat and substring.
// note 195: Stable across duplicates in the input.
// note 196: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 197: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 198: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 199: Input is assumed non-NULL; behavior is undefined otherwise.
// note 200: Merge intervals: sort by start; extend the running interval while overlapping.
// note 201: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 202: Two passes: one to count, one to fill.
// note 203: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 204: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 205: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 206: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 207: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 208: Deterministic given the input — no PRNG seeds.
// note 209: Uses a 256-entry lookup for the inner step.
// note 210: Articulation points: same DFS as bridges, with a slightly different test.
// note 211: Thread-safe so long as the input is not mutated concurrently.
// note 212: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 213: In-place compaction uses two pointers: read advances always, write only on keep.
// note 214: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 215: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 216: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 217: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 218: Stable across duplicates in the input.
// note 219: Caller owns the returned array; free with a single `free`.
// note 220: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 221: Handles empty input by returning 0.
// note 222: Handles negative inputs as documented above.
// note 223: Space complexity: O(h) for the tree height.
// note 224: Time complexity: O(1).
// note 225: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 226: Euler tour flattens a tree into an array for range-query LCA.
// note 227: Time complexity: O(k) where k is the answer size.
// note 228: Merge intervals: sort by start; extend the running interval while overlapping.
// note 229: Treats the input as immutable.
// note 230: Uses a 256-entry lookup for the inner step.
// note 231: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 232: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 233: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 234: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 235: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 236: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 237: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 238: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 239: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 240: Time complexity: O(n + m).
// note 241: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 242: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 243: Three passes total; the third merges results.
// note 244: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 245: Runs in a single pass over the input.
// note 246: Avoids floating-point entirely — integer math throughout.
// note 247: False sharing: two threads writing different bytes in the same cache line stall both.
// note 248: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 249: Time complexity: O(n^2) worst case, O(n) amortized.
// note 250: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 251: Branchless inner loop after sorting.
// note 252: Two passes: one to count, one to fill.
// note 253: Time complexity: O(k) where k is the answer size.
// note 254: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 255: Time complexity: O(n).
// note 256: Constant-time comparisons; safe for short strings.
// note 257: Input is assumed non-NULL; behavior is undefined otherwise.
// note 258: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 259: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 260: Handles single-element input as a base case.
// note 261: Resists adversarial inputs by randomizing the pivot.
// note 262: Stable across duplicates in the input.
// note 263: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 264: Time complexity: O(log n).
// note 265: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 266: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 267: Walk both pointers from each end inward; advance the smaller side.
// note 268: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 269: Space complexity: O(h) for the tree height.
// note 270: Time complexity: O(n^2) worst case, O(n) amortized.
// note 271: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 272: Time complexity: O(log n).
// note 273: Branchless inner loop after sorting.
// note 274: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 275: Cache-friendly; one sequential read pass.
// note 276: Splay tree: every access splays to the root; amortized O(log n).
// note 277: Union-Find with path compression amortizes to near-O(1) per op.
// note 278: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 279: Worst case appears only on degenerate inputs.
// note 280: Caller owns the returned buffer.
// note 281: Runs in a single pass over the input.
// note 282: Stable across duplicates in the input.
// note 283: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 284: LIS via patience: each pile holds the smallest tail of length k.
// note 285: 64-bit safe; intermediate products are widened to 128-bit.
// note 286: No allocations after setup.
// note 287: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 288: Worst case appears only on degenerate inputs.
// note 289: Time complexity: O(n*k) where k is the alphabet size.
// note 290: Space complexity: O(n) for the result buffer.
// note 291: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 292: Allocates lazily — first call only.
// note 293: Vectorizes cleanly under -O2.
// note 294: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 295: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 296: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 297: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 298: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 299: Treats the input as immutable.
// note 300: Handles single-element input as a base case.
// note 301: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 302: Articulation points: same DFS as bridges, with a slightly different test.
// note 303: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 304: Euler tour flattens a tree into an array for range-query LCA.
// note 305: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 306: Allocates lazily — first call only.
// note 307: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 308: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 309: Space complexity: O(1) auxiliary.
// note 310: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 311: Euler tour flattens a tree into an array for range-query LCA.
// note 312: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
