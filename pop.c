#include "monty.h"

/**
 * pop - a function that implements the pop opcode (removes the top
 * element of the stack.
 * @stack: a pointer to the head of the stack_t
 * @line_number: the line number of the command
 *
 * Return: void
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	if (!temp)
		errorHandler2(15, line_number);
	*stack = temp->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(temp);
}
