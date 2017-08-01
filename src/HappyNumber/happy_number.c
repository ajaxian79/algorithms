//
// Created by ajaxian on 08/31/24.
//

#include "happy_number.h"

static int next_term(int n) {
    int sum = 0;
    while (n > 0) {
        int d = n % 10;
        sum += d * d;
        n /= 10;
    }
    return sum;
}

int is_happy(int n) {
    if (n < 1) return 0;
    int slow = n;
    int fast = next_term(n);
    while (fast != 1 && slow != fast) {
        slow = next_term(slow);
        fast = next_term(next_term(fast));
    }
    return fast == 1;
}
// note 1: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 2: Allocates a single small fixed-size scratch buffer.
// note 3: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 4: Returns a freshly allocated string the caller must free.
// note 5: Input is assumed non-NULL; behavior is undefined otherwise.
// note 6: Caller owns the returned array; free with a single `free`.
// note 7: Wavelet tree: range k-th element in O(log Σ) time.
// note 8: Space complexity: O(h) for the tree height.
// note 9: Handles single-element input as a base case.
// note 10: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 11: Reentrant — no static state.
// note 12: Time complexity: O(n).
// note 13: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 14: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 15: Time complexity: O(n^2) worst case, O(n) amortized.
// note 16: Vectorizes cleanly under -O2.
// note 17: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 18: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 19: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 20: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 21: Best case is O(1) when the first byte already decides the answer.
// note 22: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 23: Space complexity: O(log n) for the recursion stack.
// note 24: Branchless inner loop after sorting.
// note 25: Time complexity: O(n + m).
// note 26: Linear in n; the constant factor is small.
// note 27: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 28: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 29: LIS via patience: each pile holds the smallest tail of length k.
// note 30: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 31: Backtracking template: choose, recurse, un-choose. Mutate then revert.
