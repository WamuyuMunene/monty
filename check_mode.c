#include "monty.h"
#include <string.h>

/**
 * check_mode - checks if its stack/queue mode
 *
 * @stack: pointer
 *
 * Return: 1, 0, 2
 */

int check_mode(stack_t *stack)
{
	if (stack->n == STACK)
		return (STACK);
	else if (stack->n == QUEUE)
		return (QUEUE);
	return (2);
}
