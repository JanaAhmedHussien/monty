#include "monty.h"
/**
 * _pchar - Prints the character in the top value node of stack.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @linenum: The current working line number of a Monty bytecodes file.
 */
void _pchar(stack_t **stack, unsigned int linenum)
{
	if ((*stack)->next == NULL)
	{
		token_err(ch_err(linenum, "stack empty"));
		return;
	}
	if ((*stack)->next->n < 0 || (*stack)->next->n > 127)
	{
		token_err(ch_err(linenum, "value out of range"));
		return;
	}

	printf("%c\n", (*stack)->next->n);
}
