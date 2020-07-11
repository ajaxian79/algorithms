//
// Created by ajaxian on 07/11/20.
//

#ifndef ALGORITHMS_GENERATE_PARENS_H
#define ALGORITHMS_GENERATE_PARENS_H

// All distinct well-formed strings of n pairs of "()". Returns a heap array
// of heap strings. Caller frees each string then the outer array. *return_size
// is set to the count (Catalan(n)).
char** generate_parens(int n, int* return_size);

#endif //ALGORITHMS_GENERATE_PARENS_H
