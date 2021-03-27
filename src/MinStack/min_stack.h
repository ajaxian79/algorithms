//
// Created by ajaxian on 03/27/21.
//

#ifndef ALGORITHMS_MIN_STACK_H
#define ALGORITHMS_MIN_STACK_H

typedef struct MinStack MinStack;

MinStack* min_stack_create(void);
void      min_stack_destroy(MinStack* s);
void      min_stack_push(MinStack* s, int val);
void      min_stack_pop(MinStack* s);
int       min_stack_top(const MinStack* s);
int       min_stack_min(const MinStack* s);
int       min_stack_size(const MinStack* s);

#endif //ALGORITHMS_MIN_STACK_H
