//
// Created by Blake Tullysmith on 12/6/24.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef __APPLE__
#include <malloc.h>
#endif

#include "rule_check.h"
#include "logger.h"

#define RULE_CHECK_LOG "rule_check"

//#define DIAGNOSTICS

char *get_contents(FILE *file, size_t *out_length);

void freeRuleBook(RuleBook** pRuleBook);

RuleBook *getRuleBook();

PageRule* parsePageRule(char** buffer, int* length);

void addToRuleBook(RuleBook* ruleBook, PageRule* pageRule);

void insertRuleIntoTable(PageRule **table, int hash, PageRule *pageRule);

PageRule *getCopyPageRule(const PageRule *pageRule);

int loadRuleBookFromInput(RuleBook *ruleBook, char *input, size_t inputLength);

PageUpdate *getNewPageUpdate();

int isDisallowed(RuleBook* ruleBook, int left, int right);

int getRuleBookHash(RuleBook* ruleBook, int value);

void freeUpdateSet(PageUpdateSet *updates);

PageUpdateSet *getPageUpdateSet(const char *input, int *start, size_t inputLength);

int processUpdateSet(PageUpdateSet *updates, RuleBook* ruleBook, int correctDisallowedOrder);

#define RULEBOOK_SIZE 100

typedef enum ParseMode {
  BEFORE = 0,
  AFTER = 1,
} ParseMode;

int parseInput(FILE* file) {
  size_t inputLength;
  char* input;
  int accum = 0;
  RuleBook *ruleBook = getRuleBook();

  blog_start(RULE_CHECK_LOG, "Parsing...");

  input = get_contents(file, &inputLength);

  if (input != NULL) {
    int startOfNextSection = loadRuleBookFromInput(ruleBook, input, inputLength);

    for(int index = startOfNextSection; index < inputLength;) {
#ifdef DIAGNOSTICS
      blog(RULE_CHECK_LOG, "%s\n", &input[index]);
#endif
      PageUpdateSet* updates = getPageUpdateSet(input, &index, inputLength);
      accum += processUpdateSet(updates, ruleBook, 1);
      freeUpdateSet(updates);
      free(updates);
    }

    free(input);
  }

  freeRuleBook(&ruleBook);

  return accum;
}

int processUpdateSet(PageUpdateSet *updates, RuleBook* ruleBook, int correctDisallowedOrder) {
  int result;
  int halfwayPageNumber;
  int is_disallowed = 1;
  int flipRequired = 0;
  int currentIndex = 0;
  int halfwayIndex = (int) (updates->count / 2);

  while(is_disallowed == 1) {
    PageUpdate *currentUpdate = updates->head;

    result = 0;
    is_disallowed = 0;
    halfwayPageNumber = 0;
    currentIndex = 0;

    while (currentUpdate != NULL && is_disallowed == 0) {
      PageUpdate *next = currentUpdate->next;

      if (currentIndex <= halfwayIndex && currentIndex + 1 > halfwayIndex) {
        halfwayPageNumber = currentUpdate->pageNumber;
      }

      PageUpdate *laterPageUpdate = currentUpdate->next;

      while (laterPageUpdate != NULL && is_disallowed == 0) {

        is_disallowed = isDisallowed(ruleBook,
                                     currentUpdate->pageNumber,
                                     laterPageUpdate->pageNumber);

        if (correctDisallowedOrder == 1 && is_disallowed) {
          flipRequired = 1;
          int temp = laterPageUpdate->pageNumber;

          laterPageUpdate->pageNumber = currentUpdate->pageNumber;
          currentUpdate->pageNumber = temp;

          printf("Flipping %d <> %d\n", laterPageUpdate->pageNumber, currentUpdate->pageNumber);

          break;
        } else {
          laterPageUpdate = laterPageUpdate->next;
        }
      }

      if (correctDisallowedOrder == 0 || is_disallowed == 0) {
        currentUpdate = next;
        currentIndex++;
      }
    }

    if (correctDisallowedOrder == 0) {
      break;
    }
  }

  PageUpdate *currentUpdate = updates->head;

  if (flipRequired > 0) {
    printf("Page Update Set:\t");

    currentIndex = 0;

    while (currentUpdate != NULL) {
      if (currentIndex <= halfwayIndex && currentIndex + 1 > halfwayIndex) {
        halfwayPageNumber = currentUpdate->pageNumber;
      }

      printf("%d ", currentUpdate->pageNumber);
      currentUpdate = currentUpdate->next;
      currentIndex++;
    }
  }

  result = halfwayPageNumber;

  if (is_disallowed) {
    printf("\tDisallowed");
    result = 0;
  } else if(correctDisallowedOrder == 1 && flipRequired == 0) {
    printf("\tIgnoring Allowed");
    result = 0;
  }

  printf("\t\tMid number %d", result);

  printf("\n");

  return result;
}

int isDisallowed(RuleBook* ruleBook, int left, int right) {
  int disallowed = 0;
  int hash = getRuleBookHash(ruleBook, left);

  PageRule* head = ruleBook->afterRulesTable[hash];

  while (head != NULL && disallowed == 0) {
    PageRule* next = head->next;
    if (left == head->after) {
      if (right == head->before) {
        disallowed = 1;
      }
    }
    head = next;
  }

  hash = getRuleBookHash(ruleBook, right);
  head = ruleBook->beforeRulesTable[hash];

  while (head != NULL && disallowed == 0) {
    PageRule* next = head->next;
    if (right == head->after) {
      if (left == head->before) {
        disallowed = 1;
      }
    }
    head = next;
  }

  return disallowed;
}

PageUpdateSet *getPageUpdateSet(const char *input, int *ptrStart, size_t inputLength) {
  PageUpdateSet* updates = malloc(sizeof(PageUpdateSet));
  updates->head = NULL;
  updates->count = 0;

  PageUpdate* lastUpdate = NULL;
  PageUpdate* currentUpdate = getNewPageUpdate();

  int start = *ptrStart;

  while(start < inputLength && input[start] != '\n' && input[start] != '\r') {
    switch (input[start]) {
      case ',':
        if (lastUpdate == NULL) {
          updates->head = currentUpdate;
          lastUpdate = updates->head;
        } else {
          lastUpdate->next = currentUpdate;
          if (currentUpdate != NULL)
            currentUpdate->prev = lastUpdate;
          lastUpdate = currentUpdate;
        }
        updates->count++;

        currentUpdate = getNewPageUpdate();
        break;
      default:
        if (input[start] >= '0' && input[start] <= '9') {
          if (currentUpdate != NULL)
            currentUpdate->pageNumber = currentUpdate->pageNumber*10 + (input[start] - '0');
        }
    }

    start++;
  }

  if (input[start] == '\n' || input[start] == '\r' || start == inputLength) {
    if (lastUpdate == NULL) {
      updates->head = currentUpdate;
      lastUpdate = updates->head;
    } else {
      lastUpdate->next = currentUpdate;
      if (currentUpdate != NULL)
        currentUpdate->prev = lastUpdate;
      lastUpdate = currentUpdate;
    }
    updates->count++;
  }

  start++;

  *ptrStart = start;

  return updates;
}

void freeUpdateSet(PageUpdateSet *updates) {
  PageUpdate* currentUpdate = updates->head;

  while(currentUpdate != NULL) {
    PageUpdate* next = currentUpdate->next;
    free(currentUpdate);
    currentUpdate = next;
  }
}

PageUpdate *getNewPageUpdate() {
  PageUpdate* currentUpdate = malloc(sizeof(PageUpdate));
  currentUpdate->next = NULL;
  currentUpdate->prev = NULL;
  currentUpdate->pageNumber = 0;
  return currentUpdate;
}

/**
 *
 * @param ruleBook
 * @param input
 * @param inputLength
 * @return Offset to jump past the RuleBook
 */
int loadRuleBookFromInput(RuleBook *ruleBook, char *input, size_t inputLength) {
  char *current = input;
  int length = (int) inputLength;
  PageRule* rule = NULL;

  rule = parsePageRule(&current, &length);

  while (rule != NULL) {
    printf("%d|%d\n", rule->before, rule->after);

    addToRuleBook(ruleBook, rule);
    rule = parsePageRule(&current, &length);
  }

  return (int)inputLength - length;
}

RuleBook *getRuleBook() {
  RuleBook* ruleBook = malloc(sizeof(RuleBook));

  ruleBook->tableSize = RULEBOOK_SIZE;
  ruleBook->beforeRulesTable = malloc(sizeof(PageRule*)*ruleBook->tableSize);
  ruleBook->afterRulesTable = malloc(sizeof(PageRule*)*ruleBook->tableSize);

  for(int index = 0; index < ruleBook->tableSize; index++) {
    ruleBook->beforeRulesTable[index] = NULL;
    ruleBook->afterRulesTable[index] = NULL;
  }
  return ruleBook;
}

int getRuleBookHash(RuleBook* ruleBook, int value) {
  return value % ruleBook->tableSize;
}

void addToRuleBook(RuleBook* ruleBook, PageRule* pageRule) {
  insertRuleIntoTable(ruleBook->beforeRulesTable,
                      getRuleBookHash(ruleBook, pageRule->before),
                      pageRule);

  insertRuleIntoTable(ruleBook->afterRulesTable,
                      getRuleBookHash(ruleBook, pageRule->after),
                      getCopyPageRule(pageRule));
}

PageRule *getCopyPageRule(const PageRule *pageRule) {// Make a deep copy for the second table
  PageRule* duplicatePageRule = malloc(sizeof(PageRule));
  duplicatePageRule->before = pageRule->before;
  duplicatePageRule->after = pageRule->after;
  duplicatePageRule->next = NULL;

  return duplicatePageRule;
}

void insertRuleIntoTable(PageRule **table, int hash, PageRule *pageRule) {
  if (table[hash] == NULL) {
    table[hash] = pageRule;
  } else {
    PageRule* current = table[hash];

    while(current->next != NULL) {
      current = current->next;
    }

    current->next = pageRule;
  }
}

void freeRuleBook(RuleBook** pRuleBook) {
  // Release RuleBook
  RuleBook* ruleBook = *pRuleBook;
  for(int index = 0; index < ruleBook->tableSize; index++) {
    PageRule* current = ruleBook->beforeRulesTable[index];
    PageRule* next;

    while(current != NULL) {
      next = current->next;
      free(current);
      current = next;
    }

    current = ruleBook->afterRulesTable[index];

    while(current != NULL) {
      next = current->next;
      free(current);
      current = next;
    }
  }

  free(ruleBook->beforeRulesTable);
  free(ruleBook->afterRulesTable);

  free(ruleBook);
  *pRuleBook = NULL;
}

PageRule* parsePageRule(char** buffer, int* length) {
  ParseMode parseMode = BEFORE;
  PageRule* pageRule = malloc(sizeof(PageRule));
  int current = 0;

  pageRule->before = 0;
  pageRule->after = 0;
  pageRule->next = NULL;

  char* rule = *buffer;

  while(current != *length) {
#ifdef DIAGNOSTICS
    blog(RULE_CHECK_LOG, "%c\n", rule[current]);
#endif

    if (rule[current] == '|') {
      parseMode = AFTER;
    } else if (rule[current] == '\n' || rule[current] == '\r' || rule[current] == '\0') {
      if (current == 0) {
        // No record
        free(pageRule);
        pageRule = NULL;
      }
      current++;
      break;
    } else if (rule[current] >= '0' && rule[current] <= '9')  {
      if (parseMode == BEFORE) {
        pageRule->before = (pageRule->before*10)+(rule[current]-'0');
      } else { // if (parseMode == AFTER)
        pageRule->after = (pageRule->after*10)+(rule[current]-'0');
      }
    } else {
      // Corrupted record
      free(pageRule);
      pageRule = NULL;
      break;
    }
    current++;
  }

#ifdef DIAGNOSTICS
  blog(RULE_CHECK_LOG, "%d|%d", pageRule->before, pageRule->after);
#endif

  *buffer = &(*buffer)[current];
  *length -= current;

  return pageRule;
}

// Function to load file contents into a dynamically allocated buffer
char *get_contents(FILE *file, size_t *out_length) {
  if (!file) {
    blog(RULE_CHECK_LOG, "Invalid file pointer.\n");
    return NULL;
  }

  // Seek to the end of the file to determine its size
  if (fseek(file, 0, SEEK_END) != 0) {
    blog(RULE_CHECK_LOG, "Failed to seek end of file\n");
    return NULL;
  }

  long length = ftell(file);
  if (length < 0) {
    blog(RULE_CHECK_LOG, "Failed to get file length\n");
    return NULL;
  }

  // Return to the start of the file
  rewind(file);

  // Allocate memory for the file contents plus a null terminator
  char *buffer = (char *)malloc(length + 1);
  if (!buffer) {
    blog(RULE_CHECK_LOG, "Failed to allocate memory\n");
    return NULL;
  }

  // Read the file into the buffer
  size_t read_size = fread(buffer, 1, length, file);
  if (read_size != (size_t)length) {
    blog(RULE_CHECK_LOG, "Failed to read entire file\n");
    free(buffer);
    return NULL;
  }

  // Null-terminate the buffer
  buffer[length] = '\0';

  // Set the output length
  if (out_length) {
    *out_length = length;
  }

  blog(RULE_CHECK_LOG, "Loaded File\n");

  return buffer;
}