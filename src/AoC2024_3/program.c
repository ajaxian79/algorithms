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
  switch (program->current->type) {
    case MULTIPLY:
      program->last_result = program->current->lArg.integer * program->current->rArg.integer;
      break;

    default:
      // START, NOOP and any un implemented instructions
      break;
  }

  program->current = program->current->next;

  if (program->current == NULL) {
    program->current = program->head;
  }

  return program->last_result;
}