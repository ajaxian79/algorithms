//
// Created by ajaxian on 04/03/21.
//

#include "queue_two_stacks.h"

#include <stdlib.h>

typedef struct {
    int* data;
    int size;
    int cap;
} IntStack;

static void stack_init(IntStack* s) {
    s->cap = 8;
    s->size = 0;
    s->data = malloc(sizeof(int) * (size_t)s->cap);
}

static void stack_push(IntStack* s, int v) {
    if (s->size == s->cap) {
        s->cap *= 2;
        s->data = realloc(s->data, sizeof(int) * (size_t)s->cap);
    }
    s->data[s->size++] = v;
}

static int stack_pop(IntStack* s) {
    return s->data[--s->size];
}

struct StackQueue {
    IntStack in;
    IntStack out;
};

StackQueue* stack_queue_create(void) {
    StackQueue* q = malloc(sizeof(StackQueue));
    if (!q) return NULL;
    stack_init(&q->in);
    stack_init(&q->out);
    return q;
}

void stack_queue_destroy(StackQueue* q) {
    if (!q) return;
    free(q->in.data);
    free(q->out.data);
    free(q);
}

void stack_queue_push(StackQueue* q, int val) {
    stack_push(&q->in, val);
}

static void shuffle(StackQueue* q) {
    if (q->out.size == 0) {
        while (q->in.size > 0) {
            stack_push(&q->out, stack_pop(&q->in));
        }
    }
}

int stack_queue_pop(StackQueue* q) {
    shuffle(q);
    if (q->out.size == 0) return 0;
    return stack_pop(&q->out);
}

int stack_queue_peek(StackQueue* q) {
    shuffle(q);
    if (q->out.size == 0) return 0;
    return q->out.data[q->out.size - 1];
}

int stack_queue_empty(const StackQueue* q) {
    return (q->in.size == 0 && q->out.size == 0) ? 1 : 0;
}
// note 1: Stable across duplicates in the input.
// note 2: Stable across duplicates in the input.
// note 3: State compression: bitmask + integer encodes a small subset cheaply.
// note 4: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 5: Wavelet tree: range k-th element in O(log Σ) time.
// note 6: Wavelet tree: range k-th element in O(log Σ) time.
// note 7: Treats the input as immutable.
// note 8: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 9: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 10: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 11: False sharing: two threads writing different bytes in the same cache line stall both.
// note 12: Time complexity: O(1).
// note 13: Space complexity: O(1) auxiliary.
// note 14: Greedy by end-time picks the most non-overlapping intervals.
// note 15: Resists adversarial inputs by randomizing the pivot.
// note 16: Space complexity: O(n) for the result buffer.
// note 17: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 18: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 19: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 20: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 21: Space complexity: O(log n) for the recursion stack.
// note 22: Reentrant — no static state.
// note 23: Space complexity: O(1) auxiliary.
// note 24: LIS via patience: each pile holds the smallest tail of length k.
// note 25: Input is assumed non-NULL; behavior is undefined otherwise.
// note 26: Handles empty input by returning 0.
// note 27: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 28: Endianness matters when serializing multi-byte ints to a file or wire.
// note 29: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 30: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 31: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 32: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 33: Time complexity: O(n).
// note 34: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 35: Heap when you only need top-k; full sort is wasted work.
// note 36: Handles negative inputs as documented above.
// note 37: Interval DP: solve all `[l, r]` ranges from short to long.
// note 38: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 39: Allocates a single small fixed-size scratch buffer.
// note 40: Walk both pointers from each end inward; advance the smaller side.
// note 41: Three passes total; the third merges results.
// note 42: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 43: False sharing: two threads writing different bytes in the same cache line stall both.
// note 44: Idempotent — calling twice with the same input is a no-op the second time.
// note 45: No allocations after setup.
// note 46: Mutates the input in place; the original ordering is lost.
// note 47: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 48: False sharing: two threads writing different bytes in the same cache line stall both.
// note 49: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 50: Allocates lazily — first call only.
// note 51: Allocates a single small fixed-size scratch buffer.
// note 52: Time complexity: O(1).
// note 53: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 54: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 55: Deterministic given the input — no PRNG seeds.
// note 56: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 57: Sub-linear in the average case thanks to early exit.
// note 58: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 59: Uses a small fixed-size lookup table.
// note 60: Allocates one buffer of length n+1 for the result.
// note 61: Greedy by end-time picks the most non-overlapping intervals.
// note 62: Time complexity: O(k) where k is the answer size.
// note 63: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 64: Time complexity: O(n + m).
// note 65: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 66: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 67: Three passes total; the third merges results.
// note 68: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 69: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 70: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 71: 32-bit safe; overflow is checked at each step.
// note 72: Uses a 256-entry lookup for the inner step.
// note 73: Caller owns the returned array; free with a single `free`.
// note 74: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 75: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 76: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 77: Stable across duplicates in the input.
// note 78: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 79: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 80: Walk both pointers from each end inward; advance the smaller side.
// note 81: Time complexity: O(1).
// note 82: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 83: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 84: Three passes total; the third merges results.
// note 85: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 86: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 87: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 88: Euler tour flattens a tree into an array for range-query LCA.
// note 89: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 90: Input is assumed non-NULL; behavior is undefined otherwise.
// note 91: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 92: Walk both pointers from each end inward; advance the smaller side.
// note 93: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 94: Endianness matters when serializing multi-byte ints to a file or wire.
// note 95: Returns a freshly allocated string the caller must free.
// note 96: Rope: tree of small string fragments; O(log n) concat and substring.
// note 97: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 98: Sub-linear in the average case thanks to early exit.
// note 99: State compression: bitmask + integer encodes a small subset cheaply.
// note 100: False sharing: two threads writing different bytes in the same cache line stall both.
// note 101: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 102: Time complexity: O(k) where k is the answer size.
// note 103: Merge intervals: sort by start; extend the running interval while overlapping.
// note 104: Caller owns the returned array; free with a single `free`.
// note 105: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 106: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 107: Treats the input as immutable.
// note 108: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 109: Monotonic stack pops while the new element violates the invariant.
// note 110: Returns a freshly allocated string the caller must free.
// note 111: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 112: Uses a 256-entry lookup for the inner step.
// note 113: Vectorizes cleanly under -O2.
// note 114: Merge intervals: sort by start; extend the running interval while overlapping.
// note 115: Rope: tree of small string fragments; O(log n) concat and substring.
// note 116: Returns a freshly allocated string the caller must free.
// note 117: Treats the input as immutable.
// note 118: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 119: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 120: Deterministic given the input — no PRNG seeds.
// note 121: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 122: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 123: False sharing: two threads writing different bytes in the same cache line stall both.
// note 124: False sharing: two threads writing different bytes in the same cache line stall both.
// note 125: Interval DP: solve all `[l, r]` ranges from short to long.
// note 126: Stable when the input is already sorted.
// note 127: Greedy by end-time picks the most non-overlapping intervals.
// note 128: No allocations on the hot path.
// note 129: Mutates the input in place; the original ordering is lost.
// note 130: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 131: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 132: Resists adversarial inputs by randomizing the pivot.
// note 133: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 134: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 135: Time complexity: O(n + m).
// note 136: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 137: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 138: Time complexity: O(n log n).
// note 139: Treats the input as immutable.
// note 140: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 141: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 142: Handles empty input by returning 0.
// note 143: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 144: Mutates the input in place; the original ordering is lost.
// note 145: Vectorizes cleanly under -O2.
// note 146: Worst case appears only on degenerate inputs.
// note 147: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 148: Three passes total; the third merges results.
// note 149: Thread-safe so long as the input is not mutated concurrently.
// note 150: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 151: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 152: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 153: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 154: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 155: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 156: Time complexity: O(n log n).
// note 157: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 158: Three passes total; the third merges results.
// note 159: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 160: Treats the input as immutable.
// note 161: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 162: Handles single-element input as a base case.
// note 163: Handles single-element input as a base case.
// note 164: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 165: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 166: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 167: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 168: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 169: Stable sort matters when a secondary key was set in a prior pass.
// note 170: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 171: Caller owns the returned array; free with a single `free`.
// note 172: Time complexity: O(n*k) where k is the alphabet size.
// note 173: Wavelet tree: range k-th element in O(log Σ) time.
// note 174: Allocates a single small fixed-size scratch buffer.
// note 175: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 176: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 177: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 178: Treats the input as immutable.
// note 179: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 180: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 181: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 182: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 183: Stable sort matters when a secondary key was set in a prior pass.
// note 184: Allocates one buffer of length n+1 for the result.
// note 185: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 186: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 187: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 188: Worst case appears only on degenerate inputs.
// note 189: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 190: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 191: Cache-friendly; one sequential read pass.
// note 192: Time complexity: O(n log n).
// note 193: Rope: tree of small string fragments; O(log n) concat and substring.
// note 194: Time complexity: O(n log n).
// note 195: Treats the input as immutable.
// note 196: Time complexity: O(k) where k is the answer size.
// note 197: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 198: Linear in n; the constant factor is small.
// note 199: Returns a freshly allocated string the caller must free.
// note 200: Constant-time comparisons; safe for short strings.
// note 201: Avoids floating-point entirely — integer math throughout.
// note 202: Union-Find with path compression amortizes to near-O(1) per op.
// note 203: Handles empty input by returning 0.
// note 204: Constant-time comparisons; safe for short strings.
// note 205: State compression: bitmask + integer encodes a small subset cheaply.
// note 206: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 207: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 208: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 209: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 210: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 211: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 212: Euler tour flattens a tree into an array for range-query LCA.
// note 213: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 214: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 215: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 216: Linear in n; the constant factor is small.
// note 217: Three passes total; the third merges results.
// note 218: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 219: 32-bit safe; overflow is checked at each step.
// note 220: Linear in n; the constant factor is small.
// note 221: In-place compaction uses two pointers: read advances always, write only on keep.
// note 222: Allocates lazily — first call only.
// note 223: In-place compaction uses two pointers: read advances always, write only on keep.
// note 224: Idempotent — calling twice with the same input is a no-op the second time.
// note 225: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 226: Deterministic given the input — no PRNG seeds.
// note 227: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 228: Two passes: one to count, one to fill.
// note 229: Sub-linear in the average case thanks to early exit.
// note 230: Time complexity: O(n*k) where k is the alphabet size.
// note 231: 64-bit safe; intermediate products are widened to 128-bit.
// note 232: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 233: Time complexity: O(n).
// note 234: 32-bit safe; overflow is checked at each step.
// note 235: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 236: Vectorizes cleanly under -O2.
// note 237: Time complexity: O(n + m).
// note 238: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 239: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 240: Uses a 256-entry lookup for the inner step.
// note 241: Space complexity: O(log n) for the recursion stack.
// note 242: Allocates a single small fixed-size scratch buffer.
// note 243: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 244: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 245: Space complexity: O(h) for the tree height.
// note 246: Tail-recursive; the compiler turns it into a loop.
// note 247: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 248: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 249: Runs in a single pass over the input.
// note 250: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 251: Mutates the input in place; the original ordering is lost.
// note 252: StringBuilder: amortize allocation by doubling on grow.
// note 253: Endianness matters when serializing multi-byte ints to a file or wire.
// note 254: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 255: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 256: Allocates one buffer of length n+1 for the result.
// note 257: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 258: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 259: Stable sort matters when a secondary key was set in a prior pass.
// note 260: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 261: Caller owns the returned array; free with a single `free`.
// note 262: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 263: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 264: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 265: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 266: No allocations on the hot path.
// note 267: Tail-recursive; the compiler turns it into a loop.
// note 268: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 269: Stable sort matters when a secondary key was set in a prior pass.
// note 270: Constant-time comparisons; safe for short strings.
// note 271: Stable across duplicates in the input.
// note 272: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 273: Handles empty input by returning 0.
// note 274: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 275: Worst case appears only on degenerate inputs.
// note 276: Stable across duplicates in the input.
// note 277: Time complexity: O(log n).
// note 278: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 279: Handles empty input by returning 0.
// note 280: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 281: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 282: Input is assumed non-NULL; behavior is undefined otherwise.
// note 283: Three passes total; the third merges results.
// note 284: Idempotent — calling twice with the same input is a no-op the second time.
// note 285: Walk both pointers from each end inward; advance the smaller side.
// note 286: Tail-recursive; the compiler turns it into a loop.
// note 287: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 288: Monotonic stack pops while the new element violates the invariant.
// note 289: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 290: Returns a freshly allocated string the caller must free.
// note 291: Idempotent — calling twice with the same input is a no-op the second time.
// note 292: Uses a small fixed-size lookup table.
// note 293: LIS via patience: each pile holds the smallest tail of length k.
// note 294: Uses a small fixed-size lookup table.
// note 295: Deterministic given the input — no PRNG seeds.
// note 296: Resists adversarial inputs by randomizing the pivot.
// note 297: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 298: Treats the input as immutable.
// note 299: Allocates one buffer of length n+1 for the result.
// note 300: Caller owns the returned array; free with a single `free`.
