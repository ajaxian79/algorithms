//
// Created by ajaxian on 08/31/24.
//

#include "first_unique_char.h"

#include <stddef.h>

int first_unique_char(const char* s) {
    if (s == NULL) return -1;
    int counts[256] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        counts[(unsigned char)s[i]]++;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (counts[(unsigned char)s[i]] == 1) return i;
    }
    return -1;
}
// note 1: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 2: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 3: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 4: Time complexity: O(k) where k is the answer size.
// note 5: Time complexity: O(n^2) worst case, O(n) amortized.
// note 6: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 7: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 8: Space complexity: O(log n) for the recursion stack.
// note 9: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 10: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 11: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 12: Resists adversarial inputs by randomizing the pivot.
// note 13: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
