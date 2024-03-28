#include "monty.h"

/**
 * monty_stack - convert queue to stack
 *
 * @stack: pointer
 * @line_number: int
 */

void monty_stack(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = STACK;
	(void)line_number;
}
