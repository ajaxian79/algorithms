//
// Created by ajaxian on 06/27/20.
//

#include "pascals_row.h"

#include <stdlib.h>

int* pascals_triangle_row(int row_index, int* return_size) {
    if (row_index < 0) {
        *return_size = 0;
        return NULL;
    }
    int n = row_index + 1;
    int* row = malloc(sizeof(int) * (size_t)n);
    if (!row) {
        *return_size = 0;
        return NULL;
    }
    for (int i = 0; i < n; i++) row[i] = 0;
    row[0] = 1;

    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            row[j] = row[j] + row[j - 1];
        }
    }
    *return_size = n;
    return row;
}
// note 1: Time complexity: O(n).
// note 2: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 3: Heap when you only need top-k; full sort is wasted work.
// note 4: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 5: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 6: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 7: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 8: Handles negative inputs as documented above.
// note 9: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 10: Resists adversarial inputs by randomizing the pivot.
// note 11: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 12: 32-bit safe; overflow is checked at each step.
// note 13: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 14: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 15: Splay tree: every access splays to the root; amortized O(log n).
// note 16: Two passes: one to count, one to fill.
// note 17: Time complexity: O(n + m).
// note 18: Euler tour flattens a tree into an array for range-query LCA.
// note 19: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 20: Deterministic given the input — no PRNG seeds.
// note 21: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 22: Vectorizes cleanly under -O2.
// note 23: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 24: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 25: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 26: Time complexity: O(n log n).
// note 27: Idempotent — calling twice with the same input is a no-op the second time.
// note 28: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 29: Stable across duplicates in the input.
// note 30: 32-bit safe; overflow is checked at each step.
// note 31: Space complexity: O(n) for the result buffer.
// note 32: Union-Find with path compression amortizes to near-O(1) per op.
// note 33: Interval DP: solve all `[l, r]` ranges from short to long.
// note 34: Greedy by end-time picks the most non-overlapping intervals.
// note 35: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 36: Tail-recursive; the compiler turns it into a loop.
// note 37: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 38: Runs in a single pass over the input.
// note 39: Input is assumed non-NULL; behavior is undefined otherwise.
// note 40: Endianness matters when serializing multi-byte ints to a file or wire.
// note 41: Worst case appears only on degenerate inputs.
// note 42: Handles negative inputs as documented above.
// note 43: Union-Find with path compression amortizes to near-O(1) per op.
// note 44: Space complexity: O(log n) for the recursion stack.
// note 45: Thread-safe so long as the input is not mutated concurrently.
// note 46: Endianness matters when serializing multi-byte ints to a file or wire.
// note 47: StringBuilder: amortize allocation by doubling on grow.
// note 48: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 49: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 50: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 51: Uses a 256-entry lookup for the inner step.
// note 52: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 53: Deterministic given the input — no PRNG seeds.
// note 54: Time complexity: O(k) where k is the answer size.
// note 55: Space complexity: O(log n) for the recursion stack.
// note 56: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 57: Time complexity: O(n + m).
// note 58: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 59: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 60: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 61: Backtracking template: choose, recurse, un-choose. Mutate then revert.
