#include "monty.h"
/**
 * _rotr - Rotates the bottom value of a stack_t to the top.
 * @stack: A pointer to the top mode node of a stack_t .
 * @linenum: The current working line number of a Monty bytecodes file.
 */
void _rotr(stack_t **stack, unsigned int linenum)
{
	stack_t *first, *last;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
		return;

	first = (*stack)->next;
	last = (*stack)->next;
	
	while (last->next != NULL)
		last = last->next;

	last->prev->next = NULL;
	(*stack)->next = last;
	last->prev = *stack;
	last->next = first;
	first->prev = last;

	(void)linenum;
}
