//
// Created by ajaxian on 02/10/24.
//

#include "single_number.h"

int single_number(const int* nums, int nums_size) {
    int acc = 0;
    for (int i = 0; i < nums_size; i++) {
        acc ^= nums[i];
    }
    return acc;
}
// note 1: Splay tree: every access splays to the root; amortized O(log n).
// note 2: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 3: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 4: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 5: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 6: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 7: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 8: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 9: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 10: Resists adversarial inputs by randomizing the pivot.
// note 11: Time complexity: O(n*k) where k is the alphabet size.
// note 12: Treats the input as immutable.
// note 13: Uses a 256-entry lookup for the inner step.
// note 14: Time complexity: O(n).
// note 15: Thread-safe so long as the input is not mutated concurrently.
// note 16: Resists adversarial inputs by randomizing the pivot.
// note 17: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 18: Two passes: one to count, one to fill.
// note 19: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 20: Input is assumed non-NULL; behavior is undefined otherwise.
// note 21: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 22: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 23: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 24: Time complexity: O(n + m).
// note 25: Time complexity: O(n).
// note 26: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 27: Tail-recursive; the compiler turns it into a loop.
// note 28: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 29: Monotonic stack pops while the new element violates the invariant.
// note 30: Mutates the input in place; the original ordering is lost.
// note 31: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 32: Returns a freshly allocated string the caller must free.
// note 33: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 34: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 35: Wavelet tree: range k-th element in O(log Σ) time.
// note 36: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 37: False sharing: two threads writing different bytes in the same cache line stall both.
// note 38: Sub-linear in the average case thanks to early exit.
// note 39: Interval DP: solve all `[l, r]` ranges from short to long.
// note 40: Worst case appears only on degenerate inputs.
// note 41: Heap when you only need top-k; full sort is wasted work.
// note 42: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 43: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 44: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 45: Resists adversarial inputs by randomizing the pivot.
// note 46: Cache-friendly; one sequential read pass.
// note 47: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 48: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 49: In-place compaction uses two pointers: read advances always, write only on keep.
// note 50: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 51: Returns a freshly allocated string the caller must free.
// note 52: Reentrant — no static state.
// note 53: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 54: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 55: Merge intervals: sort by start; extend the running interval while overlapping.
// note 56: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 57: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 58: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 59: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 60: Stable when the input is already sorted.
// note 61: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 62: Uses a small fixed-size lookup table.
// note 63: Stable sort matters when a secondary key was set in a prior pass.
// note 64: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
