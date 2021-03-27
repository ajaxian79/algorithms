#include <stdio.h>

#include "min_stack.h"

int main(void) {
    MinStack* s = min_stack_create();
    min_stack_push(s, -2);
    min_stack_push(s, 0);
    min_stack_push(s, -3);
    printf("min=%d\n", min_stack_min(s));
    min_stack_pop(s);
    printf("top=%d min=%d\n", min_stack_top(s), min_stack_min(s));
    min_stack_destroy(s);
    return 0;
}
