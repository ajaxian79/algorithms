#include <stdio.h>

#include "valid_anagram.h"

int main(void) {
    printf("%d\n", is_anagram("anagram", "nagaram"));
    printf("%d\n", is_anagram("rat", "car"));
    printf("%d\n", is_anagram("", ""));
    return 0;
}
