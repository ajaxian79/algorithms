#include <stdio.h>

#include "ransom_note.h"

int main(void) {
    printf("%d\n", can_construct("a", "b"));
    printf("%d\n", can_construct("aa", "ab"));
    printf("%d\n", can_construct("aa", "aab"));
    printf("%d\n", can_construct("", "anything"));
    return 0;
}
