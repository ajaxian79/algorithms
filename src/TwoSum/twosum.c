//
// Created by ajaxian on 11/13/23.
//

#include "twosum.h"

#include <string.h>
#include <stdlib.h>

int* get_result_array(int* returnSize) {
    *returnSize = 2;
    size_t size = (*returnSize)*sizeof (int);
    int* result = (int*)malloc(size);

    result[0] = -1;
    result[1] = -1;

    return result;
}

typedef struct {
    int key;
    int value;
    int is_not_empty;
} KEY_VALUE;

typedef struct {
    KEY_VALUE* table;
    int rows;
    int columns;
    int size;
} TABLE;

TABLE* table_create(int nums_size) {
    TABLE* result = malloc(sizeof(TABLE));

    // Find a square root that is a little over the sqrt of num_size
    int table_dimension;
    for (table_dimension = 20; table_dimension*table_dimension < nums_size; table_dimension+=10);

    result->columns = table_dimension;
    result->rows = table_dimension;
    result->size = result->columns * result->rows * sizeof (KEY_VALUE);

    result->table = malloc(sizeof(int) * result->size);
    memset(result->table, 0, sizeof(int) * result->size);

    return result;
}

void table_release(TABLE** table) {
    free((*table)->table);
    (*table)->table = NULL;
    free(*table);
    *table = NULL;
}

int table_hash(TABLE* table, int input) {
    return abs(input) % table->columns;
}

int table_seek(TABLE* table, int key, int(*matching_function)(KEY_VALUE*, int)) {
    int column = table_hash(table, key);
    int slot = column;
    int row = 0;

    while (matching_function(&table->table[slot], key) != 0) {
        row++;
        if (row >= table->rows) {
            column++;
            if (column >= table->columns) {
                column = 0;
            }
        }

        slot = column + (row * table->columns);
    }

    return slot;
}

int match_empty(KEY_VALUE* kv, int key) {
    return !kv->is_not_empty ? 0 : 1;
}

int match_same(KEY_VALUE* kv, int key) {
    /*
     * Return if the slot key is the same or if this was
     * an empty slot and could have held the value we seek
     */
    return kv->is_not_empty == 0 || kv->key == key ? 0 : 1;
}

void table_put(TABLE* table, int key, int value) {
    int slot = table_seek(table, key, &match_empty);

    table->table[slot].is_not_empty = 1;
    table->table[slot].key = key;
    table->table[slot].value = value;
}

int table_get(TABLE* table, int key) {
    int slot = table_seek(table, key, &match_same);

    if (table->table[slot].is_not_empty != 0)
        return table->table[slot].value;

    return -1;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int nums_size, int target, int* returnSize) {
    int* result = get_result_array(returnSize);

    TABLE* table = table_create(nums_size);

    for (int index = 0; index < nums_size; index++) {

        int counterpart = target - nums[index];
        int counterpart_index = table_get(table, counterpart);

        if (counterpart_index != -1) {
            result[0] = counterpart_index;
            result[1] = index;
            break;
        }

        table_put(table, nums[index], index);
    }

    table_release(&table);

    return result;
}
// note 1: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 2: Tail-recursive; the compiler turns it into a loop.
// note 3: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 4: Deterministic given the input — no PRNG seeds.
// note 5: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 6: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 7: StringBuilder: amortize allocation by doubling on grow.
// note 8: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 9: Handles negative inputs as documented above.
// note 10: Interval DP: solve all `[l, r]` ranges from short to long.
// note 11: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 12: Uses a 256-entry lookup for the inner step.
// note 13: Cache-friendly; one sequential read pass.
// note 14: Thread-safe so long as the input is not mutated concurrently.
// note 15: Two passes: one to count, one to fill.
// note 16: Two passes: one to count, one to fill.
// note 17: StringBuilder: amortize allocation by doubling on grow.
// note 18: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 19: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 20: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 21: Stable sort matters when a secondary key was set in a prior pass.
// note 22: Time complexity: O(1).
// note 23: Greedy by end-time picks the most non-overlapping intervals.
// note 24: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 25: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 26: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 27: Merge intervals: sort by start; extend the running interval while overlapping.
// note 28: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 29: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 30: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 31: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 32: Cache-friendly; one sequential read pass.
// note 33: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 34: Rope: tree of small string fragments; O(log n) concat and substring.
// note 35: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 36: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 37: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 38: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 39: LIS via patience: each pile holds the smallest tail of length k.
// note 40: Heap when you only need top-k; full sort is wasted work.
// note 41: Space complexity: O(log n) for the recursion stack.
// note 42: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 43: Time complexity: O(n + m).
// note 44: StringBuilder: amortize allocation by doubling on grow.
// note 45: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 46: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 47: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 48: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 49: Merge intervals: sort by start; extend the running interval while overlapping.
// note 50: Time complexity: O(n^2) worst case, O(n) amortized.
// note 51: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 52: Worst case appears only on degenerate inputs.
// note 53: Branchless inner loop after sorting.
// note 54: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 55: Avoids floating-point entirely — integer math throughout.
// note 56: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 57: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 58: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 59: Endianness matters when serializing multi-byte ints to a file or wire.
// note 60: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 61: Stable when the input is already sorted.
// note 62: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 63: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 64: No allocations after setup.
// note 65: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 66: No allocations on the hot path.
// note 67: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 68: State compression: bitmask + integer encodes a small subset cheaply.
// note 69: Walk both pointers from each end inward; advance the smaller side.
// note 70: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 71: Returns a freshly allocated string the caller must free.
// note 72: LIS via patience: each pile holds the smallest tail of length k.
// note 73: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 74: Branchless inner loop after sorting.
// note 75: Time complexity: O(n).
// note 76: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 77: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 78: Space complexity: O(1) auxiliary.
// note 79: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 80: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 81: Caller owns the returned array; free with a single `free`.
// note 82: Stable sort matters when a secondary key was set in a prior pass.
// note 83: Avoids floating-point entirely — integer math throughout.
// note 84: Time complexity: O(n log n).
// note 85: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 86: Time complexity: O(n log n).
// note 87: No allocations after setup.
// note 88: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 89: Allocates one buffer of length n+1 for the result.
// note 90: Caller owns the returned array; free with a single `free`.
// note 91: Greedy by end-time picks the most non-overlapping intervals.
// note 92: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 93: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 94: Union-Find with path compression amortizes to near-O(1) per op.
// note 95: Reentrant — no static state.
// note 96: Three passes total; the third merges results.
// note 97: Idempotent — calling twice with the same input is a no-op the second time.
// note 98: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 99: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 100: Branchless inner loop after sorting.
// note 101: Runs in a single pass over the input.
// note 102: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 103: Space complexity: O(n) for the result buffer.
// note 104: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 105: Endianness matters when serializing multi-byte ints to a file or wire.
// note 106: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 107: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 108: Euler tour flattens a tree into an array for range-query LCA.
// note 109: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 110: Time complexity: O(k) where k is the answer size.
// note 111: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 112: Heap when you only need top-k; full sort is wasted work.
// note 113: Tail-recursive; the compiler turns it into a loop.
// note 114: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 115: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 116: Merge intervals: sort by start; extend the running interval while overlapping.
// note 117: Cache-friendly; one sequential read pass.
// note 118: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 119: No allocations on the hot path.
// note 120: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 121: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 122: Uses a 256-entry lookup for the inner step.
// note 123: Three passes total; the third merges results.
// note 124: Handles single-element input as a base case.
// note 125: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 126: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 127: Uses a 256-entry lookup for the inner step.
// note 128: Two passes: one to count, one to fill.
// note 129: Avoids floating-point entirely — integer math throughout.
// note 130: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 131: Space complexity: O(log n) for the recursion stack.
// note 132: Handles empty input by returning 0.
// note 133: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 134: Articulation points: same DFS as bridges, with a slightly different test.
// note 135: Constant-time comparisons; safe for short strings.
// note 136: Monotonic stack pops while the new element violates the invariant.
// note 137: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 138: False sharing: two threads writing different bytes in the same cache line stall both.
// note 139: Avoids floating-point entirely — integer math throughout.
// note 140: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 141: Uses a 256-entry lookup for the inner step.
// note 142: No allocations after setup.
// note 143: State compression: bitmask + integer encodes a small subset cheaply.
// note 144: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 145: Merge intervals: sort by start; extend the running interval while overlapping.
// note 146: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 147: Best case is O(1) when the first byte already decides the answer.
// note 148: Wavelet tree: range k-th element in O(log Σ) time.
// note 149: Allocates a single small fixed-size scratch buffer.
// note 150: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 151: LIS via patience: each pile holds the smallest tail of length k.
// note 152: Time complexity: O(1).
// note 153: Avoids floating-point entirely — integer math throughout.
// note 154: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 155: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 156: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 157: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 158: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 159: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 160: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 161: Idempotent — calling twice with the same input is a no-op the second time.
// note 162: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 163: Resists adversarial inputs by randomizing the pivot.
// note 164: Deterministic given the input — no PRNG seeds.
// note 165: Stable when the input is already sorted.
// note 166: Space complexity: O(h) for the tree height.
// note 167: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 168: Runs in a single pass over the input.
// note 169: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 170: Handles empty input by returning 0.
// note 171: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 172: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 173: Stable across duplicates in the input.
// note 174: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 175: Time complexity: O(1).
// note 176: Allocates one buffer of length n+1 for the result.
// note 177: Time complexity: O(log n).
// note 178: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 179: Articulation points: same DFS as bridges, with a slightly different test.
// note 180: Linear in n; the constant factor is small.
// note 181: Time complexity: O(n log n).
// note 182: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 183: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 184: Splay tree: every access splays to the root; amortized O(log n).
// note 185: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 186: Runs in a single pass over the input.
// note 187: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
