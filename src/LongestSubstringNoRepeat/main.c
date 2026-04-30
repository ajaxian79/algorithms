#include <stdio.h>

#include "longest_no_repeat.h"

int main(void) {
    const char* v[] = {"abcabcbb", "bbbbb", "pwwkew", "", "dvdf", "tmmzuxt"};
    for (int i = 0; i < 6; i++) {
        printf("\"%s\" -> %d\n", v[i], length_of_longest_substring(v[i]));
    }
    return 0;
}
