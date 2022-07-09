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
