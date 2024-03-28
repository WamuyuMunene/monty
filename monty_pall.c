#include "monty.h"

/**
 * monty_pall - print stack elements
 *
 * @stack: pointer
 * @line_number: int
 */

void monty_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = (*stack)->next;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	(void)line_number;
}
