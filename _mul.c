#include "monty.h"
/**
 * _mul - Multiplies the second value from the top of
 *             a stack_t linked list by the top value.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @linenum: The current working line number of a Monty bytecodes file.
 *
 * Description: The result is stored in the second value node
 *              from the top and the top value is removed.
 */
void _mul(stack_t **stack, unsigned int linenum)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		token_err(st_err(linenum, "mul"));
		return;
	}

	(*stack)->next->next->n *= (*stack)->next->n;
	_pop(stack, linenum);
}
