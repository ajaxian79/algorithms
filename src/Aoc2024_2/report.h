//
// Created by Blake Tullysmith on 12/2/24.
//

#ifndef ALGORITHMS_REPORT_H
#define ALGORITHMS_REPORT_H

#include <stdio.h>

typedef struct Report {
  int levels[10];
  int count;
  struct Report* next;
} Report;

Report* read_report(FILE* file);
void free_report(Report* report);

int is_safe(Report* report);

#endif //ALGORITHMS_REPORT_H
