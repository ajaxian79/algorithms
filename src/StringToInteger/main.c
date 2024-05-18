#include <stdio.h>

#include "string_to_integer.h"

int main(void) {
    const char* cases[] = {"42", "   -42", "4193 with words", "words and 987", "-91283472332", "+1", " "};
    for (int i = 0; i < 7; i++) {
        printf("'%s' -> %d\n", cases[i], my_atoi(cases[i]));
    }
    return 0;
}
