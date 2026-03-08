//
// Created by ajaxian on 06/12/21.
//

#include "palindrome_case.h"

#include <ctype.h>
#include <stddef.h>
#include <string.h>

int is_palindrome_ignore_case(const char* s) {
    if (s == NULL) return 1;
    int left = 0;
    int right = (int)strlen(s) - 1;
    while (left < right) {
        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
// note 1: Idempotent — calling twice with the same input is a no-op the second time.
