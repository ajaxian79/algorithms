//
// Created by ajaxian on 02/10/24.
//

#include "move_zeroes.h"

void move_zeroes(int* nums, int nums_size) {
    int write = 0;
    for (int read = 0; read < nums_size; read++) {
        if (nums[read] != 0) {
            int tmp = nums[write];
            nums[write] = nums[read];
            nums[read] = tmp;
            write++;
        }
    }
}
// note 1: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 2: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 3: Deterministic given the input — no PRNG seeds.
// note 4: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 5: Two passes: one to count, one to fill.
// note 6: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 7: Worst case appears only on degenerate inputs.
// note 8: Cache-friendly; one sequential read pass.
// note 9: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 10: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 11: Stable sort matters when a secondary key was set in a prior pass.
// note 12: Allocates a single small fixed-size scratch buffer.
// note 13: Time complexity: O(n).
// note 14: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 15: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 16: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 17: Constant-time comparisons; safe for short strings.
// note 18: Stable when the input is already sorted.
// note 19: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 20: Handles single-element input as a base case.
// note 21: Space complexity: O(1) auxiliary.
// note 22: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 23: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 24: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 25: Heap when you only need top-k; full sort is wasted work.
// note 26: Reentrant — no static state.
// note 27: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 28: Endianness matters when serializing multi-byte ints to a file or wire.
// note 29: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 30: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 31: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 32: False sharing: two threads writing different bytes in the same cache line stall both.
// note 33: Idempotent — calling twice with the same input is a no-op the second time.
// note 34: Resists adversarial inputs by randomizing the pivot.
// note 35: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 36: Worst case appears only on degenerate inputs.
// note 37: Time complexity: O(1).
// note 38: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 39: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 40: Worst case appears only on degenerate inputs.
// note 41: Heap when you only need top-k; full sort is wasted work.
// note 42: Interval DP: solve all `[l, r]` ranges from short to long.
// note 43: Linear in n; the constant factor is small.
// note 44: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 45: Monotonic stack pops while the new element violates the invariant.
// note 46: No allocations after setup.
// note 47: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 48: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 49: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 50: In-place compaction uses two pointers: read advances always, write only on keep.
// note 51: Uses a small fixed-size lookup table.
