#include <stdio.h>

#include "queue_two_stacks.h"

int main(void) {
    StackQueue* q = stack_queue_create();
    stack_queue_push(q, 1);
    stack_queue_push(q, 2);
    printf("peek=%d\n", stack_queue_peek(q));
    printf("pop=%d\n", stack_queue_pop(q));
    printf("empty=%d\n", stack_queue_empty(q));
    stack_queue_destroy(q);
    return 0;
}
