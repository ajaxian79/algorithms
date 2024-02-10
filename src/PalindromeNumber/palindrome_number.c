//
// Created by ajaxian on 02/10/24.
//

#include "palindrome_number.h"

int is_palindrome_number(int x) {
    if (x < 0) {
        return 0;
    }
    if (x != 0 && x % 10 == 0) {
        return 0;
    }

    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    // For even-digit counts the halves match exactly. For odd-digit counts
    // the middle digit lives in `reversed`, so /10 it off.
    return x == reversed || x == reversed / 10;
}
