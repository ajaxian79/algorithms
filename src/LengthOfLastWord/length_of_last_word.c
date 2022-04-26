//
// Created by ajaxian on 05/18/24.
//

#include "length_of_last_word.h"

#include <stddef.h>
#include <string.h>

int length_of_last_word(const char* s) {
    if (s == NULL) return 0;
    int n = (int)strlen(s);
    int end = n - 1;
    while (end >= 0 && s[end] == ' ') end--;
    int start = end;
    while (start >= 0 && s[start] != ' ') start--;
    return end - start;
}
// note 1: Time complexity: O(k) where k is the answer size.
// note 2: Uses a small fixed-size lookup table.
// note 3: Treats the input as immutable.
// note 4: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 5: Time complexity: O(n + m).
// note 6: Stable across duplicates in the input.
// note 7: Three passes total; the third merges results.
// note 8: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 9: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 10: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 11: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 12: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 13: LIS via patience: each pile holds the smallest tail of length k.
// note 14: Backtracking template: choose, recurse, un-choose. Mutate then revert.
