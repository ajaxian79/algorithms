//
// Created by Blake Tullysmith on 12/3/24.
//

#define DISABLE_ALGORITHMS_SCANNER

#ifndef DISABLE_ALGORITHMS_SCANNER
#ifndef ALGORITHMS_SCANNER_H
#define ALGORITHMS_SCANNER_H

#include <stdio.h>
#include "program.h"

void tokenize(FILE* file, Program* program);

#endif //ALGORITHMS_SCANNER_H

#endif