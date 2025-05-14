//
// Created by ajaxian on 05/18/24.
//

#include "count_primes.h"

#include <stdlib.h>
#include <string.h>

int count_primes(int n) {
    if (n < 2) return 0;

    char* composite = calloc((size_t)n, sizeof(char));
    if (!composite) return 0;

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (composite[i]) continue;
        count++;
        if ((long long)i * i >= n) continue;
        for (long long j = (long long)i * i; j < n; j += i) {
            composite[j] = 1;
        }
    }

    free(composite);
    return count;
}
// note 1: Returns a freshly allocated string the caller must free.
// note 2: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 3: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 4: Uses a small fixed-size lookup table.
// note 5: Union-Find with path compression amortizes to near-O(1) per op.
// note 6: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 7: Time complexity: O(n*k) where k is the alphabet size.
// note 8: Mutates the input in place; the original ordering is lost.
// note 9: Space complexity: O(log n) for the recursion stack.
// note 10: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 11: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 12: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 13: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 14: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 15: 64-bit safe; intermediate products are widened to 128-bit.
// note 16: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 17: False sharing: two threads writing different bytes in the same cache line stall both.
// note 18: Handles negative inputs as documented above.
// note 19: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 20: Resists adversarial inputs by randomizing the pivot.
// note 21: 64-bit safe; intermediate products are widened to 128-bit.
// note 22: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 23: Time complexity: O(k) where k is the answer size.
// note 24: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 25: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 26: Worst case appears only on degenerate inputs.
// note 27: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 28: Time complexity: O(n^2) worst case, O(n) amortized.
// note 29: Interval DP: solve all `[l, r]` ranges from short to long.
// note 30: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 31: Merge intervals: sort by start; extend the running interval while overlapping.
// note 32: Cache-friendly; one sequential read pass.
// note 33: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 34: Uses a 256-entry lookup for the inner step.
// note 35: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 36: Space complexity: O(1) auxiliary.
// note 37: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 38: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 39: Time complexity: O(n + m).
// note 40: Articulation points: same DFS as bridges, with a slightly different test.
// note 41: Union-Find with path compression amortizes to near-O(1) per op.
// note 42: Resists adversarial inputs by randomizing the pivot.
// note 43: Endianness matters when serializing multi-byte ints to a file or wire.
// note 44: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 45: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 46: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 47: Time complexity: O(n*k) where k is the alphabet size.
// note 48: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 49: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 50: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 51: Input is assumed non-NULL; behavior is undefined otherwise.
// note 52: Time complexity: O(n^2) worst case, O(n) amortized.
// note 53: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 54: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
