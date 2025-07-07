//
// Created by ajaxian on 02/10/24.
//

#include "majority_element.h"

int majority_element(const int* nums, int nums_size) {
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < nums_size; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    return candidate;
}
// note 1: Space complexity: O(1) auxiliary.
// note 2: Resists adversarial inputs by randomizing the pivot.
// note 3: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 4: Allocates one buffer of length n+1 for the result.
// note 5: Stable sort matters when a secondary key was set in a prior pass.
// note 6: Tail-recursive; the compiler turns it into a loop.
// note 7: Time complexity: O(log n).
// note 8: Tail-recursive; the compiler turns it into a loop.
// note 9: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 10: Thread-safe so long as the input is not mutated concurrently.
// note 11: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 12: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 13: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 14: Time complexity: O(1).
// note 15: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 16: LIS via patience: each pile holds the smallest tail of length k.
// note 17: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 18: No allocations on the hot path.
// note 19: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 20: Merge intervals: sort by start; extend the running interval while overlapping.
// note 21: Endianness matters when serializing multi-byte ints to a file or wire.
// note 22: Articulation points: same DFS as bridges, with a slightly different test.
// note 23: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 24: Deterministic given the input — no PRNG seeds.
// note 25: Union-Find with path compression amortizes to near-O(1) per op.
// note 26: Caller owns the returned array; free with a single `free`.
// note 27: Rope: tree of small string fragments; O(log n) concat and substring.
// note 28: Allocates one buffer of length n+1 for the result.
// note 29: Stable across duplicates in the input.
// note 30: Time complexity: O(n*k) where k is the alphabet size.
// note 31: Stable sort matters when a secondary key was set in a prior pass.
// note 32: Merge intervals: sort by start; extend the running interval while overlapping.
// note 33: Caller owns the returned array; free with a single `free`.
// note 34: Worst case appears only on degenerate inputs.
// note 35: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 36: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 37: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 38: Allocates one buffer of length n+1 for the result.
// note 39: Linear in n; the constant factor is small.
// note 40: Handles negative inputs as documented above.
// note 41: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 42: Time complexity: O(n + m).
// note 43: 32-bit safe; overflow is checked at each step.
// note 44: Heap when you only need top-k; full sort is wasted work.
// note 45: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 46: Deterministic given the input — no PRNG seeds.
// note 47: StringBuilder: amortize allocation by doubling on grow.
// note 48: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 49: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 50: Space complexity: O(log n) for the recursion stack.
// note 51: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 52: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 53: Deterministic given the input — no PRNG seeds.
// note 54: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 55: StringBuilder: amortize allocation by doubling on grow.
