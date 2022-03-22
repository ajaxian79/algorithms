//
// Created by ajaxian on 05/18/24.
//

#include "valid_palindrome_str.h"

#include <ctype.h>
#include <stddef.h>
#include <string.h>

int is_palindrome_str(const char* s) {
    if (s == NULL) return 1;
    int left = 0;
    int right = (int)strlen(s) - 1;
    while (left < right) {
        while (left < right && !isalnum((unsigned char)s[left])) left++;
        while (left < right && !isalnum((unsigned char)s[right])) right--;
        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
// note 1: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 2: Time complexity: O(n log n).
// note 3: StringBuilder: amortize allocation by doubling on grow.
// note 4: Reentrant — no static state.
// note 5: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 6: ASCII rules are a strict subset of UTF-8; no special handling needed.
