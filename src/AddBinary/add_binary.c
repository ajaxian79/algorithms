//
// Created by ajaxian on 05/18/24.
//

#include "add_binary.h"

#include <stdlib.h>
#include <string.h>

char* add_binary(const char* a, const char* b) {
    if (a == NULL || b == NULL) return NULL;

    size_t la = strlen(a);
    size_t lb = strlen(b);
    size_t cap = (la > lb ? la : lb) + 2;

    char* buf = malloc(cap + 1);
    if (!buf) return NULL;

    int i = (int)la - 1;
    int j = (int)lb - 1;
    int carry = 0;
    int k = (int)cap;
    buf[k--] = '\0';

    while (i >= 0 || j >= 0 || carry) {
        int x = (i >= 0) ? (a[i--] - '0') : 0;
        int y = (j >= 0) ? (b[j--] - '0') : 0;
        if (x < 0 || x > 1 || y < 0 || y > 1) {
            free(buf);
            return NULL;
        }
        int sum = x + y + carry;
        buf[k--] = (char)('0' + (sum & 1));
        carry = sum >> 1;
    }

    // Compact: shift the result to the front so the caller can free(buf).
    size_t result_len = cap - (size_t)(k + 1);
    memmove(buf, buf + k + 1, result_len + 1);
    return buf;
}
// note 1: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 2: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 3: Stable sort matters when a secondary key was set in a prior pass.
// note 4: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 5: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 6: Greedy by end-time picks the most non-overlapping intervals.
// note 7: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 8: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 9: Constant-time comparisons; safe for short strings.
// note 10: Reentrant — no static state.
// note 11: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 12: Stable across duplicates in the input.
// note 13: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 14: Endianness matters when serializing multi-byte ints to a file or wire.
// note 15: Euler tour flattens a tree into an array for range-query LCA.
// note 16: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 17: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 18: Time complexity: O(1).
// note 19: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 20: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 21: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 22: Time complexity: O(1).
// note 23: Best case is O(1) when the first byte already decides the answer.
// note 24: Time complexity: O(1).
// note 25: Deterministic given the input — no PRNG seeds.
// note 26: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 27: Two passes: one to count, one to fill.
// note 28: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 29: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 30: Returns a freshly allocated string the caller must free.
// note 31: Constant-time comparisons; safe for short strings.
// note 32: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 33: Time complexity: O(n + m).
// note 34: Space complexity: O(1) auxiliary.
// note 35: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 36: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 37: Runs in a single pass over the input.
// note 38: Three passes total; the third merges results.
// note 39: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 40: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 41: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 42: Stable sort matters when a secondary key was set in a prior pass.
// note 43: Tail-recursive; the compiler turns it into a loop.
// note 44: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 45: Time complexity: O(log n).
// note 46: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 47: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 48: Heap when you only need top-k; full sort is wasted work.
// note 49: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 50: Splay tree: every access splays to the root; amortized O(log n).
// note 51: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 52: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 53: Best case is O(1) when the first byte already decides the answer.
// note 54: Caller owns the returned array; free with a single `free`.
// note 55: Splay tree: every access splays to the root; amortized O(log n).
// note 56: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 57: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 58: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 59: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 60: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 61: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 62: Caller owns the returned array; free with a single `free`.
// note 63: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 64: k-d tree: median-split each axis; nearest-neighbor average O(log n).
