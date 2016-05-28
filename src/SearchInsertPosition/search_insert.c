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
