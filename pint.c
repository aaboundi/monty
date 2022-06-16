#include "monty.h"

/**
* pint - print the first int
* @stack: pointer to pointer
* @line_number: unsigned int
*/

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (!*stack)
		errorHandler(5, line_number);
	printf("%d\n", temp->n);
}
