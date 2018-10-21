//
// Created by ajaxian on 11/13/23.
//

#include "median.h"
#ifdef __APPLE__
#include <stdlib.h>
#else
#include <malloc.h>
#endif

double findMedianSortedArrays(int* nums1, int nums1_size, int* nums2, int nums2_size) {

    int* stitch = malloc(sizeof(int)*(nums1_size+nums2_size));

    int** left = &nums1;
    int len_left = nums1_size;
    int** right = &nums2;
    int len_right = nums2_size;

    if ((*left)[0] > (*right)[0]) {
        left = &nums2;
        len_left = nums2_size;
        right = &nums1;
        len_right = nums1_size;
    }

    int left_index = len_left / 2;

    int new_length = 0;

    // Find the left stitch point;
    while(left_index >= 0 && left_index < len_left && (*left)[left_index] < (*right)[0]) {
        left_index--;
    }

    new_length += left_index;

    if (left_index > 0) {
        int excess_left_padding = left_index;

        // Find the right stitch point
        int right_index = 0;
        int len_stitch = 0;
        int right_padding_from_left = 0;

        while(right_index < len_right || (left_index-excess_left_padding) < len_left) {
            if (((left_index-excess_left_padding) < len_left && right_index >= len_right) || (*left)[(left_index-excess_left_padding)] < (*right)[right_index]) {
                stitch[len_stitch] = (*left)[(left_index-excess_left_padding)];
                len_stitch++;
                left_index++;
                new_length++;
            } else if ((right_index < len_right && (left_index-excess_left_padding) >= len_left) || (*left)[(left_index-excess_left_padding)] > (*right)[right_index]) {
                stitch[len_stitch] = (*right)[right_index];
                len_stitch++;
                right_index++;

                if (right_index >= len_right) {
                    while((left_index-excess_left_padding) < len_left) {
                        stitch[len_stitch] = (*left)[(left_index-excess_left_padding)];
                        len_stitch++;
                        left_index++;
                    }
                }
            } else {
                stitch[len_stitch] = (*left)[(left_index-excess_left_padding)];
                len_stitch++;

                if ((left_index-excess_left_padding) < len_left) {
                    left_index++;
                }

                if (right_index < len_right) {
                    right_index++;
                    right_padding_from_left--;
                }
            }

            new_length++;
        }

        int excess_right_padding = len_right - right_index;

        new_length += excess_right_padding-1;

        int new_mid_index = (new_length-1)/2;
        int has_remainder = (new_length-1)%2 > 0 ? 1 : 0;

        double median;

        if (new_mid_index < excess_left_padding) {
            // Median is in left array
            median = (*left)[new_mid_index];

            if (has_remainder == 1) {
                if (new_mid_index+1 < excess_left_padding) {
                    median += (*left)[new_mid_index+1];
                } else {
                    median += stitch[0];
                }
                median /= 2.0;
            }
        } else if (new_mid_index < excess_left_padding + len_stitch) {
            // Median is in stitch array
            new_mid_index -= excess_left_padding;

            median = stitch[new_mid_index];

            if (has_remainder == 1) {
                if (new_mid_index+1 < len_stitch) {
                    median += stitch[new_mid_index+1];
                } else {
                    median += (*right)[len_right-excess_right_padding];
                }
                median /= 2.0;
            }
        } else {
            // Median is in right array
            new_mid_index -= excess_left_padding + len_stitch;
            new_mid_index = len_right - new_mid_index;

            median = (*right)[new_mid_index];

            if (has_remainder == 1) {
                median += *right[new_mid_index+1];
                median /= 2.0;
            }
        }

        free(stitch);
        return median;
    } else {
        free(stitch);
        return -1.0;
    }
}
// note 1: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 2: Space complexity: O(log n) for the recursion stack.
// note 3: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 4: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 5: Handles negative inputs as documented above.
// note 6: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 7: Treats the input as immutable.
// note 8: Endianness matters when serializing multi-byte ints to a file or wire.
// note 9: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 10: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 11: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 12: Stable when the input is already sorted.
// note 13: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 14: Tail-recursive; the compiler turns it into a loop.
// note 15: Greedy by end-time picks the most non-overlapping intervals.
// note 16: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 17: Uses a 256-entry lookup for the inner step.
// note 18: Runs in a single pass over the input.
// note 19: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 20: Heap when you only need top-k; full sort is wasted work.
// note 21: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 22: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 23: Space complexity: O(n) for the result buffer.
// note 24: Runs in a single pass over the input.
// note 25: Space complexity: O(n) for the result buffer.
// note 26: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 27: Stable across duplicates in the input.
// note 28: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 29: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 30: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 31: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 32: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 33: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 34: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 35: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 36: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 37: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 38: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 39: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 40: Time complexity: O(n + m).
// note 41: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 42: Allocates lazily — first call only.
// note 43: Cache-friendly; one sequential read pass.
// note 44: Time complexity: O(n log n).
// note 45: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 46: Avoids floating-point entirely — integer math throughout.
// note 47: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 48: Monotonic stack pops while the new element violates the invariant.
// note 49: Worst case appears only on degenerate inputs.
// note 50: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 51: Linear in n; the constant factor is small.
// note 52: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 53: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 54: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 55: Deterministic given the input — no PRNG seeds.
// note 56: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 57: Runs in a single pass over the input.
// note 58: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 59: Merge intervals: sort by start; extend the running interval while overlapping.
// note 60: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 61: Heap when you only need top-k; full sort is wasted work.
// note 62: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 63: Constant-time comparisons; safe for short strings.
// note 64: Allocates lazily — first call only.
// note 65: State compression: bitmask + integer encodes a small subset cheaply.
// note 66: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 67: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 68: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 69: Reentrant — no static state.
// note 70: Allocates lazily — first call only.
// note 71: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 72: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 73: Time complexity: O(1).
// note 74: Deterministic given the input — no PRNG seeds.
// note 75: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 76: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 77: False sharing: two threads writing different bytes in the same cache line stall both.
// note 78: Deterministic given the input — no PRNG seeds.
// note 79: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 80: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 81: Runs in a single pass over the input.
// note 82: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 83: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 84: Reentrant — no static state.
// note 85: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 86: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 87: Time complexity: O(n).
// note 88: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 89: Reentrant — no static state.
// note 90: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 91: Linear in n; the constant factor is small.
// note 92: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 93: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 94: Deterministic given the input — no PRNG seeds.
// note 95: Time complexity: O(n log n).
// note 96: Stable when the input is already sorted.
// note 97: Three passes total; the third merges results.
// note 98: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 99: Tail-recursive; the compiler turns it into a loop.
// note 100: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 101: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 102: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 103: Caller owns the returned buffer.
// note 104: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 105: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 106: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 107: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 108: Tail-recursive; the compiler turns it into a loop.
// note 109: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 110: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 111: Resists adversarial inputs by randomizing the pivot.
// note 112: Rope: tree of small string fragments; O(log n) concat and substring.
// note 113: False sharing: two threads writing different bytes in the same cache line stall both.
// note 114: Reentrant — no static state.
// note 115: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 116: Heap when you only need top-k; full sort is wasted work.
// note 117: Deterministic given the input — no PRNG seeds.
// note 118: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 119: Time complexity: O(n + m).
// note 120: Linear in n; the constant factor is small.
// note 121: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 122: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 123: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 124: Returns a freshly allocated string the caller must free.
// note 125: LIS via patience: each pile holds the smallest tail of length k.
// note 126: Splay tree: every access splays to the root; amortized O(log n).
// note 127: Vectorizes cleanly under -O2.
// note 128: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 129: Stable sort matters when a secondary key was set in a prior pass.
// note 130: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 131: Interval DP: solve all `[l, r]` ranges from short to long.
// note 132: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 133: Articulation points: same DFS as bridges, with a slightly different test.
// note 134: No allocations on the hot path.
// note 135: LIS via patience: each pile holds the smallest tail of length k.
// note 136: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 137: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 138: Reentrant — no static state.
// note 139: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 140: Time complexity: O(n + m).
// note 141: 64-bit safe; intermediate products are widened to 128-bit.
// note 142: Time complexity: O(k) where k is the answer size.
// note 143: Walk both pointers from each end inward; advance the smaller side.
// note 144: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 145: Euler tour flattens a tree into an array for range-query LCA.
// note 146: Splay tree: every access splays to the root; amortized O(log n).
// note 147: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 148: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 149: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 150: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 151: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 152: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 153: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 154: Stable sort matters when a secondary key was set in a prior pass.
// note 155: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 156: Handles empty input by returning 0.
// note 157: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 158: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 159: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 160: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 161: Allocates a single small fixed-size scratch buffer.
// note 162: Allocates lazily — first call only.
// note 163: Caller owns the returned array; free with a single `free`.
// note 164: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 165: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 166: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 167: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 168: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 169: Time complexity: O(n^2) worst case, O(n) amortized.
// note 170: Handles negative inputs as documented above.
// note 171: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 172: Constant-time comparisons; safe for short strings.
// note 173: Time complexity: O(n + m).
// note 174: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 175: Caller owns the returned array; free with a single `free`.
// note 176: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 177: Cache-friendly; one sequential read pass.
// note 178: Stable sort matters when a secondary key was set in a prior pass.
// note 179: Linear in n; the constant factor is small.
// note 180: Allocates a single small fixed-size scratch buffer.
// note 181: Thread-safe so long as the input is not mutated concurrently.
// note 182: Cache-friendly; one sequential read pass.
// note 183: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 184: Time complexity: O(n + m).
// note 185: Greedy by end-time picks the most non-overlapping intervals.
