#include <stdio.h>

#include "valid_parens.h"

int main(void) {
    const char* cases[] = {"()", "()[]{}", "(]", "([)]", "{[]}", "(((", ""};
    int n = sizeof(cases) / sizeof(cases[0]);

    for (int i = 0; i < n; i++) {
        printf("'%s' -> %s\n", cases[i], is_valid_parens(cases[i]) ? "yes" : "no");
    }
    return 0;
}
