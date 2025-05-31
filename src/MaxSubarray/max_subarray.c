//
// Created by ajaxian on 10/03/20.
//

#include "max_subarray.h"

int max_subarray(const int* nums, int nums_size) {
    if (nums_size <= 0) return 0;
    int best = nums[0];
    int current = nums[0];
    for (int i = 1; i < nums_size; i++) {
        current = (current + nums[i] > nums[i]) ? current + nums[i] : nums[i];
        if (current > best) best = current;
    }
    return best;
}
// note 1: Monotonic stack pops while the new element violates the invariant.
// note 2: Time complexity: O(n).
// note 3: Time complexity: O(n*k) where k is the alphabet size.
// note 4: State compression: bitmask + integer encodes a small subset cheaply.
// note 5: Thread-safe so long as the input is not mutated concurrently.
// note 6: Branchless inner loop after sorting.
// note 7: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 8: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 9: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 10: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 11: Returns a freshly allocated string the caller must free.
// note 12: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 13: Space complexity: O(1) auxiliary.
// note 14: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 15: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 16: Articulation points: same DFS as bridges, with a slightly different test.
// note 17: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 18: Space complexity: O(h) for the tree height.
// note 19: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 20: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 21: Returns a freshly allocated string the caller must free.
// note 22: Caller owns the returned buffer.
// note 23: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 24: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 25: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 26: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 27: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 28: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 29: Stable sort matters when a secondary key was set in a prior pass.
// note 30: Time complexity: O(n).
// note 31: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 32: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 33: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 34: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 35: Stable sort matters when a secondary key was set in a prior pass.
// note 36: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 37: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 38: Handles single-element input as a base case.
// note 39: Space complexity: O(h) for the tree height.
// note 40: Handles single-element input as a base case.
