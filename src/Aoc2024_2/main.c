//
// Created by Blake Tullysmith on 12/2/24.
//

#include <stdio.h>
#include <stdlib.h>

#ifndef __APPLE__
#include <malloc.h>
#endif

#include "report.h"

int main(int argc, char* argv[]) {
  if (argc < 2) {
    fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
    return 1;
  }

  FILE *file = fopen(argv[1], "r");
  if (file == NULL) {
    fprintf(stderr, "Failed to open file: %s\n", argv[0]);
    return 1;
  }

  Report* current = read_report(file);
  Report* reports = current;

  while(current != NULL) {
    current->next = read_report(file);
    current = current->next;
  }

  int safe_reports = 0;
  int all_reports = 0;
  current = reports;
  while(current != NULL) {
    if (is_safe(current)) {
      safe_reports++;
    }

    all_reports++;

    free_report(current);
    current = current->next;
  }
  printf("All Reports: %d\n", all_reports);
  printf("Safe Reports: %d\n", safe_reports);
}