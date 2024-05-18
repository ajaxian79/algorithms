#include <stdio.h>

#include "valid_palindrome_str.h"

int main(void) {
    const char* cases[] = {"A man, a plan, a canal: Panama", "race a car", " ", "0P", "Was it a car or a cat I saw?"};
    for (int i = 0; i < 5; i++) {
        printf("'%s' -> %d\n", cases[i], is_palindrome_str(cases[i]));
    }
    return 0;
}
