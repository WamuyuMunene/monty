#include "monty.h"

/**
 * prints top element in stack
 *
 * @stack: pointer
 * @line_number: int
 */

void monty_pint(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		set_op_tok_error(pint_error(line_number));
		return;
	}

	printf("%d\n", (*stack)->next->n);
}
