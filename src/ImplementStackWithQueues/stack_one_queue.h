//
// Created by ajaxian on 04/10/21.
//

#ifndef ALGORITHMS_STACK_ONE_QUEUE_H
#define ALGORITHMS_STACK_ONE_QUEUE_H

typedef struct QueueStack QueueStack;

QueueStack* queue_stack_create(void);
void        queue_stack_destroy(QueueStack* s);
void        queue_stack_push(QueueStack* s, int val);
int         queue_stack_pop(QueueStack* s);   // returns 0 on empty
int         queue_stack_top(const QueueStack* s);
int         queue_stack_empty(const QueueStack* s);

#endif //ALGORITHMS_STACK_ONE_QUEUE_H
