//
// Created by Blake Tullysmith on 12/2/24.
//

#include <stdlib.h>

#ifndef __APPLE__
#include <malloc.h>
#endif

#include "int_hash_map.h"
#include "report.h"

int check_if_duplicate(HashMapNode **map, const Level *current);

int check_if_follows_established_direction(const Level *current, const Level *prev,  int *direction);

int check_distance_from_previous(const Level *current, const Level *prev);

Report* read_report(FILE* file) {
  Report* report = malloc(sizeof(Report));

  report->levels = NULL;
  report->next = NULL;
  report->count = 0;

  Level* level = read_level(file);
  Level* current = report->levels;

  while (level != NULL && level->end == 0) {
    if (current == NULL) {
      current = report->levels = level;
    } else {
      current->next = level;
      level->prev = current;
      current = level;
    }

    level = read_level(file);
  }

  if (level != NULL) {
    report->count++;
    if (current != NULL) {
      current->next = level;
      level->prev = current;
    }
  }

  if (report->levels == NULL) {
    free(report);
    report = NULL;
  }

  return report;
}

void free_report(Report* report) {
  Level* current = report->levels;

  while(current != NULL) {
    Level* next = current->next;
    free(current);
    current = next;
  }
}


int is_safe(Report* report) {
  int is_safe = 1;
  Level* current = report->levels;

  HashMapNode* map[MAP_SIZE];
  map_init(map);

  int direction = 0;
  int already_skipped = 0;

  while(current != NULL) {
    printf("%d ", current->value);

    is_safe = check_if_duplicate(map, current);

    if (is_safe)
      is_safe = check_if_follows_established_direction(current, current->prev, &direction);

    if (is_safe)
      is_safe = check_distance_from_previous(current, current->prev);

    if (is_safe == 0 && already_skipped == 0) {
      int would_be_safe;

      would_be_safe = check_if_duplicate(map, current->next);

      if (would_be_safe)
        would_be_safe = check_if_follows_established_direction(current->next, current->prev, &direction);

      if (would_be_safe)
        would_be_safe = check_distance_from_previous(current->next, current->prev);

      if (would_be_safe == 1) {
        is_safe = 1;
        already_skipped = 1;
      }
    }

    map_insert(map, current->value);
    current = current->next;
  }

  map_destroy(map);

  if (is_safe == 1)
    printf("\t\tSafe");
  else
    printf("\t\tUnsafe");

  printf("\n");

  return is_safe > 0;
}

int check_distance_from_previous(const Level *current, const Level *prev) {
  int is_safe = 1;
  if (prev != NULL && current != NULL) {
    int diff = abs(current->value - prev->value);

    if (diff < 1 || diff > 3) {
      is_safe = 0;
    }
  }
  return is_safe;
}

int check_if_follows_established_direction(const Level *current, const Level *prev, int *direction) {
  int is_safe = 1;
  if (prev != NULL && current != NULL) {
    if (prev->value < current->value) {
      if (*direction == 0) {
        *direction = 1;
      } else if (*direction != 1) {
        is_safe = 0;
      }
    } else if (prev->value > current->value) {
      if (*direction == 0) {
        *direction = -1;
      } else if (*direction != -1) {
        is_safe = 0;
      }
    }
  }
  return is_safe;
}

int check_if_duplicate(HashMapNode **map, const Level *current) {
  int is_safe = 1;
  if (current != NULL) {
    int seen_before = map_has_val(map, current->value);

    if (seen_before) {
      is_safe = 0;
    }
  }

  return is_safe;
}
