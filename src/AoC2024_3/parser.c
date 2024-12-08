//
// Created by Blake Tullysmith on 12/4/24.
//

#include "parser.h"

#ifndef DISABLE_ALGORITHMS_PARSER

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


#include "logger.h"
#define RULE_CHECK_LOG "parser"

//#define DIAGNOSTICS

void free_contents(char *buffer);
char *get_contents(FILE *file, size_t *out_length);

char *getInstructionName(const Instruction *instruction);

typedef struct ParserContext {
  char* buffer;
  int current;
  int start;
  size_t length;
} ParserContext;

int isAlpha(char c) {
  return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int isValidIdentifier(char c) {
  return (c == '\'') || isAlpha(c);
}

int isOpenParen(char c) {
  return (c == '(');
}

int isCloseParen(char c) {
  return (c == ')');
}

int isComma(char c) {
  return (c == ',');
}

int isNumber(char c) {
  return (c >= '0' && c <= '9');
}

int isAtEnd(ParserContext* parserContext) {
  return parserContext->current >= parserContext->length;
}

char advance(ParserContext* parserContext) {
  return parserContext->buffer[parserContext->current++];
}

char peek(ParserContext* parserContext) {
  if (isAtEnd(parserContext))
    return '\0';

  return parserContext->buffer[parserContext->current];
}

char* getToken(ParserContext* parserContext) {
  int size = (parserContext->current-parserContext->start)+1;
  char* token = malloc(sizeof(char)*size);

  memcpy(token, &(parserContext->buffer[parserContext->start]), size-1);
  token[size-1] = '\0';

  return token;
}

void tokenize(FILE* file, Program* program) {
  blog_start(RULE_CHECK_LOG, "Parsing...\n");
  ParserContext parserContext;
  parserContext.buffer = get_contents(file, &parserContext.length);
  parserContext.current = 0;
  parserContext.start = 0;



  char* instructionType = NULL;
  char* token = NULL;
  Instruction* currentInstruction = append_new_instruction(program);

  while(!isAtEnd(&parserContext)) {

#ifdef DIAGNOSTICS
    blog(PARSER_LOG, "Looping...\n\tcurrent: %d\n\tstart: %d\n\tlength: %d\n",
               parserContext.current,
               parserContext.start,
               parserContext.length);
#endif

    parserContext.start = parserContext.current;

    if (isAlpha(peek(&parserContext))) {
      switch(peek(&parserContext)) {
        case 'd':
        case 'm':
          advance(&parserContext);
          while (isValidIdentifier(peek(&parserContext)) && !isAtEnd(&parserContext)) {
#ifdef DIAGNOSTICS
            blog(PARSER_LOG, "Inner Looping...\n\tcurrent: %d\n\tstart: %d\n\tlength: %d\n",
                       parserContext.current,
                       parserContext.start,
                       parserContext.length);
#endif
            advance(&parserContext);
          }

          token = getToken(&parserContext);

#ifdef DIAGNOSTICS
          blog(PARSER_LOG, "Identifier: %s\n", token);
#endif
          if (strcmp("mul", token) == 0) {
            currentInstruction->type = MULTIPLY;
#ifdef DIAGNOSTICS
            blog(PARSER_LOG, "MULTIPLY\n");
#endif
          } else if (strcmp("do", token) == 0) {
            currentInstruction->type = ENABLE;
#ifdef DIAGNOSTICS
            blog(PARSER_LOG, "ENABLE\n");
#endif
          } else if (strcmp("don't", token) == 0) {
            currentInstruction->type = DISABLE;
#ifdef DIAGNOSTICS
            blog(PARSER_LOG, "DISABLE\n");
#endif
          }

          free(token);
          token = NULL;

          if (isOpenParen(peek(&parserContext))) {
            advance(&parserContext);
            parserContext.start = parserContext.current;

            if (currentInstruction->type == MULTIPLY) {
              while (isNumber(peek(&parserContext)) && !isAtEnd(&parserContext)) {
#ifdef DIAGNOSTICS
                blog(PARSER_LOG, "Inner Looping...\n\tcurrent: %d\n\tstart: %d\n\tlength: %d\n",
                         parserContext.current,
                         parserContext.start,
                         parserContext.length);
#endif
                advance(&parserContext);
              }

              token = getToken(&parserContext);

              if (strlen(token) > 0 && strlen(token) < 4 && isComma(peek(&parserContext))) {
                currentInstruction->lArg.integer = (int) strtol(token, NULL, 10);
#ifdef DIAGNOSTICS
                blog(PARSER_LOG, "lArgNumber: %s\n", token);
                blog(PARSER_LOG, "lArg.integer: %d\n", currentInstruction->lArg.integer);
#endif
              }

              free(token);
              token = NULL;

              if (isComma(peek(&parserContext))) {
                advance(&parserContext);
                parserContext.start = parserContext.current;

                while (isNumber(peek(&parserContext)) && !isAtEnd(&parserContext)) {
#ifdef DIAGNOSTICS
                  blog(PARSER_LOG, "Inner Looping...\n\tcurrent: %d\n\tstart: %d\n\tlength: %d\n",
                         parserContext.current,
                         parserContext.start,
                         parserContext.length);
#endif
                  advance(&parserContext);
                }

                token = getToken(&parserContext);

                if (strlen(token) > 0 && strlen(token) < 4 && isCloseParen(peek(&parserContext))) {
                  currentInstruction->rArg.integer = (int) strtol(token, NULL, 10);
#ifdef DIAGNOSTICS
                  blog(PARSER_LOG, "rArgNumber: %s\n", token);
                  blog(PARSER_LOG, "rArg.integer: %d\n", currentInstruction->rArg.integer);
#endif
                }

                free(token);
                token = NULL;

              }


            } else if (isCloseParen(peek(&parserContext))) {
              advance(&parserContext);
            } else {
              currentInstruction->type = NOOP;
            }

          } else {
            currentInstruction->type = NOOP;
          }
          break;

        default:
          advance(&parserContext);
      }
    } else {
      advance(&parserContext);
    }

    if (currentInstruction->type == NOOP) {
      currentInstruction->lArg.integer = 0;
      currentInstruction->rArg.integer = 0;
    } else {
      blog(RULE_CHECK_LOG, "Instruction: %s %d %d\n",
           getInstructionName(currentInstruction),
           currentInstruction->lArg.integer,
           currentInstruction->rArg.integer);

      currentInstruction = append_new_instruction(program);
    }
  }

  free_contents(parserContext.buffer);
}

char *getInstructionName(const Instruction *instruction) {
  switch(instruction->type) {
    case MULTIPLY:
      return "MUL";
    case ENABLE:
      return "DO";
    case DISABLE:
      return "DON'T";
    case NOOP:
    default:
      return "NOOP";
  }
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

// Function to free the dynamically allocated buffer
void free_contents(char *buffer) {
  free(buffer);
}

#endif