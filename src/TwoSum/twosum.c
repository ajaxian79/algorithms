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
