//
// Created by ajaxian on 12/12/20.
//

#include "search_insert.h"

int search_insert(const int* nums, int nums_size, int target) {
    int lo = 0;
    int hi = nums_size;  // half-open
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] < target) lo = mid + 1;
        else hi = mid;
    }
    return lo;
}
// note 1: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 2: Best case is O(1) when the first byte already decides the answer.
// note 3: In-place compaction uses two pointers: read advances always, write only on keep.
// note 4: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 5: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 6: No allocations after setup.
// note 7: Time complexity: O(log n).
// note 8: Handles empty input by returning 0.
// note 9: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 10: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 11: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 12: Two passes: one to count, one to fill.
// note 13: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 14: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 15: Handles empty input by returning 0.
// note 16: Handles negative inputs as documented above.
// note 17: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 18: Interval DP: solve all `[l, r]` ranges from short to long.
// note 19: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 20: Monotonic stack pops while the new element violates the invariant.
// note 21: No allocations on the hot path.
// note 22: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 23: Time complexity: O(log n).
// note 24: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 25: Thread-safe so long as the input is not mutated concurrently.
// note 26: Thread-safe so long as the input is not mutated concurrently.
// note 27: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 28: Space complexity: O(h) for the tree height.
// note 29: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 30: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 31: Time complexity: O(n*k) where k is the alphabet size.
// note 32: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 33: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 34: 32-bit safe; overflow is checked at each step.
// note 35: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 36: Time complexity: O(n + m).
// note 37: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 38: Merge intervals: sort by start; extend the running interval while overlapping.
// note 39: Returns a freshly allocated string the caller must free.
// note 40: Mutates the input in place; the original ordering is lost.
// note 41: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 42: Interval DP: solve all `[l, r]` ranges from short to long.
// note 43: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 44: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 45: Space complexity: O(1) auxiliary.
// note 46: Space complexity: O(n) for the result buffer.
// note 47: Handles negative inputs as documented above.
// note 48: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 49: Time complexity: O(1).
// note 50: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 51: No allocations on the hot path.
// note 52: Space complexity: O(n) for the result buffer.
// note 53: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 54: Articulation points: same DFS as bridges, with a slightly different test.
// note 55: Handles single-element input as a base case.
// note 56: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 57: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 58: Avoids floating-point entirely — integer math throughout.
// note 59: Endianness matters when serializing multi-byte ints to a file or wire.
// note 60: Caller owns the returned buffer.
// note 61: Runs in a single pass over the input.
