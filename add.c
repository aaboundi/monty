#include "monty.h"

/**
 * add - a function that implements the add opcode (adds the top two elements
 * of the stack_t
 * @stack: a pointer to the head of the stack_t
 * @line_number: the line number of the opcode from the text file
 *
 * Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (*stack == NULL || (*stack)->next == NULL)
		errorHandler2(17, line_number);
	(*stack) = (*stack)->next;

	sum = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;

	(void)line_number;
}
