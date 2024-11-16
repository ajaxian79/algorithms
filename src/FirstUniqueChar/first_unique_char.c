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
