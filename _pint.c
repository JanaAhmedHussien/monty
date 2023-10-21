#include "monty.h"
/**
 * _pint - Prints the top value of a stack_t linked list.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @linenum: The current working line number of a Monty bytecodes file.
 */
void _pint(stack_t **stack, unsigned int linenum)
{
    if ((*stack)->next == NULL)
{
token_err(perror(linenum));
return;
}

printf("%d\n", (*stack)->next->n);
}

