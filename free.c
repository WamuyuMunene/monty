#include "monty.h"
#include <string.h>

/**
 * free_stack - frees the stack
 *
 * @stack: pointer
 */

void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
