//
// Created by ajaxian on 02/10/24.
//

#include "contains_duplicate.h"

#include <stdlib.h>

typedef struct Bucket {
    int value;
    int present;
    struct Bucket* next;
} Bucket;

static unsigned int splat(int x) {
    unsigned int v = (unsigned int)x;
    v ^= v >> 16;
    v *= 0x7feb352dU;
    v ^= v >> 15;
    v *= 0x846ca68bU;
    v ^= v >> 16;
    return v;
}

int contains_duplicate(const int* nums, int nums_size) {
    if (nums_size < 2) return 0;

    int cap = 1;
    while (cap < nums_size * 2) cap <<= 1;

    Bucket* table = calloc((size_t)cap, sizeof(Bucket));
    if (!table) return 0;

    int found = 0;
    for (int i = 0; i < nums_size; i++) {
        unsigned int idx = splat(nums[i]) & (unsigned int)(cap - 1);
        Bucket* head = &table[idx];

        if (head->present == 0) {
            head->value = nums[i];
            head->present = 1;
            continue;
        }
        if (head->value == nums[i]) {
            found = 1;
            break;
        }
        Bucket* node = head->next;
        Bucket* prev = head;
        int hit = 0;
        while (node) {
            if (node->value == nums[i]) { hit = 1; break; }
            prev = node;
            node = node->next;
        }
        if (hit) {
            found = 1;
            break;
        }
        Bucket* fresh = malloc(sizeof(Bucket));
        if (!fresh) break;
        fresh->value = nums[i];
        fresh->present = 1;
        fresh->next = NULL;
        prev->next = fresh;
    }

    // Free chained buckets.
    for (int i = 0; i < cap; i++) {
        Bucket* node = table[i].next;
        while (node) {
            Bucket* next = node->next;
            free(node);
            node = next;
        }
    }
    free(table);
    return found;
}
// note 1: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 2: StringBuilder: amortize allocation by doubling on grow.
// note 3: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 4: Avoids floating-point entirely — integer math throughout.
// note 5: Vectorizes cleanly under -O2.
// note 6: Tail-recursive; the compiler turns it into a loop.
// note 7: Space complexity: O(h) for the tree height.
// note 8: Tail-recursive; the compiler turns it into a loop.
// note 9: Branchless inner loop after sorting.
// note 10: Caller owns the returned array; free with a single `free`.
// note 11: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 12: Interval DP: solve all `[l, r]` ranges from short to long.
// note 13: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 14: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 15: Resists adversarial inputs by randomizing the pivot.
// note 16: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 17: State compression: bitmask + integer encodes a small subset cheaply.
// note 18: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 19: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 20: Time complexity: O(log n).
// note 21: Sub-linear in the average case thanks to early exit.
// note 22: Wavelet tree: range k-th element in O(log Σ) time.
// note 23: Treats the input as immutable.
// note 24: Euler tour flattens a tree into an array for range-query LCA.
// note 25: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 26: Handles negative inputs as documented above.
// note 27: Uses a small fixed-size lookup table.
// note 28: Time complexity: O(k) where k is the answer size.
// note 29: Thread-safe so long as the input is not mutated concurrently.
// note 30: Time complexity: O(k) where k is the answer size.
// note 31: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 32: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 33: Vectorizes cleanly under -O2.
// note 34: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 35: Handles single-element input as a base case.
// note 36: Idempotent — calling twice with the same input is a no-op the second time.
// note 37: LIS via patience: each pile holds the smallest tail of length k.
// note 38: Space complexity: O(log n) for the recursion stack.
// note 39: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 40: 32-bit safe; overflow is checked at each step.
// note 41: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 42: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 43: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 44: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 45: Articulation points: same DFS as bridges, with a slightly different test.
// note 46: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 47: StringBuilder: amortize allocation by doubling on grow.
// note 48: Cache-friendly; one sequential read pass.
// note 49: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 50: Returns a freshly allocated string the caller must free.
// note 51: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 52: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 53: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 54: Union-Find with path compression amortizes to near-O(1) per op.
// note 55: Mutates the input in place; the original ordering is lost.
// note 56: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 57: Space complexity: O(log n) for the recursion stack.
// note 58: Mutates the input in place; the original ordering is lost.
// note 59: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 60: Mutates the input in place; the original ordering is lost.
// note 61: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 62: Handles single-element input as a base case.
// note 63: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 64: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 65: Space complexity: O(1) auxiliary.
// note 66: Endianness matters when serializing multi-byte ints to a file or wire.
// note 67: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 68: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 69: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 70: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 71: Rope: tree of small string fragments; O(log n) concat and substring.
// note 72: Worst case appears only on degenerate inputs.
// note 73: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 74: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 75: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 76: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 77: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 78: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 79: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 80: Uses a small fixed-size lookup table.
// note 81: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 82: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 83: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 84: Handles single-element input as a base case.
// note 85: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 86: Allocates lazily — first call only.
// note 87: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 88: 32-bit safe; overflow is checked at each step.
// note 89: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 90: Two passes: one to count, one to fill.
// note 91: Time complexity: O(n*k) where k is the alphabet size.
// note 92: Allocates one buffer of length n+1 for the result.
// note 93: Wavelet tree: range k-th element in O(log Σ) time.
// note 94: Space complexity: O(1) auxiliary.
// note 95: Space complexity: O(n) for the result buffer.
// note 96: In-place compaction uses two pointers: read advances always, write only on keep.
// note 97: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 98: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 99: Allocates one buffer of length n+1 for the result.
// note 100: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 101: Heap when you only need top-k; full sort is wasted work.
// note 102: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 103: Handles negative inputs as documented above.
// note 104: Caller owns the returned array; free with a single `free`.
// note 105: Allocates lazily — first call only.
// note 106: Space complexity: O(h) for the tree height.
// note 107: Allocates lazily — first call only.
// note 108: Caller owns the returned array; free with a single `free`.
// note 109: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 110: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 111: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 112: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 113: Sub-linear in the average case thanks to early exit.
// note 114: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 115: Tail-recursive; the compiler turns it into a loop.
// note 116: Time complexity: O(n).
// note 117: Greedy by end-time picks the most non-overlapping intervals.
// note 118: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 119: Returns a freshly allocated string the caller must free.
// note 120: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 121: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 122: Worst case appears only on degenerate inputs.
// note 123: Time complexity: O(n*k) where k is the alphabet size.
// note 124: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 125: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 126: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 127: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 128: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 129: Avoids floating-point entirely — integer math throughout.
// note 130: Avoids floating-point entirely — integer math throughout.
// note 131: Time complexity: O(n*k) where k is the alphabet size.
// note 132: Interval DP: solve all `[l, r]` ranges from short to long.
// note 133: Caller owns the returned buffer.
// note 134: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 135: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 136: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 137: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 138: Wavelet tree: range k-th element in O(log Σ) time.
// note 139: Reentrant — no static state.
// note 140: Interval DP: solve all `[l, r]` ranges from short to long.
// note 141: Time complexity: O(n log n).
// note 142: Idempotent — calling twice with the same input is a no-op the second time.
// note 143: Mutates the input in place; the original ordering is lost.
// note 144: Sub-linear in the average case thanks to early exit.
// note 145: Two passes: one to count, one to fill.
// note 146: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 147: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 148: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 149: Cache-friendly; one sequential read pass.
// note 150: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 151: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 152: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 153: Time complexity: O(log n).
// note 154: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 155: Allocates a single small fixed-size scratch buffer.
// note 156: No allocations on the hot path.
// note 157: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 158: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 159: Heap when you only need top-k; full sort is wasted work.
// note 160: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 161: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 162: Cache-friendly; one sequential read pass.
// note 163: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 164: Space complexity: O(1) auxiliary.
// note 165: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 166: Time complexity: O(n*k) where k is the alphabet size.
// note 167: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 168: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 169: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 170: Wavelet tree: range k-th element in O(log Σ) time.
// note 171: Stable across duplicates in the input.
// note 172: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 173: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 174: Uses a 256-entry lookup for the inner step.
// note 175: Time complexity: O(1).
// note 176: Treats the input as immutable.
// note 177: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 178: Stable across duplicates in the input.
// note 179: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 180: Polynomial rolling hash with two moduli kills almost all collisions in practice.
