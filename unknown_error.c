#include "monty.h"

/**
 * unknown_op_error - print for unknown errors
 *
 * @opcode: pointer
 * @line_number: int
 *
 * Return: exit failure
 */

int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
		line_number, opcode);
	return (EXIT_FAILURE);
}
