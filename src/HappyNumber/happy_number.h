//
// Created by ajaxian on 08/31/24.
//

#ifndef ALGORITHMS_HAPPY_NUMBER_H
#define ALGORITHMS_HAPPY_NUMBER_H

// Returns 1 if n is "happy": repeatedly summing the squares of its digits
// reaches 1; 0 otherwise. Uses Floyd's tortoise-and-hare to detect cycles.
int is_happy(int n);

#endif //ALGORITHMS_HAPPY_NUMBER_H
