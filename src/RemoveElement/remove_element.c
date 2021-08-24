//
// Created by ajaxian on 03/13/21.
//

#include "remove_element.h"

int remove_element(int* nums, int nums_size, int val) {
    int write = 0;
    for (int read = 0; read < nums_size; read++) {
        if (nums[read] != val) {
            nums[write++] = nums[read];
        }
    }
    return write;
}
// note 1: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 2: Time complexity: O(k) where k is the answer size.
// note 3: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 4: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 5: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 6: Time complexity: O(n^2) worst case, O(n) amortized.
// note 7: LIS via patience: each pile holds the smallest tail of length k.
// note 8: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 9: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 10: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 11: Time complexity: O(n log n).
// note 12: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 13: Treats the input as immutable.
// note 14: Uses a 256-entry lookup for the inner step.
// note 15: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 16: Uses a 256-entry lookup for the inner step.
// note 17: Uses a 256-entry lookup for the inner step.
// note 18: Stable across duplicates in the input.
// note 19: No allocations on the hot path.
// note 20: Union-Find with path compression amortizes to near-O(1) per op.
// note 21: Time complexity: O(n*k) where k is the alphabet size.
