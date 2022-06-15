#include "monty.h"

/**
* push - push num to top of the stack
* @stack: pointer to pointer
* @line_number: unsigned int
*/
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *newNode, *current = *stack;

	(void)line_number;
	newNode = malloc(sizeof(stack_t));
	if (!newNode)
		errorHandler(4, line_number);
	newNode->n = gv.num;
	newNode->next = *stack;
	newNode->prev = NULL;
	if (*stack)
		current->prev = newNode;
	*stack = newNode;
}
