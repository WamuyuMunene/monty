#include "monty.h"

/**
 * div_error - print for div by 0
 *
 * @line_number: int
 *
 * Return: exit failure
 */

int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}
