#include "monty.h"

/**
 * pop_error - print error for empty stack
 *
 * @line_number: int
 *
 * Return: exit failure
 */

int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}
