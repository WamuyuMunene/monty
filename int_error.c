#include "monty.h"

/**
 * no_int_error - print for invalid push arg
 *
 * @line_number: int
 *
 * Return: exit failure
 */

int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
