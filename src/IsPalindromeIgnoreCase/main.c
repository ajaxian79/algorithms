#include <stdio.h>

#include "palindrome_case.h"

int main(void) {
    const char* cases[] = {"Racecar", "level", "Hello", "Aa", "aA", "Madam", "Was it a Cat I saw"};
    for (int i = 0; i < 7; i++) {
        printf("'%s' -> %d\n", cases[i], is_palindrome_ignore_case(cases[i]));
    }
    return 0;
}
