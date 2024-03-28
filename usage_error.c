#include "monty.h"

/**
 * usage_error - print usage error
 *
 * Return: exit failure
 */

int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}
