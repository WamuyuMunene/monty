#include "monty.h"

/**
 * malloc_error - print for malloc errors
 *
 * Return: exit failure
 */

int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}
