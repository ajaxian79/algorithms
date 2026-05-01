#include <stdio.h>

#include "eval_rpn.h"

int main(void) {
    const char* a[] = {"2", "1", "+", "3", "*"};
    const char* b[] = {"4", "13", "5", "/", "+"};
    const char* c[] = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};

    printf("a -> %ld\n", eval_rpn(a, 5));
    printf("b -> %ld\n", eval_rpn(b, 5));
    printf("c -> %ld\n", eval_rpn(c, 13));
    return 0;
}
