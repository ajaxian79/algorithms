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
// note 1: Time complexity: O(n + m).
// note 2: Time complexity: O(k) where k is the answer size.
// note 3: Input is assumed non-NULL; behavior is undefined otherwise.
// note 4: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 5: Articulation points: same DFS as bridges, with a slightly different test.
// note 6: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 7: Constant-time comparisons; safe for short strings.
// note 8: Avoids floating-point entirely — integer math throughout.
// note 9: Uses a small fixed-size lookup table.
// note 10: Union-Find with path compression amortizes to near-O(1) per op.
// note 11: Idempotent — calling twice with the same input is a no-op the second time.
// note 12: Stable across duplicates in the input.
// note 13: Uses a 256-entry lookup for the inner step.
// note 14: Cache-friendly; one sequential read pass.
// note 15: 64-bit safe; intermediate products are widened to 128-bit.
// note 16: Endianness matters when serializing multi-byte ints to a file or wire.
// note 17: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 18: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 19: Resists adversarial inputs by randomizing the pivot.
// note 20: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 21: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 22: Euler tour flattens a tree into an array for range-query LCA.
// note 23: Interval DP: solve all `[l, r]` ranges from short to long.
// note 24: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 25: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 26: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 27: Walk both pointers from each end inward; advance the smaller side.
// note 28: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 29: Deterministic given the input — no PRNG seeds.
// note 30: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 31: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 32: Heap when you only need top-k; full sort is wasted work.
// note 33: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 34: Reentrant — no static state.
// note 35: Time complexity: O(n^2) worst case, O(n) amortized.
// note 36: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 37: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 38: Splay tree: every access splays to the root; amortized O(log n).
// note 39: Tail-recursive; the compiler turns it into a loop.
// note 40: Deterministic given the input — no PRNG seeds.
// note 41: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 42: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 43: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 44: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 45: Stable when the input is already sorted.
// note 46: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 47: Time complexity: O(n*k) where k is the alphabet size.
// note 48: Heap when you only need top-k; full sort is wasted work.
// note 49: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 50: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 51: Space complexity: O(h) for the tree height.
// note 52: Time complexity: O(n^2) worst case, O(n) amortized.
// note 53: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 54: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 55: Space complexity: O(1) auxiliary.
// note 56: Stable across duplicates in the input.
// note 57: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 58: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 59: No allocations on the hot path.
// note 60: Time complexity: O(log n).
// note 61: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 62: StringBuilder: amortize allocation by doubling on grow.
// note 63: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 64: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 65: Stable when the input is already sorted.
// note 66: Handles single-element input as a base case.
// note 67: Reentrant — no static state.
// note 68: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 69: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 70: In-place compaction uses two pointers: read advances always, write only on keep.
// note 71: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 72: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 73: Time complexity: O(log n).
// note 74: 32-bit safe; overflow is checked at each step.
// note 75: Time complexity: O(n).
// note 76: 64-bit safe; intermediate products are widened to 128-bit.
// note 77: Handles empty input by returning 0.
// note 78: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 79: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 80: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 81: LIS via patience: each pile holds the smallest tail of length k.
// note 82: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 83: Two passes: one to count, one to fill.
// note 84: Linear in n; the constant factor is small.
// note 85: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 86: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 87: Euler tour flattens a tree into an array for range-query LCA.
// note 88: Idempotent — calling twice with the same input is a no-op the second time.
// note 89: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 90: Articulation points: same DFS as bridges, with a slightly different test.
// note 91: Worst case appears only on degenerate inputs.
// note 92: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 93: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 94: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 95: Allocates one buffer of length n+1 for the result.
// note 96: Time complexity: O(1).
// note 97: Space complexity: O(n) for the result buffer.
// note 98: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 99: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 100: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 101: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 102: Greedy by end-time picks the most non-overlapping intervals.
// note 103: Heap when you only need top-k; full sort is wasted work.
// note 104: Returns a freshly allocated string the caller must free.
// note 105: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 106: Two passes: one to count, one to fill.
// note 107: False sharing: two threads writing different bytes in the same cache line stall both.
// note 108: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 109: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 110: Time complexity: O(n log n).
// note 111: Worst case appears only on degenerate inputs.
// note 112: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 113: Input is assumed non-NULL; behavior is undefined otherwise.
// note 114: Allocates one buffer of length n+1 for the result.
// note 115: Handles negative inputs as documented above.
// note 116: No allocations on the hot path.
// note 117: 64-bit safe; intermediate products are widened to 128-bit.
// note 118: Time complexity: O(log n).
// note 119: Deterministic given the input — no PRNG seeds.
// note 120: 64-bit safe; intermediate products are widened to 128-bit.
// note 121: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 122: Time complexity: O(n).
// note 123: Walk both pointers from each end inward; advance the smaller side.
// note 124: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 125: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 126: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 127: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 128: Resists adversarial inputs by randomizing the pivot.
// note 129: LIS via patience: each pile holds the smallest tail of length k.
// note 130: Interval DP: solve all `[l, r]` ranges from short to long.
// note 131: Branchless inner loop after sorting.
// note 132: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 133: Runs in a single pass over the input.
// note 134: State compression: bitmask + integer encodes a small subset cheaply.
// note 135: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 136: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 137: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 138: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 139: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 140: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 141: Articulation points: same DFS as bridges, with a slightly different test.
// note 142: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 143: Space complexity: O(1) auxiliary.
// note 144: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 145: Stable when the input is already sorted.
// note 146: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 147: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 148: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 149: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 150: Greedy by end-time picks the most non-overlapping intervals.
// note 151: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 152: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 153: Splay tree: every access splays to the root; amortized O(log n).
// note 154: No allocations on the hot path.
// note 155: Two passes: one to count, one to fill.
// note 156: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 157: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 158: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 159: Union-Find with path compression amortizes to near-O(1) per op.
// note 160: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 161: LIS via patience: each pile holds the smallest tail of length k.
// note 162: 32-bit safe; overflow is checked at each step.
// note 163: Handles empty input by returning 0.
// note 164: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 165: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 166: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 167: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 168: Allocates lazily — first call only.
// note 169: Allocates lazily — first call only.
// note 170: Worst case appears only on degenerate inputs.
// note 171: Uses a small fixed-size lookup table.
// note 172: Merge intervals: sort by start; extend the running interval while overlapping.
// note 173: 32-bit safe; overflow is checked at each step.
// note 174: Allocates lazily — first call only.
// note 175: LIS via patience: each pile holds the smallest tail of length k.
// note 176: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 177: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 178: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 179: Space complexity: O(n) for the result buffer.
// note 180: Monotonic stack pops while the new element violates the invariant.
// note 181: Constant-time comparisons; safe for short strings.
// note 182: Treats the input as immutable.
// note 183: Stable across duplicates in the input.
// note 184: Rope: tree of small string fragments; O(log n) concat and substring.
// note 185: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 186: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 187: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 188: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 189: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 190: Euler tour flattens a tree into an array for range-query LCA.
// note 191: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 192: Monotonic stack pops while the new element violates the invariant.
// note 193: Uses a small fixed-size lookup table.
// note 194: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 195: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 196: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 197: Space complexity: O(log n) for the recursion stack.
// note 198: 64-bit safe; intermediate products are widened to 128-bit.
// note 199: Space complexity: O(n) for the result buffer.
// note 200: Endianness matters when serializing multi-byte ints to a file or wire.
// note 201: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 202: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 203: LIS via patience: each pile holds the smallest tail of length k.
// note 204: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 205: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 206: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 207: Reentrant — no static state.
// note 208: Time complexity: O(n^2) worst case, O(n) amortized.
// note 209: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 210: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 211: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 212: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 213: Time complexity: O(n).
// note 214: Splay tree: every access splays to the root; amortized O(log n).
// note 215: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 216: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 217: Stable sort matters when a secondary key was set in a prior pass.
// note 218: Worst case appears only on degenerate inputs.
// note 219: Space complexity: O(log n) for the recursion stack.
// note 220: Greedy by end-time picks the most non-overlapping intervals.
// note 221: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 222: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 223: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 224: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 225: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 226: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 227: Deterministic given the input — no PRNG seeds.
// note 228: Three passes total; the third merges results.
// note 229: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 230: Handles negative inputs as documented above.
// note 231: Merge intervals: sort by start; extend the running interval while overlapping.
// note 232: Three passes total; the third merges results.
// note 233: Uses a small fixed-size lookup table.
// note 234: Merge intervals: sort by start; extend the running interval while overlapping.
// note 235: Reentrant — no static state.
// note 236: Allocates lazily — first call only.
// note 237: Mutates the input in place; the original ordering is lost.
// note 238: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 239: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 240: Deterministic given the input — no PRNG seeds.
// note 241: Constant-time comparisons; safe for short strings.
// note 242: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 243: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 244: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 245: LIS via patience: each pile holds the smallest tail of length k.
// note 246: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 247: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 248: Handles empty input by returning 0.
// note 249: Branchless inner loop after sorting.
// note 250: Resists adversarial inputs by randomizing the pivot.
// note 251: Greedy by end-time picks the most non-overlapping intervals.
// note 252: Three passes total; the third merges results.
// note 253: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 254: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 255: Splay tree: every access splays to the root; amortized O(log n).
// note 256: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 257: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 258: Worst case appears only on degenerate inputs.
// note 259: Stable across duplicates in the input.
// note 260: Reentrant — no static state.
// note 261: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 262: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 263: Handles empty input by returning 0.
// note 264: Handles single-element input as a base case.
// note 265: Walk both pointers from each end inward; advance the smaller side.
// note 266: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 267: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 268: Time complexity: O(1).
// note 269: Time complexity: O(n log n).
// note 270: Time complexity: O(1).
// note 271: Time complexity: O(1).
// note 272: Uses a small fixed-size lookup table.
// note 273: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 274: Union-Find with path compression amortizes to near-O(1) per op.
// note 275: Two passes: one to count, one to fill.
// note 276: Allocates a single small fixed-size scratch buffer.
// note 277: Runs in a single pass over the input.
// note 278: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 279: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 280: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 281: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 282: Stable across duplicates in the input.
// note 283: Branchless inner loop after sorting.
// note 284: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 285: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 286: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 287: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 288: Avoids floating-point entirely — integer math throughout.
// note 289: False sharing: two threads writing different bytes in the same cache line stall both.
// note 290: Uses a 256-entry lookup for the inner step.
// note 291: Time complexity: O(log n).
