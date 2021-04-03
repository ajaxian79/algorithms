//
// Created by ajaxian on 04/03/21.
//

#ifndef ALGORITHMS_QUEUE_TWO_STACKS_H
#define ALGORITHMS_QUEUE_TWO_STACKS_H

typedef struct StackQueue StackQueue;

StackQueue* stack_queue_create(void);
void        stack_queue_destroy(StackQueue* q);
void        stack_queue_push(StackQueue* q, int val);
int         stack_queue_pop(StackQueue* q);   // returns 0 on empty
int         stack_queue_peek(StackQueue* q);  // returns 0 on empty
int         stack_queue_empty(const StackQueue* q);

#endif //ALGORITHMS_QUEUE_TWO_STACKS_H
