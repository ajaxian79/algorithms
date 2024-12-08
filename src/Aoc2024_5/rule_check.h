//
// Created by Blake Tullysmith on 12/6/24.
//

#ifndef ALGORITHMS_RULE_CHECK_H
#define ALGORITHMS_RULE_CHECK_H

typedef struct PageRule {
  int before;
  int after;
  struct PageRule* next;
} PageRule;

typedef struct RuleBook {
  PageRule** beforeRulesTable;
  PageRule** afterRulesTable;
  int tableSize;
} RuleBook;

int parseInput(FILE* file);

typedef struct PageUpdate {
  int pageNumber;
  struct PageUpdate* prev;
  struct PageUpdate* next;
} PageUpdate;

typedef struct PageUpdateSet {
  PageUpdate* head;
  int count;
} PageUpdateSet;

#endif //ALGORITHMS_RULE_CHECK_H
