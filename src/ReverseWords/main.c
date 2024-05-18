#include <stdio.h>
#include <stdlib.h>

#include "reverse_words.h"

int main(void) {
    const char* cases[] = {"the sky is blue", "  hello world  ", "a good   example"};
    for (int i = 0; i < 3; i++) {
        char* r = reverse_words(cases[i]);
        printf("'%s' -> '%s'\n", cases[i], r);
        free(r);
    }
    return 0;
}
