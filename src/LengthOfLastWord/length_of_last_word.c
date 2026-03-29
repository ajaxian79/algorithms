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
