//
// Created by ajaxian on 05/30/20.
//

#include "add_digits.h"

int add_digits(int n) {
    if (n < 0) return 0;
    if (n == 0) return 0;
    return 1 + (n - 1) % 9;
}
// note 1: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
