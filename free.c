#include "monty.h"

/**
 * freeAll - function that frees the global getline, stack_t
 * and file if it exists
 *
 * Return: void
 */
void freeAll(void)
{

	free(gv.line);
	freeLinkedList(gv.stack);
	if (gv.mfile)
		fclose(gv.mfile);
}

/**
 * freeLinkedList - a function that frees the linkedlist
 * @stack: a pointer to the head of stack_t
 *
 * Return: void
 */
void freeLinkedList(stack_t *stack)
{
	stack_t *nextNode;

	while (stack)
	{
		nextNode = stack->next;
		free(stack);
		stack = nextNode;
	}
}

/**
 * free_all - custom memory handling function
 * @all: flag to indicate what to free
 */
void free_all(int all)
{
	if (data.line)
	{
		free(data.line);
		data.line = NULL;
		free_everything(data.words);
		data.words = NULL;
	}

	if (all)
	{
		if (data.stack)
		{
			free_dlistint(data.stack);
			data.stack = NULL;
		}
		if (data.fptr)
		{
			fclose(data.fptr);
			data.fptr = NULL;
		}
	}
}
