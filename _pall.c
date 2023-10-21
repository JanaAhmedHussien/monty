#include "monty.h"
/**
 * _pall - print all values
 * @stack: pointer
 * @nline: line number of my code
 */
void _pall(stack_t **stack, unsigned int nline)
{
stack_t *temporary = (*stack)->next;
while (temporary)
{
printf("%d\n", temporary->n);
temporary = temporary->next;
}
(void)nline;
}
