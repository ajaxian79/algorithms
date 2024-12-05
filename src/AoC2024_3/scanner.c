//
// Created by Blake Tullysmith on 12/3/24.
//

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#include "scanner.h"

typedef enum ScannerState {
  SEEKING_INSTRUCTION,
  SEEKING_COMMA,
  SEEKING_OPEN_PAREN,
  SEEKING_CLOSE_PAREN,
  SEEKING_LARG_NUMBER,
  SEEKING_RARG_NUMBER
} ScannerState;

bool scanComplete(FILE *file);

int advance(FILE *file);

int peekNext(FILE *file);

#define LOG_BUFF_SIZE 512

//#define EXTENDED_LOGGING // Enable to add more log data

void tokenize(FILE* file, Program* program) {
  ScannerState state = SEEKING_INSTRUCTION;
  InstructionType currentInstructionType = NOOP;
  InstructionArgument lArg;
  InstructionArgument rArg;

  const int maxDigits = 4;

  long start;
  long end;
  const int buffer_width = 6;
  char buffer[buffer_width];
  char* pointer;
  int index;
  int offset;
  int val;
  FILE* scanner_log = fopen("scanner.log", "w");

#ifdef EXTENDED_LOGGING
  char log[LOG_BUFF_SIZE];
#endif

  while(scanComplete(file)) {
    fprintf(scanner_log, "Looping...\n");

    switch (state) {
      case SEEKING_INSTRUCTION:

        val = advance(file);
        while(val != '(' && val != EOF) {
          val = advance(file);
        }

        if (val == EOF) {
          return;
        }

        end = ftell(file) - 1;
        start = end - buffer_width;

        if (start < 0) {
          start = 0;
        }

        fseek(file, start, SEEK_SET);
        for(index = 0; index < buffer_width; index++) {
          buffer[index] = (char)fgetc(file);
          if (buffer[index] == 0)
            buffer[index] = ' ';
        }

        for(offset = 0; offset < buffer_width; offset++) {
          if (buffer[offset] == 'd' || buffer[offset] == 'm')
            break;
        }

        for(index = offset; index < buffer_width; index++) {
          buffer[index-offset] = buffer[index];
          buffer[index] = 0;
        }

        pointer = buffer;

#ifdef EXTENDED_LOGGING
        fprintf(scanner_log, "start: %ld\n", start);
        fprintf(scanner_log, "end: %ld\n", end);
        fprintf(scanner_log, "buffer: %s\n", buffer);
        fprintf(scanner_log, "pointer: %s\n", pointer);
        fprintf(scanner_log, "buffer: %d %d %d %d %d %d\n", buffer[0],buffer[1],buffer[2],buffer[3],buffer[4],buffer[5]);

        fseek(file, 12430, SEEK_SET);
        fgets(log, (int)LOG_BUFF_SIZE, file);

        fprintf(scanner_log, "section: ");
        for (index = 0; index < LOG_BUFF_SIZE; index++)
          fprintf(scanner_log, "%d '%c' ", log[index], log[index]);
        fprintf(scanner_log, "\n");

        fseek(file, start, SEEK_SET);
        fgets(buffer, (int)(end-start), file);
#endif

        if (strncmp("mul", pointer, 3) == 0) {
          state = SEEKING_OPEN_PAREN;
          currentInstructionType = MULTIPLY;
        } else if (strncmp("don't", pointer, 5) == 0) {
          fprintf(scanner_log, "DISABLE\n");
          while(advance(file) != '(');
          // Commit Instruction to Program
          Instruction* instruction = append_new_instruction(program);

          instruction->type = DISABLE;
          instruction->lArg = lArg;
          instruction->rArg = rArg;

          state = SEEKING_INSTRUCTION;
          currentInstructionType = NOOP;
        } else if (strncmp("do", pointer, 2) == 0) {
          fprintf(scanner_log, "ENABLE found at character %ld\n", ftell(file));
          while(advance(file) != '(');
          // Commit Instruction to Program
          Instruction* instruction = append_new_instruction(program);

          instruction->type = ENABLE;
          instruction->lArg = lArg;
          instruction->rArg = rArg;

          state = SEEKING_INSTRUCTION;
          currentInstructionType = NOOP;
        } else {
          fprintf(scanner_log, "NOOP: %s\n", pointer);
          // Not an instruction, skip.
          fseek(file, end+2, SEEK_SET);

          state = SEEKING_INSTRUCTION;
          currentInstructionType = NOOP;
        }

        break;
      case SEEKING_COMMA:
        if (advance(file) != ',') {
          state = SEEKING_INSTRUCTION;
          currentInstructionType = NOOP;
          fseek(file, end+2, SEEK_SET);
        } else {
          state = SEEKING_RARG_NUMBER;
        }
        break;
      case SEEKING_OPEN_PAREN:
        if (advance(file) != '(') {
          state = SEEKING_INSTRUCTION;
          currentInstructionType = NOOP;
          fseek(file, end+2, SEEK_SET);
        } else {
          state = SEEKING_LARG_NUMBER;
        }
        break;
      case SEEKING_CLOSE_PAREN:
        if (advance(file) != ')') {
          state = SEEKING_INSTRUCTION;
          currentInstructionType = NOOP;
          fseek(file, end+2, SEEK_SET);
        } else {
          fprintf(scanner_log, "MUL %d %d\n", lArg.integer, rArg.integer);
          // Commit Instruction to Program
          Instruction* instruction = append_new_instruction(program);

          instruction->type = currentInstructionType;
          instruction->lArg = lArg;
          instruction->rArg = rArg;

          state = SEEKING_INSTRUCTION;
          currentInstructionType = NOOP;
        }
        break;
      case SEEKING_LARG_NUMBER:
        lArg.integer = 0;
        for(int position = 0; position < maxDigits; position++) {
          int digit = peekNext(file);

          if (digit >= '0' && digit <= '9') {
            lArg.integer *= 10;
            lArg.integer += advance(file) - '0';
          } else if (position > 0 && digit == ',') {
            state = SEEKING_COMMA;
          } else {
            state = SEEKING_INSTRUCTION;
            currentInstructionType = NOOP;
            fseek(file, end+2, SEEK_SET);
          }
        }

        break;
      case SEEKING_RARG_NUMBER:
        rArg.integer = 0;
        for(int position = 0; position < maxDigits; position++) {
          int digit = peekNext(file);

          if (digit >= '0' && digit <= '9') {
            rArg.integer *= 10;
            rArg.integer += advance(file) - '0';
          } else if (position > 0 && digit == ')') {
            state = SEEKING_CLOSE_PAREN;
          } else {
            state = SEEKING_INSTRUCTION;
            currentInstructionType = NOOP;
            fseek(file, end+2, SEEK_SET);
          }
        }
        break;
    }

  }

  fflush(scanner_log);
  fclose(scanner_log);

}

int peekNext(FILE *file) {
  int next = advance(file);
  ungetc(next, file);
  return next;
}

int advance(FILE *file) { return fgetc(file); }

bool scanComplete(FILE *file) { return !feof(file); }
