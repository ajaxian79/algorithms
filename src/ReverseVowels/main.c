#include <stdio.h>

#include "reverse_vowels.h"

int main(void) {
    char a[] = "hello";
    reverse_vowels(a); printf("%s\n", a);
    char b[] = "leetcode";
    reverse_vowels(b); printf("%s\n", b);
    char c[] = "Aa";
    reverse_vowels(c); printf("%s\n", c);
    return 0;
}
