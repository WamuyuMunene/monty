#include "monty.h"

/**
 * short_stack_error - error printing for calc with <2
 *
 * @op: pointer
 * @line_number: int
 *
 * Return: exit failure
 */

int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}
