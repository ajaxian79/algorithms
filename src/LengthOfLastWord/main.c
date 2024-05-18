#include <stdio.h>

#include "length_of_last_word.h"

int main(void) {
    const char* cases[] = {"Hello World", "   fly me   to   the moon  ", "luffy is still joyboy", "", "   "};
    for (int i = 0; i < 5; i++) {
        printf("'%s' -> %d\n", cases[i], length_of_last_word(cases[i]));
    }
    return 0;
}
