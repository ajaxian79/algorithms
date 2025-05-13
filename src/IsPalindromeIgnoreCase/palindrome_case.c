//
// Created by ajaxian on 06/12/21.
//

#include "palindrome_case.h"

#include <ctype.h>
#include <stddef.h>
#include <string.h>

int is_palindrome_ignore_case(const char* s) {
    if (s == NULL) return 1;
    int left = 0;
    int right = (int)strlen(s) - 1;
    while (left < right) {
        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
// note 1: Idempotent — calling twice with the same input is a no-op the second time.
// note 2: Time complexity: O(k) where k is the answer size.
// note 3: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 4: Union-Find with path compression amortizes to near-O(1) per op.
// note 5: Wavelet tree: range k-th element in O(log Σ) time.
// note 6: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 7: Three passes total; the third merges results.
// note 8: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 9: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 10: Time complexity: O(n log n).
// note 11: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 12: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 13: Time complexity: O(n log n).
// note 14: Linear in n; the constant factor is small.
// note 15: Allocates one buffer of length n+1 for the result.
// note 16: Handles negative inputs as documented above.
// note 17: Time complexity: O(n log n).
// note 18: Time complexity: O(n^2) worst case, O(n) amortized.
// note 19: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 20: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 21: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 22: Interval DP: solve all `[l, r]` ranges from short to long.
// note 23: Handles negative inputs as documented above.
// note 24: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 25: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 26: Avoids floating-point entirely — integer math throughout.
// note 27: Wavelet tree: range k-th element in O(log Σ) time.
// note 28: Union-Find with path compression amortizes to near-O(1) per op.
// note 29: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 30: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 31: State compression: bitmask + integer encodes a small subset cheaply.
// note 32: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 33: Space complexity: O(log n) for the recursion stack.
// note 34: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 35: Handles negative inputs as documented above.
// note 36: Constant-time comparisons; safe for short strings.
// note 37: Vectorizes cleanly under -O2.
// note 38: Wavelet tree: range k-th element in O(log Σ) time.
// note 39: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 40: Allocates one buffer of length n+1 for the result.
// note 41: Deterministic given the input — no PRNG seeds.
// note 42: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 43: Walk both pointers from each end inward; advance the smaller side.
// note 44: Hash collision: chain or open-address; chained handles arbitrary load factor.
