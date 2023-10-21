#include "monty.h"
/**
 * _push - push value to the stack
 * @stack: ptr to the top node
 * @nline: line number
 */
void _push(stack_t **stack, unsigned int nline)
{
stack_t *temporary, *my_node;
int x;
my_node = malloc(sizeof(stack_t));
if (my_node == NULL)
{
token_err(err_wmemory());
return;
}
if (operation_code_tokens[1] == NULL)
{
token_err(warg(nline));
return;
}
for (x = 0; operation_code_tokens[1][x]; x++)
{
if (operation_code_tokens[1][x] == '-' && x == 0)
continue;
if (operation_code_tokens[1][x] < '0' || operation_code_tokens[1][x] > '9')
{
token_err(warg(nline));
return;
}
}
my_node->n = atoi(operation_code_tokens[1]);
if (my_stat(*stack) == MY_STACK)
{
temporary = (*stack)->next;
my_node->prev = *stack;
my_node->next = temporary;
if (temporary)
temporary->prev = my_node;
(*stack)->next = my_node;
}
else
{
temporary = *stack;
while (temporary->next)
temporary = temporary->next;
my_node->prev = temporary;
my_node->next = NULL;
temporary->next = my_node;
}
}
