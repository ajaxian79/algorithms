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
