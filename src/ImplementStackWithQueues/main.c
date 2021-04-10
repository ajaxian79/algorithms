#include <stdio.h>

#include "stack_one_queue.h"

int main(void) {
    QueueStack* s = queue_stack_create();
    queue_stack_push(s, 1);
    queue_stack_push(s, 2);
    printf("top=%d\n", queue_stack_top(s));
    printf("pop=%d\n", queue_stack_pop(s));
    printf("empty=%d\n", queue_stack_empty(s));
    queue_stack_destroy(s);
    return 0;
}
