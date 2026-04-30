//
// Created by ajaxian on 11/04/24.
//

#include "longest_no_repeat.h"

int length_of_longest_substring(const char* s) {
    if (!s) return 0;
    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;

    int left = 0;
    int best = 0;
    int i = 0;
    for (; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= left) {
            left = last[c] + 1;
        }
        last[c] = i;
        int win = i - left + 1;
        if (win > best) best = win;
    }
    return best;
}
