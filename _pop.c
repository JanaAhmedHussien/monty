#include "monty.h"
/**
 * _pop - Removes the top value element of a stack_t linked list.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @linenum: The current working line number of a Monty bytecodes file.
 */
void _pop(stack_t **stack, unsigned int linenum)
{
stack_t *next = NULL;


if ((*stack)->next == NULL)
{
token_err(poerr(linenum));
return;
}

next = (*stack)->next->next;
free((*stack)->next);
if (next)
next->prev = *stack;
(*stack)->next = next;
}

