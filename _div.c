#include "monty.h"
/**
 * _div - Divides the second value from the top of
 *             a stack_t linked list by the top value.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @linenum: The current working line number of a Monty bytecodes file.
 *
 * Description: The result is stored in the second value node
 *              from the top and the top value is removed.
 */
void _div(stack_t **stack, unsigned int linenum)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		token_err(st_err(line_number, "div"));
		return;
	}

	if ((*stack)->next->n == 0)
	{
		token_err(d_err(linenum));
		return;
	}

	(*stack)->next->next->n /= (*stack)->next->n;
	_pop(stack, linenum);
}
