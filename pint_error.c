#include "monty.h"

/**
 * pint_error - pint error printing for empty stack
 *
 * @line_number: int
 *
 * Return: exit failure
 */

int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}
