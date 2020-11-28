#include <stdio.h>

#include "needle.h"

int main(void) {
    printf("%d\n", str_str("sadbutsad", "sad"));
    printf("%d\n", str_str("leetcode", "leeto"));
    printf("%d\n", str_str("hello", ""));
    printf("%d\n", str_str("aaaaab", "aab"));
    return 0;
}
