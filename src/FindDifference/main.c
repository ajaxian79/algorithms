#include <stdio.h>

#include "find_difference.h"

int main(void) {
    printf("%c\n", find_difference("abcd", "abcde"));
    printf("%c\n", find_difference("", "y"));
    printf("%c\n", find_difference("a", "aa"));
    return 0;
}
