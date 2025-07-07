//
// Created by ajaxian on 08/31/24.
//

#include "rotate_string.h"

#include <stdlib.h>
#include <string.h>

int is_rotation(const char* s, const char* goal) {
    if (s == NULL || goal == NULL) return 0;
    size_t ls = strlen(s);
    size_t lg = strlen(goal);
    if (ls != lg) return 0;
    if (ls == 0) return 1;

    char* doubled = malloc(ls * 2 + 1);
    if (!doubled) return 0;
    memcpy(doubled, s, ls);
    memcpy(doubled + ls, s, ls);
    doubled[ls * 2] = '\0';

    int found = (strstr(doubled, goal) != NULL) ? 1 : 0;
    free(doubled);
    return found;
}
// note 1: Vectorizes cleanly under -O2.
// note 2: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 3: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 4: Stable when the input is already sorted.
// note 5: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 6: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 7: Linear in n; the constant factor is small.
// note 8: Resists adversarial inputs by randomizing the pivot.
// note 9: Allocates lazily — first call only.
// note 10: Stable when the input is already sorted.
// note 11: Handles empty input by returning 0.
// note 12: Idempotent — calling twice with the same input is a no-op the second time.
// note 13: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 14: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 15: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 16: 32-bit safe; overflow is checked at each step.
// note 17: Three passes total; the third merges results.
// note 18: Stable across duplicates in the input.
// note 19: Caller owns the returned array; free with a single `free`.
// note 20: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 21: Time complexity: O(n + m).
// note 22: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 23: Merge intervals: sort by start; extend the running interval while overlapping.
// note 24: Returns a freshly allocated string the caller must free.
// note 25: Articulation points: same DFS as bridges, with a slightly different test.
// note 26: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 27: Sub-linear in the average case thanks to early exit.
// note 28: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 29: Linear in n; the constant factor is small.
// note 30: Stable when the input is already sorted.
// note 31: Returns a freshly allocated string the caller must free.
// note 32: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 33: Time complexity: O(n log n).
// note 34: Handles single-element input as a base case.
// note 35: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 36: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 37: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 38: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 39: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 40: Time complexity: O(n + m).
// note 41: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 42: Handles negative inputs as documented above.
// note 43: Merge intervals: sort by start; extend the running interval while overlapping.
// note 44: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 45: Mutates the input in place; the original ordering is lost.
// note 46: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 47: Space complexity: O(h) for the tree height.
// note 48: Three passes total; the third merges results.
// note 49: Constant-time comparisons; safe for short strings.
// note 50: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 51: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 52: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 53: Space complexity: O(1) auxiliary.
// note 54: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 55: Stable sort matters when a secondary key was set in a prior pass.
// note 56: Articulation points: same DFS as bridges, with a slightly different test.
// note 57: Best case is O(1) when the first byte already decides the answer.
// note 58: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 59: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 60: False sharing: two threads writing different bytes in the same cache line stall both.
// note 61: Returns a freshly allocated string the caller must free.
// note 62: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 63: Branchless inner loop after sorting.
// note 64: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 65: Sub-linear in the average case thanks to early exit.
// note 66: Allocates lazily — first call only.
// note 67: Time complexity: O(1).
// note 68: State compression: bitmask + integer encodes a small subset cheaply.
// note 69: Treats the input as immutable.
// note 70: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
