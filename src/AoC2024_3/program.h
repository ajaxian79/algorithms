//
// Created by Blake Tullysmith on 12/3/24.
//

#ifndef ALGORITHMS_PROGRAM_H
#define ALGORITHMS_PROGRAM_H

typedef enum InstructionType {
  NOOP = 0,
  START = 1,
  MULTIPLY = 2
} InstructionType;

typedef union InstructionArgument {
  int integer;
} InstructionArgument;

typedef struct Instruction {
  InstructionType type;
  InstructionArgument lArg;
  InstructionArgument rArg;
  struct Instruction* next;
} Instruction;

typedef struct Program {
  Instruction* head;
  Instruction* tail;
  Instruction* current;

  int last_result;
} Program;

Program* create_program();
void destroy_program(Program** program);

Instruction* append_new_instruction(Program* program);

void start_program(Program* program);
int get_next_result(Program* program);
int program_is_at_start(Program* program);

#endif //ALGORITHMS_PROGRAM_H
