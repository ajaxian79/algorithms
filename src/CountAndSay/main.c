#include <stdio.h>
#include <stdlib.h>

#include "count_and_say.h"

int main(void) {
    for (int i = 1; i <= 8; i++) {
        char* s = count_and_say(i);
        printf("%d: %s\n", i, s);
        free(s);
    }
    return 0;
}
