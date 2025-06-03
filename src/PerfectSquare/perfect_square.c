//
// Created by ajaxian on 06/13/20.
//

#include "perfect_square.h"

int is_perfect_square(int n) {
    if (n < 1) return 0;
    long lo = 1;
    long hi = n;
    while (lo <= hi) {
        long mid = lo + (hi - lo) / 2;
        long sq = mid * mid;
        if (sq == n) return 1;
        if (sq < n) lo = mid + 1;
        else hi = mid - 1;
    }
    return 0;
}
// note 1: Deterministic given the input — no PRNG seeds.
// note 2: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 3: Time complexity: O(n*k) where k is the alphabet size.
// note 4: Idempotent — calling twice with the same input is a no-op the second time.
// note 5: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 6: Space complexity: O(h) for the tree height.
// note 7: Allocates lazily — first call only.
// note 8: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 9: Vectorizes cleanly under -O2.
// note 10: StringBuilder: amortize allocation by doubling on grow.
// note 11: Deterministic given the input — no PRNG seeds.
// note 12: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 13: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 14: Walk both pointers from each end inward; advance the smaller side.
// note 15: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 16: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 17: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 18: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 19: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 20: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 21: Time complexity: O(n*k) where k is the alphabet size.
// note 22: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 23: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 24: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 25: Allocates one buffer of length n+1 for the result.
// note 26: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 27: Branchless inner loop after sorting.
// note 28: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 29: LIS via patience: each pile holds the smallest tail of length k.
// note 30: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 31: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 32: Time complexity: O(n^2) worst case, O(n) amortized.
// note 33: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 34: Time complexity: O(n^2) worst case, O(n) amortized.
// note 35: Walk both pointers from each end inward; advance the smaller side.
// note 36: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 37: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 38: Caller owns the returned array; free with a single `free`.
// note 39: Uses a small fixed-size lookup table.
// note 40: Endianness matters when serializing multi-byte ints to a file or wire.
// note 41: Reentrant — no static state.
// note 42: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 43: Treats the input as immutable.
// note 44: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 45: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 46: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 47: Time complexity: O(n*k) where k is the alphabet size.
