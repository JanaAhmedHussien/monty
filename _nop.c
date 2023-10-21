#include "monty.h"
/**
 * _nop - Does absolutely nothing for the Monty opcode 'nop'.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @linenum: The current working line number of a Monty bytecodes file.
 */
void _nop(stack_t **stack, unsigned int linenum)
{
	(void)stack;
	(void)linenum;
}
