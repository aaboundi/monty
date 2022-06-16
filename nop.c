#include "monty.h"

/**
 * nop - a function that implements the nop opcode (does nothing)
 * @stack: a pointer to the head of the stack_t
 * @line_number: the line number of the opcode from the text file
 *
 * Return: void
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
