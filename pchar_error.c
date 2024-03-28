#include "monty.h"

/**
 * pchar_error - error printing for empty&non-chr
 *
 * @message: pointer
 * @line_number: int
 *
 * Return: exit failure
 */

int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
