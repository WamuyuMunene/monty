#include "monty.h"

/**
 * f_open_error - print for opening errors
 *
 * Return: exit failure
 */

int f_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}
