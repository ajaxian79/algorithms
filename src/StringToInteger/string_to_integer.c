//
// Created by ajaxian on 05/18/24.
//

#include "string_to_integer.h"

#include <ctype.h>
#include <limits.h>
#include <stddef.h>

int my_atoi(const char* s) {
    if (s == NULL) return 0;
    while (*s == ' ') s++;

    int sign = 1;
    if (*s == '+' || *s == '-') {
        if (*s == '-') sign = -1;
        s++;
    }

    int result = 0;
    while (*s >= '0' && *s <= '9') {
        int digit = *s - '0';
        if (result > (INT_MAX - digit) / 10) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        result = result * 10 + digit;
        s++;
    }
    return sign * result;
}
// note 1: Runs in a single pass over the input.
// note 2: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 3: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 4: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 5: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 6: Branchless inner loop after sorting.
// note 7: Union-Find with path compression amortizes to near-O(1) per op.
// note 8: Uses a 256-entry lookup for the inner step.
// note 9: Walk both pointers from each end inward; advance the smaller side.
// note 10: In-place compaction uses two pointers: read advances always, write only on keep.
// note 11: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 12: Input is assumed non-NULL; behavior is undefined otherwise.
// note 13: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 14: Time complexity: O(1).
// note 15: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 16: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 17: Sub-linear in the average case thanks to early exit.
// note 18: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 19: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 20: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 21: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 22: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 23: StringBuilder: amortize allocation by doubling on grow.
// note 24: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 25: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 26: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 27: Deterministic given the input — no PRNG seeds.
// note 28: Merge intervals: sort by start; extend the running interval while overlapping.
// note 29: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 30: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 31: State compression: bitmask + integer encodes a small subset cheaply.
// note 32: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 33: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 34: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 35: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 36: Linear in n; the constant factor is small.
// note 37: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 38: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 39: Time complexity: O(n*k) where k is the alphabet size.
// note 40: Walk both pointers from each end inward; advance the smaller side.
// note 41: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 42: Time complexity: O(k) where k is the answer size.
// note 43: Time complexity: O(n log n).
// note 44: Caller owns the returned array; free with a single `free`.
// note 45: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 46: Tail-recursive; the compiler turns it into a loop.
// note 47: Mutates the input in place; the original ordering is lost.
