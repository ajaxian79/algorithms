//
// Created by Blake Tullysmith on 12/3/24.
//

#include <stdio.h>
#include <stdlib.h>

#ifndef __APPLE__
#include <malloc.h>
#endif

#include "program.h"

Program* create_program() {
  Program* program = malloc(sizeof(Program));

  Instruction* new_instruction = malloc(sizeof(Instruction));

  new_instruction->type = START;
  new_instruction->lArg.integer = 0;
  new_instruction->rArg.integer = 0;
  new_instruction->next = NULL;

  program->head = new_instruction;
  program->current = program->head;
  program->tail = program->head;
  program->last_result = 0;
  program->enabled = 1;

  return program;
}

void destroy_program(Program** program) {
  Instruction* current = (*program)->head;

  while(current != NULL) {
    Instruction* next = current->next;
    free(current);
    current = next;
  }

  free(*program);
  *program = NULL;
}

Instruction* append_new_instruction(Program* program) {
  Instruction* new_instruction = malloc(sizeof(Instruction));

  new_instruction->type = NOOP;
  new_instruction->lArg.integer = 0;
  new_instruction->rArg.integer = 0;
  new_instruction->next = NULL;

  program->tail->next = new_instruction;
  program->tail = new_instruction;

  return new_instruction;
}

void start_program(Program* program) {
  program->current = program->head;
}

int program_is_at_start(Program* program) {
  return program->current == program->head;
}

int get_next_result(Program* program) {
  FILE* program_log = fopen("execution.log", "a");
  switch (program->current->type) {
    case MULTIPLY:
      if (program->enabled) {
        program->last_result = program->current->lArg.integer * program->current->rArg.integer;
        fprintf(program_log, "MUL %d * %d == %d",
               program->current->lArg.integer,
               program->current->rArg.integer,
               program->last_result);
      } else {
        fprintf(program_log, "SKIP MUL %d * %d == %d",
               program->current->lArg.integer,
               program->current->rArg.integer,
               program->current->lArg.integer * program->current->rArg.integer);
        program->last_result = 0;
      }
      break;

    case ENABLE:
      fprintf(program_log, "ENABLE");
      program->enabled = 1;
      program->last_result = 0;
      break;

    case DISABLE:
      fprintf(program_log, "DISABLE");
      program->enabled = 0;
      program->last_result = 0;
      break;

    default:
      // START, NOOP and any un implemented instructions
      program->last_result = 0;
      break;
  }

  program->current = program->current->next;

  if (program->current == NULL) {
    program->current = program->head;
  }

  fflush(program_log);
  fclose(program_log);
  return program->last_result;
}