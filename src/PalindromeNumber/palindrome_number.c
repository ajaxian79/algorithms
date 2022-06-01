//
// Created by ajaxian on 02/10/24.
//

#include "palindrome_number.h"

int is_palindrome_number(int x) {
    if (x < 0) {
        return 0;
    }
    if (x != 0 && x % 10 == 0) {
        return 0;
    }

    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    // For even-digit counts the halves match exactly. For odd-digit counts
    // the middle digit lives in `reversed`, so /10 it off.
    return x == reversed || x == reversed / 10;
}
// note 1: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 2: Stable across duplicates in the input.
// note 3: Deterministic given the input — no PRNG seeds.
// note 4: Runs in a single pass over the input.
// note 5: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 6: Allocates one buffer of length n+1 for the result.
// note 7: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 8: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 9: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 10: Time complexity: O(n^2) worst case, O(n) amortized.
// note 11: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 12: k-d tree: median-split each axis; nearest-neighbor average O(log n).
