#ifndef _MONTY_H_
#define _MONTY_H_
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



extern gbv gv;

void errorHandler(unsigned int errno, unsigned int line_number);
void errorHandler2(unsigned int errno, unsigned int line_number);
char *isNumber(char *value, unsigned int line_number);
void compare(char *token, stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);

void freeAll(void);
void freeLinkedList(stack_t *stack);

#endif
