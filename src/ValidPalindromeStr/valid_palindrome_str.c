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
