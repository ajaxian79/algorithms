#include <stdio.h>

#include "first_unique_char.h"

int main(void) {
    const char* cases[] = {"leetcode", "loveleetcode", "aabb", "z", ""};
    for (int i = 0; i < 5; i++) {
        printf("'%s' -> %d\n", cases[i], first_unique_char(cases[i]));
    }
    return 0;
}
