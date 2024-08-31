#include <stdio.h>

#include "is_subsequence.h"

int main(void) {
    printf("%d\n", is_subsequence("abc", "ahbgdc"));
    printf("%d\n", is_subsequence("axc", "ahbgdc"));
    printf("%d\n", is_subsequence("", "anything"));
    return 0;
}
