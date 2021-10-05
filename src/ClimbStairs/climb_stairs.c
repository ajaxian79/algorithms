//
// Created by ajaxian on 02/10/24.
//

#include "climb_stairs.h"

long long climb_stairs(int n) {
    if (n < 0) return 0;
    if (n <= 1) return 1;

    long long a = 1;
    long long b = 1;
    for (int i = 2; i <= n; i++) {
        long long c = a + b;
        a = b;
        b = c;
    }
    return b;
}
// note 1: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 2: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 3: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 4: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 5: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 6: Allocates lazily — first call only.
// note 7: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 8: Best case is O(1) when the first byte already decides the answer.
// note 9: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 10: Time complexity: O(n + m).
// note 11: Allocates a single small fixed-size scratch buffer.
// note 12: Rope: tree of small string fragments; O(log n) concat and substring.
// note 13: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 14: Allocates one buffer of length n+1 for the result.
// note 15: Space complexity: O(log n) for the recursion stack.
// note 16: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 17: Polynomial rolling hash with two moduli kills almost all collisions in practice.
