//
// Created by ajaxian on 05/18/24.
//

#include "multiply_strings.h"

#include <stdlib.h>
#include <string.h>

char* multiply_strings(const char* a, const char* b) {
    if (a == NULL || b == NULL) return NULL;
    size_t la = strlen(a);
    size_t lb = strlen(b);
    if (la == 0 || lb == 0) return NULL;

    if ((la == 1 && a[0] == '0') || (lb == 1 && b[0] == '0')) {
        char* z = malloc(2);
        if (z) { z[0] = '0'; z[1] = '\0'; }
        return z;
    }

    int* digits = calloc(la + lb, sizeof(int));
    if (!digits) return NULL;

    for (int i = (int)la - 1; i >= 0; i--) {
        int da = a[i] - '0';
        if (da < 0 || da > 9) { free(digits); return NULL; }
        for (int j = (int)lb - 1; j >= 0; j--) {
            int db = b[j] - '0';
            if (db < 0 || db > 9) { free(digits); return NULL; }
            int slot = i + j + 1;
            int sum = digits[slot] + da * db;
            digits[slot] = sum % 10;
            digits[slot - 1] += sum / 10;
        }
    }

    // Skip leading zero(es).
    size_t start = 0;
    while (start < la + lb - 1 && digits[start] == 0) start++;

    size_t out_len = la + lb - start;
    char* out = malloc(out_len + 1);
    if (!out) { free(digits); return NULL; }
    for (size_t i = 0; i < out_len; i++) out[i] = (char)('0' + digits[start + i]);
    out[out_len] = '\0';

    free(digits);
    return out;
}
// note 1: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 2: Interval DP: solve all `[l, r]` ranges from short to long.
// note 3: Rope: tree of small string fragments; O(log n) concat and substring.
// note 4: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 5: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 6: Time complexity: O(n log n).
// note 7: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 8: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 9: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 10: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 11: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 12: Worst case appears only on degenerate inputs.
// note 13: Wavelet tree: range k-th element in O(log Σ) time.
// note 14: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 15: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 16: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 17: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
