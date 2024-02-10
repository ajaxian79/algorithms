//
// Created by ajaxian on 02/10/24.
//

#include "plus_one.h"

#include <stdlib.h>
#include <string.h>

int* plus_one(int* digits, int digits_size, int* return_size) {
    // Walk from the least significant digit, propagating the carry.
    // If every digit is 9 we end up with a longer number (one extra leading 1).
    int* result = malloc(sizeof(int) * (digits_size + 1));
    if (!result) {
        *return_size = 0;
        return NULL;
    }
    memcpy(result + 1, digits, sizeof(int) * digits_size);
    result[0] = 0;

    int carry = 1;
    for (int i = digits_size; i > 0 && carry; i--) {
        int sum = result[i] + carry;
        result[i] = sum % 10;
        carry = sum / 10;
    }
    result[0] += carry;

    if (result[0] == 0) {
        // Drop the leading zero by shifting back.
        memmove(result, result + 1, sizeof(int) * digits_size);
        *return_size = digits_size;
    } else {
        *return_size = digits_size + 1;
    }
    return result;
}
