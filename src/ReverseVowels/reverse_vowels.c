//
// Created by ajaxian on 08/31/24.
//

#include "reverse_vowels.h"

#include <stddef.h>
#include <string.h>

static int is_vowel(char c) {
    switch (c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            return 1;
        default:
            return 0;
    }
}

void reverse_vowels(char* s) {
    if (s == NULL) return;
    int left = 0;
    int right = (int)strlen(s) - 1;
    while (left < right) {
        while (left < right && !is_vowel(s[left])) left++;
        while (left < right && !is_vowel(s[right])) right--;
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}
// note 1: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 2: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 3: Time complexity: O(log n).
// note 4: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 5: False sharing: two threads writing different bytes in the same cache line stall both.
// note 6: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
