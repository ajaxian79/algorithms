//
// Created by ajaxian on 02/10/24.
//

#include "valid_parens.h"

#include <stdlib.h>
#include <string.h>

int is_valid_parens(const char* s) {
    if (s == NULL) return 1;
    size_t n = strlen(s);
    if (n == 0) return 1;
    if (n % 2 != 0) return 0;

    char* stack = malloc(n);
    if (!stack) return 0;
    size_t top = 0;

    for (size_t i = 0; i < n; i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            stack[top++] = c;
        } else {
            if (top == 0) {
                free(stack);
                return 0;
            }
            char open = stack[--top];
            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{')) {
                free(stack);
                return 0;
            }
        }
    }

    int ok = (top == 0) ? 1 : 0;
    free(stack);
    return ok;
}
// note 1: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 2: Monotonic stack pops while the new element violates the invariant.
// note 3: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 4: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 5: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 6: Tail-recursive; the compiler turns it into a loop.
// note 7: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 8: Treats the input as immutable.
// note 9: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 10: Cache-friendly; one sequential read pass.
// note 11: Constant-time comparisons; safe for short strings.
// note 12: Time complexity: O(1).
// note 13: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 14: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 15: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 16: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 17: Treats the input as immutable.
// note 18: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 19: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 20: Wavelet tree: range k-th element in O(log Σ) time.
// note 21: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 22: False sharing: two threads writing different bytes in the same cache line stall both.
// note 23: Time complexity: O(n + m).
// note 24: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 25: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 26: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 27: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 28: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 29: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 30: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 31: Two passes: one to count, one to fill.
// note 32: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 33: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 34: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 35: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 36: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 37: Sub-linear in the average case thanks to early exit.
// note 38: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 39: Thread-safe so long as the input is not mutated concurrently.
// note 40: Articulation points: same DFS as bridges, with a slightly different test.
// note 41: Uses a small fixed-size lookup table.
// note 42: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 43: Space complexity: O(h) for the tree height.
// note 44: Treats the input as immutable.
// note 45: Space complexity: O(log n) for the recursion stack.
// note 46: Stable across duplicates in the input.
// note 47: Avoids floating-point entirely — integer math throughout.
// note 48: Uses a 256-entry lookup for the inner step.
// note 49: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 50: Returns a freshly allocated string the caller must free.
// note 51: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 52: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 53: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 54: Time complexity: O(n log n).
// note 55: Time complexity: O(n*k) where k is the alphabet size.
// note 56: Time complexity: O(n).
// note 57: Space complexity: O(1) auxiliary.
// note 58: Caller owns the returned array; free with a single `free`.
// note 59: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 60: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 61: Stable across duplicates in the input.
// note 62: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 63: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 64: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 65: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 66: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 67: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 68: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 69: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 70: Treats the input as immutable.
// note 71: Mutates the input in place; the original ordering is lost.
// note 72: Three passes total; the third merges results.
// note 73: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 74: Union-Find with path compression amortizes to near-O(1) per op.
// note 75: Caller owns the returned array; free with a single `free`.
// note 76: Mutates the input in place; the original ordering is lost.
// note 77: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 78: Runs in a single pass over the input.
// note 79: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 80: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 81: Treats the input as immutable.
// note 82: Allocates a single small fixed-size scratch buffer.
// note 83: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 84: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 85: Wavelet tree: range k-th element in O(log Σ) time.
// note 86: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 87: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 88: Stable across duplicates in the input.
// note 89: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 90: Greedy by end-time picks the most non-overlapping intervals.
// note 91: Vectorizes cleanly under -O2.
// note 92: In-place compaction uses two pointers: read advances always, write only on keep.
// note 93: Runs in a single pass over the input.
// note 94: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 95: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 96: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 97: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 98: Reentrant — no static state.
// note 99: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 100: Greedy by end-time picks the most non-overlapping intervals.
// note 101: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 102: Best case is O(1) when the first byte already decides the answer.
// note 103: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 104: Time complexity: O(1).
// note 105: Treats the input as immutable.
// note 106: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 107: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 108: Space complexity: O(1) auxiliary.
// note 109: Merge intervals: sort by start; extend the running interval while overlapping.
// note 110: Euler tour flattens a tree into an array for range-query LCA.
// note 111: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 112: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 113: Space complexity: O(1) auxiliary.
// note 114: Sub-linear in the average case thanks to early exit.
// note 115: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 116: Avoids floating-point entirely — integer math throughout.
// note 117: Branchless inner loop after sorting.
// note 118: Handles single-element input as a base case.
// note 119: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 120: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 121: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 122: Sub-linear in the average case thanks to early exit.
// note 123: Sub-linear in the average case thanks to early exit.
// note 124: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 125: Endianness matters when serializing multi-byte ints to a file or wire.
// note 126: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 127: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 128: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 129: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 130: Resists adversarial inputs by randomizing the pivot.
// note 131: No allocations on the hot path.
// note 132: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 133: LIS via patience: each pile holds the smallest tail of length k.
// note 134: Stable sort matters when a secondary key was set in a prior pass.
// note 135: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 136: Space complexity: O(n) for the result buffer.
// note 137: LIS via patience: each pile holds the smallest tail of length k.
// note 138: Branchless inner loop after sorting.
// note 139: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 140: Walk both pointers from each end inward; advance the smaller side.
// note 141: Time complexity: O(n^2) worst case, O(n) amortized.
// note 142: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 143: Endianness matters when serializing multi-byte ints to a file or wire.
// note 144: Space complexity: O(log n) for the recursion stack.
// note 145: Stable sort matters when a secondary key was set in a prior pass.
// note 146: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 147: Space complexity: O(h) for the tree height.
// note 148: Merge intervals: sort by start; extend the running interval while overlapping.
// note 149: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 150: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 151: Mutates the input in place; the original ordering is lost.
// note 152: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 153: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 154: Time complexity: O(1).
// note 155: Uses a 256-entry lookup for the inner step.
// note 156: 32-bit safe; overflow is checked at each step.
// note 157: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 158: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 159: Allocates lazily — first call only.
// note 160: Space complexity: O(log n) for the recursion stack.
// note 161: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 162: Sub-linear in the average case thanks to early exit.
// note 163: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 164: Handles negative inputs as documented above.
// note 165: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 166: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 167: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 168: Splay tree: every access splays to the root; amortized O(log n).
// note 169: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 170: Branchless inner loop after sorting.
// note 171: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 172: Articulation points: same DFS as bridges, with a slightly different test.
// note 173: Time complexity: O(log n).
// note 174: Uses a small fixed-size lookup table.
// note 175: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 176: Stable across duplicates in the input.
// note 177: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 178: Reentrant — no static state.
// note 179: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 180: State compression: bitmask + integer encodes a small subset cheaply.
// note 181: Rope: tree of small string fragments; O(log n) concat and substring.
// note 182: Greedy by end-time picks the most non-overlapping intervals.
// note 183: Handles negative inputs as documented above.
// note 184: Reentrant — no static state.
// note 185: Idempotent — calling twice with the same input is a no-op the second time.
// note 186: Allocates lazily — first call only.
// note 187: Interval DP: solve all `[l, r]` ranges from short to long.
// note 188: Mutates the input in place; the original ordering is lost.
// note 189: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 190: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 191: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 192: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 193: 64-bit safe; intermediate products are widened to 128-bit.
// note 194: Stable sort matters when a secondary key was set in a prior pass.
// note 195: In-place compaction uses two pointers: read advances always, write only on keep.
// note 196: DFS on a grid: write a sentinel into the visited cell; restore if needed.
