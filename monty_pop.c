#include "monty.h"

/**
 * monty_pop - pops top element
 *
 * @stack: pointer
 * @line_number: int
 */

void monty_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *next = NULL;

	if ((*stack)->next == NULL)
	{
		set_op_tok_error(pop_error(line_number));
		return;
	}

	next = (*stack)->next->next;
	free((*stack)->next);
	if (next)
		next->prev = *stack;
	(*stack)->next = next;
}
