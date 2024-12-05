//
// Created by Blake Tullysmith on 12/2/24.
//

#include <stdlib.h>

#ifndef __APPLE__
#include <malloc.h>
#endif

#include "int_hash_map.h"
#include "report.h"


int check_distance_from_previous(const int *current, const int *prev);
int check_if_follows_established_direction(const int *current, const int *prev, int *direction);
int check_if_duplicate(HashMapNode **map, const int *current);

void check_level(const Report *report, HashMapNode **map, int *direction, int skip, int *is_safe, int *index, int print);

Report* read_report(FILE* file) {
  Report* report = malloc(sizeof(Report));

  report->next = NULL;
  report->count = 0;
  report->levels[report->count] = 0;
  int8_t done = 0;

  while(!feof(file) && !done) {
    int c = fgetc(file);

    switch (c) {
      case ' ':
        report->count++;
        report->levels[report->count] = 0;
        break;

      case '\n':
      case '\r':
        c = fgetc(file);

        if (c != '\n' && c != '\r')
          ungetc(c, file);
        // Intentional Fall through to next case
      case EOF:
        report->count++;
        report->levels[report->count] = 0;
        done = 1;
        break;

      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        report->levels[report->count] *= 10;
        report->levels[report->count] += c - '0';
        break;

      default:
        break;
    }

  }

  if (report->count == 0) {
    free(report);
    report = NULL;
  }

  return report;
}

void free_report(Report* report) {
  if (report->next != NULL)
    free_report(report->next);
  free(report);
}

int is_safe(Report* report) {
  int is_safe = 1;

  HashMapNode* map[MAP_SIZE];
  int direction = 0;
  map_init(map);

  for(int index = 0; index < report->count; index++) {
    check_level(report, map, &direction, 0, &is_safe, &index, 1);
  }

  map_destroy(map);

  if (is_safe == 0) {
    for (int skip_index = 0; skip_index < report->count; skip_index++) {

      is_safe = 1;
      direction = 0;
      map_init(map);

      int diagnostics = 0;

      if(diagnostics)
        printf("\n");

      for (int index = 0; index < report->count; index++) {
        check_level(report, map, &direction, skip_index == index, &is_safe, &index, diagnostics);
      }

      if (diagnostics)
        printf("\n");

      map_destroy(map);

      if (is_safe == 1)
        break;

    }
  }

  if (is_safe == 1)
    printf("\t\tSafe");
  else
    printf("\t\tUnsafe");

  printf("\n");

  return is_safe > 0;
}

void check_level(const Report *report, HashMapNode **map, int *direction, int skip, int *is_safe, int *index, int print) {
  const int* current_value= NULL;
  const int* previous_value = NULL;

  if ((*index) > 0)
    previous_value = &report->levels[(*index) - 1];

  if (skip == 1)
    (*index)++;

  if ((*index) >= report->count) {
    return;
  }

  current_value = &report->levels[(*index)];

  if (print)
    printf("%d ", *current_value);

  if ((*is_safe))
    (*is_safe) = check_if_duplicate(map, current_value);

  if ((*is_safe))
    (*is_safe) = check_distance_from_previous(current_value, previous_value);

  if ((*is_safe))
    (*is_safe) = check_if_follows_established_direction(current_value, previous_value, direction);

  map_insert(map, *current_value);
}

int check_distance_from_previous(const int *current, const int *prev) {
  int is_safe = 1;
  if (prev != NULL && current != NULL) {
    int diff = abs(*current - *prev);

    if (diff < 1 || diff > 3) {
      is_safe = 0;
    }
  }
  return is_safe;
}

int check_if_follows_established_direction(const int *current, const int *prev, int *direction) {
  int is_safe = 1;
  if (prev != NULL && current != NULL) {
    if (*prev < *current) {
      if (*direction == 0) {
        *direction = 1;
      } else if (*direction != 1) {
        is_safe = 0;
      }
    } else if (*prev > *current) {
      if (*direction == 0) {
        *direction = -1;
      } else if (*direction != -1) {
        is_safe = 0;
      }
    }
  }
  return is_safe;
}

int check_if_duplicate(HashMapNode **map, const int *current) {
  int is_safe = 1;
  if (current != NULL) {
    int seen_before = map_has_val(map, *current);

    if (seen_before) {
      is_safe = 0;
    }
  }

  return is_safe;
}
