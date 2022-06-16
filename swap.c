#include "monty.h"

/**
 * swap - a function that implements the swap opcode (swaps the top two
 * elements of the stack_t)
 * @stack: a pointer to the head of the stack_t
 * @line_number: the line number of the opcode from the text file
 *
 * Return: void
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *curr, *temp;

	if (*stack == NULL || (*stack)->next == NULL)
		errorHandler2(16, line_number);
	curr = *stack;
	temp = (*stack)->next;

	if (temp->next != NULL)
		temp->next->prev = curr;
	curr->next = temp->next;
	temp->next = curr;
	temp->prev = NULL;
	*stack = temp;
}
