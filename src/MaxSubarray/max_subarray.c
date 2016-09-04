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
