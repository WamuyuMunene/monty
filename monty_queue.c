#include "monty.h"

/**
 * monty_queue - convert stack to queue
 *
 * @stack: pointer
 * @line_number: int
 */

void monty_queue(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = QUEUE;
	(void)line_number;
}
