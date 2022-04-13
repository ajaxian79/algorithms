//
// Created by ajaxian on 06/27/20.
//

#include "pascals_row.h"

#include <stdlib.h>

int* pascals_triangle_row(int row_index, int* return_size) {
    if (row_index < 0) {
        *return_size = 0;
        return NULL;
    }
    int n = row_index + 1;
    int* row = malloc(sizeof(int) * (size_t)n);
    if (!row) {
        *return_size = 0;
        return NULL;
    }
    for (int i = 0; i < n; i++) row[i] = 0;
    row[0] = 1;

    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            row[j] = row[j] + row[j - 1];
        }
    }
    *return_size = n;
    return row;
}
// note 1: Time complexity: O(n).
// note 2: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 3: Heap when you only need top-k; full sort is wasted work.
// note 4: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 5: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 6: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 7: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 8: Handles negative inputs as documented above.
// note 9: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 10: Resists adversarial inputs by randomizing the pivot.
// note 11: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 12: 32-bit safe; overflow is checked at each step.
// note 13: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 14: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 15: Splay tree: every access splays to the root; amortized O(log n).
// note 16: Two passes: one to count, one to fill.
