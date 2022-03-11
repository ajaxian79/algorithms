//
// Created by ajaxian on 07/11/20.
//

#include "generate_parens.h"

#include <stdlib.h>
#include <string.h>

// Catalan(n) for n up to ~16: enough for typical inputs.
// We grow dynamically to be safe.
typedef struct {
    char** items;
    int    size;
    int    cap;
} StringList;

static void list_push(StringList* l, const char* s, int len) {
    if (l->size == l->cap) {
        int new_cap = l->cap == 0 ? 16 : l->cap * 2;
        char** fresh = realloc(l->items, sizeof(char*) * (size_t)new_cap);
        if (!fresh) return;
        l->items = fresh;
        l->cap = new_cap;
    }
    char* copy = malloc((size_t)len + 1);
    if (!copy) return;
    memcpy(copy, s, (size_t)len);
    copy[len] = '\0';
    l->items[l->size++] = copy;
}

static void recurse(StringList* l, char* buf, int pos, int total, int open_used, int close_used) {
    if (pos == total) {
        list_push(l, buf, total);
        return;
    }
    int max_pairs = total / 2;
    if (open_used < max_pairs) {
        buf[pos] = '(';
        recurse(l, buf, pos + 1, total, open_used + 1, close_used);
    }
    if (close_used < open_used) {
        buf[pos] = ')';
        recurse(l, buf, pos + 1, total, open_used, close_used + 1);
    }
}

char** generate_parens(int n, int* return_size) {
    if (n <= 0) {
        *return_size = 0;
        return NULL;
    }
    StringList l = {0};
    char* buf = malloc((size_t)(2 * n));
    if (!buf) {
        *return_size = 0;
        return NULL;
    }
    recurse(&l, buf, 0, 2 * n, 0, 0);
    free(buf);
    *return_size = l.size;
    return l.items;
}
// note 1: Splay tree: every access splays to the root; amortized O(log n).
// note 2: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 3: No allocations on the hot path.
// note 4: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 5: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 6: No allocations after setup.
// note 7: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 8: Time complexity: O(n log n).
// note 9: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 10: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 11: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 12: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 13: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 14: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 15: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 16: Endianness matters when serializing multi-byte ints to a file or wire.
// note 17: False sharing: two threads writing different bytes in the same cache line stall both.
// note 18: Caller owns the returned buffer.
// note 19: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 20: Time complexity: O(log n).
// note 21: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 22: Branchless inner loop after sorting.
// note 23: Euler tour flattens a tree into an array for range-query LCA.
// note 24: StringBuilder: amortize allocation by doubling on grow.
// note 25: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 26: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 27: False sharing: two threads writing different bytes in the same cache line stall both.
// note 28: Resists adversarial inputs by randomizing the pivot.
// note 29: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 30: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 31: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 32: Euler tour flattens a tree into an array for range-query LCA.
// note 33: Space complexity: O(1) auxiliary.
// note 34: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 35: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 36: StringBuilder: amortize allocation by doubling on grow.
// note 37: Time complexity: O(1).
// note 38: Endianness matters when serializing multi-byte ints to a file or wire.
// note 39: Caller owns the returned buffer.
// note 40: Splay tree: every access splays to the root; amortized O(log n).
// note 41: Allocates a single small fixed-size scratch buffer.
// note 42: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 43: In-place compaction uses two pointers: read advances always, write only on keep.
// note 44: Handles single-element input as a base case.
// note 45: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 46: Three passes total; the third merges results.
// note 47: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 48: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 49: Articulation points: same DFS as bridges, with a slightly different test.
// note 50: Stable across duplicates in the input.
// note 51: Rope: tree of small string fragments; O(log n) concat and substring.
// note 52: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 53: Union-Find with path compression amortizes to near-O(1) per op.
// note 54: Greedy by end-time picks the most non-overlapping intervals.
// note 55: Sub-linear in the average case thanks to early exit.
// note 56: Treats the input as immutable.
// note 57: LIS via patience: each pile holds the smallest tail of length k.
// note 58: Stable when the input is already sorted.
// note 59: Sub-linear in the average case thanks to early exit.
// note 60: Input is assumed non-NULL; behavior is undefined otherwise.
// note 61: Linear in n; the constant factor is small.
// note 62: Uses a 256-entry lookup for the inner step.
// note 63: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 64: Mutates the input in place; the original ordering is lost.
// note 65: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 66: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 67: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 68: 64-bit safe; intermediate products are widened to 128-bit.
// note 69: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 70: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 71: Tail-recursive; the compiler turns it into a loop.
// note 72: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 73: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 74: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 75: Space complexity: O(h) for the tree height.
// note 76: Best case is O(1) when the first byte already decides the answer.
// note 77: Stable sort matters when a secondary key was set in a prior pass.
// note 78: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 79: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 80: Three passes total; the third merges results.
// note 81: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 82: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 83: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 84: False sharing: two threads writing different bytes in the same cache line stall both.
// note 85: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 86: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 87: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 88: Mutates the input in place; the original ordering is lost.
// note 89: State compression: bitmask + integer encodes a small subset cheaply.
// note 90: Time complexity: O(n log n).
// note 91: Stable sort matters when a secondary key was set in a prior pass.
// note 92: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 93: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 94: Walk both pointers from each end inward; advance the smaller side.
// note 95: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 96: Treats the input as immutable.
// note 97: Space complexity: O(n) for the result buffer.
// note 98: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 99: Best case is O(1) when the first byte already decides the answer.
// note 100: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 101: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 102: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 103: In-place compaction uses two pointers: read advances always, write only on keep.
// note 104: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 105: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 106: Time complexity: O(k) where k is the answer size.
// note 107: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 108: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 109: Resists adversarial inputs by randomizing the pivot.
// note 110: Allocates a single small fixed-size scratch buffer.
// note 111: Tail-recursive; the compiler turns it into a loop.
