#include <stdio.h>

#include "rotate_string.h"

int main(void) {
    printf("%d\n", is_rotation("abcde", "cdeab"));
    printf("%d\n", is_rotation("abcde", "abced"));
    printf("%d\n", is_rotation("", ""));
    return 0;
}
