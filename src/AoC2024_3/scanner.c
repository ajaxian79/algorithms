//
// Created by Blake Tullysmith on 12/3/24.
//

#include <stdbool.h>
#include "scanner.h"

typedef enum ScannerState {
  SEEKING_MUL_INSTRUCTION,
  SEEKING_COMMA,
  SEEKING_OPEN_PAREN,
  SEEKING_CLOSE_PAREN,
  SEEKING_LARG_NUMBER,
  SEEKING_RARG_NUMBER
} ScannerState;

bool scanComplete(FILE *file);

int getCurrent(FILE *file);

int peekNext(FILE *file);

void tokenize(FILE* file, Program* program) {
  ScannerState state = SEEKING_MUL_INSTRUCTION;
  InstructionType currentInstructionType = NOOP;
  InstructionArgument lArg;
  InstructionArgument rArg;

  const int maxDigits = 3;

  while(scanComplete(file)) {
    switch (state) {
      case SEEKING_MUL_INSTRUCTION:
        if (getCurrent(file) == 'm' &&
            getCurrent(file) == 'u' &&
            getCurrent(file) == 'l') {
          state = SEEKING_OPEN_PAREN;
          currentInstructionType = MULTIPLY;
        }
        break;
      case SEEKING_COMMA:
        if (getCurrent(file) != ',') {
          state = SEEKING_MUL_INSTRUCTION;
          currentInstructionType = NOOP;
        } else {
          state = SEEKING_RARG_NUMBER;
        }
        break;
      case SEEKING_OPEN_PAREN:
        if (getCurrent(file) != '(') {
          state = SEEKING_MUL_INSTRUCTION;
          currentInstructionType = NOOP;
        } else {
          state = SEEKING_LARG_NUMBER;
        }
        break;
      case SEEKING_CLOSE_PAREN:
        if (getCurrent(file) != ')') {
          state = SEEKING_MUL_INSTRUCTION;
          currentInstructionType = NOOP;
        } else {
          // Commit Instruction to Program
          Instruction* instruction = append_new_instruction(program);

          instruction->type = currentInstructionType;
          instruction->lArg = lArg;
          instruction->rArg = rArg;

          state = SEEKING_MUL_INSTRUCTION;
          currentInstructionType = NOOP;
        }
        break;
      case SEEKING_LARG_NUMBER:
        lArg.integer = 0;
        for(int position = 0; position < maxDigits; position++) {
          int digit = peekNext(file);

          if (digit >= '0' && digit <= '9') {
            lArg.integer *= 10;
            lArg.integer += getCurrent(file) - '0';
          } else if (position > 0 && digit == ',') {
            state = SEEKING_COMMA;
          } else {
            state = SEEKING_MUL_INSTRUCTION;
            currentInstructionType = NOOP;
          }
        }

        break;
      case SEEKING_RARG_NUMBER:
        rArg.integer = 0;
        for(int position = 0; position < maxDigits; position++) {
          int digit = peekNext(file);

          if (digit >= '0' && digit <= '9') {
            rArg.integer *= 10;
            rArg.integer += getCurrent(file) - '0';
          } else if (position > 0 && digit == ')') {
            state = SEEKING_CLOSE_PAREN;
          } else {
            state = SEEKING_MUL_INSTRUCTION;
            currentInstructionType = NOOP;
          }
        }
        break;
    }

  }

}

int peekNext(FILE *file) {
  int next = getCurrent(file);
  ungetc(next, file);
  return next;
}

int getCurrent(FILE *file) { return fgetc(file); }

bool scanComplete(FILE *file) { return !feof(file); }
