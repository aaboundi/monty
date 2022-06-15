#include "monty.h"

/**
* pall - print all of the values in the stack
* @stack: pointer to pointer
* @line_number: unsigned int
*/
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void)line_number;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
