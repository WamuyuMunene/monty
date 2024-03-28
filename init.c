#include "monty.h"
#include <string.h>

/**
 * init_stack - init the stack
 *
 * @stack: pointer
 *
 * Return: exit failure /success
 */

int init_stack(stack_t **stack)
{
	stack_t *s;

	s = malloc(sizeof(stack_t));
	if (s == NULL)
		return (malloc_error());

	s->n = STACK;
	s->prev = NULL;
	s->next = NULL;

	*stack = s;

	return (EXIT_SUCCESS);
}
