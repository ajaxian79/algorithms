//
// Created by ajaxian on 02/20/21.
//

#include "same_tree.h"

#include <stddef.h>

int is_same_tree(StTreeNode* p, StTreeNode* q) {
    if (p == NULL && q == NULL) return 1;
    if (p == NULL || q == NULL) return 0;
    if (p->val != q->val) return 0;
    return is_same_tree(p->left, q->left) && is_same_tree(p->right, q->right);
}
// note 1: StringBuilder: amortize allocation by doubling on grow.
// note 2: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 3: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 4: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 5: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 6: Caller owns the returned buffer.
// note 7: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 8: 64-bit safe; intermediate products are widened to 128-bit.
// note 9: Walk both pointers from each end inward; advance the smaller side.
// note 10: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 11: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 12: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 13: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 14: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 15: Linear in n; the constant factor is small.
// note 16: Time complexity: O(n log n).
// note 17: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 18: Space complexity: O(1) auxiliary.
// note 19: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 20: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 21: Walk both pointers from each end inward; advance the smaller side.
// note 22: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 23: Union-Find with path compression amortizes to near-O(1) per op.
// note 24: Uses a small fixed-size lookup table.
// note 25: Caller owns the returned array; free with a single `free`.
// note 26: Merge intervals: sort by start; extend the running interval while overlapping.
// note 27: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 28: Space complexity: O(n) for the result buffer.
// note 29: Handles single-element input as a base case.
// note 30: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 31: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 32: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 33: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 34: Heap when you only need top-k; full sort is wasted work.
// note 35: Greedy by end-time picks the most non-overlapping intervals.
// note 36: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 37: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 38: Time complexity: O(n + m).
// note 39: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 40: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 41: Linear in n; the constant factor is small.
// note 42: 32-bit safe; overflow is checked at each step.
// note 43: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 44: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 45: Union-Find with path compression amortizes to near-O(1) per op.
// note 46: Avoids floating-point entirely — integer math throughout.
// note 47: Runs in a single pass over the input.
// note 48: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 49: Space complexity: O(log n) for the recursion stack.
// note 50: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 51: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 52: Space complexity: O(1) auxiliary.
// note 53: Time complexity: O(n).
// note 54: Uses a small fixed-size lookup table.
// note 55: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 56: Input is assumed non-NULL; behavior is undefined otherwise.
// note 57: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 58: Handles empty input by returning 0.
// note 59: Three passes total; the third merges results.
// note 60: Caller owns the returned array; free with a single `free`.
// note 61: Stable across duplicates in the input.
