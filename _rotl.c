#include "monty.h"
/**
 * _rotl - Rotates the top value of a stack_t linked list to the bottom.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @linenum: The current working line number of a Monty bytecodes file.
 */
void _rotl(stack_t **stack, unsigned int linenum)
{
	stack_t *last, *first;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
		return;

	first = (*stack)->next;
	last = (*stack)->next;
	
	while (last->next != NULL)
		last = last->next;

	first->next->prev = *stack;
	(*stack)->next = first->next;
	last->next = first;
	first->next = NULL;
	first->prev = last;

	(void)linenum;
}
