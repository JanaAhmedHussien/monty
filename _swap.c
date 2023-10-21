#include "monty.h"
/**
 * _swap - Swaps the top two value elements of a stack_t linked list.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @linenum: The current working line number of a Monty bytecodes file.
 */
void _swap(stack_t **stack, unsigned int linenum)
{
stack_t *container;

if ((*stack)->next == NULL || (*stack)->next->next == NULL)
{
token_err(st_err(linenum, "swap"));
return;
}

container = (*stack)->next->next;
(*stack)->next->next = container->next;
(*stack)->next->prev = container;
if (container->next)
{
container->next->prev = (*stack)->next;
}
container->next = (*stack)->next;
container->prev = *stack;
(*stack)->next = container;
}
