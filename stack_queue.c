#include "monty.h"
/**
 * _stack - Converts a queue to a stack.
 * @stack: A pointer to the top mode node of a stack_t .
 * @linenum: The current working line number of a Monty bytecodes file.
 */
void _stack(stack_t **stack, unsigned int linenum)
{
	(*stack)->n = STACK;
	(void)linenum;
}

/**
 * _queue - Converts a stack to a queue.
 * @stack: A pointer to the top mode node of a stack_t.
 * @linenum: The current working line number of a Monty bytecodes file.
 */
void _queue(stack_t **stack, unsigned int linenum)
{
	(*stack)->n = QUEUE;
	(void)linenum;
}
