#include "monty.h"
#include <string.h>
#include <stdlib.h>
/**
 * _free - frees the array
 */
void _free(void)
{
size_t j = 0;
if (operation_code_tokens == NULL)
return;
for (j = 0; operation_code_tokens[j]; j++)
free(operation_code_tokens[j]);
free(operation_code_tokens);
}
/**
 * check_delim - check if the line contain delimeter or not
 * @l: pointer
 * @delim: pointer
 * Return: -1 if there is delimeter or 0
 */
int check_delim(char *l, char *delim)
{
int x, y;
for (x = 0; l[x]; x++)
{
for (y = 0; delim[y]; y++)
{
if (l[x] == delim[y])
break;
}
if (delim[y] == '\0')
return (0);
}
return (1);
}

/**
 * _frees - to free stack
 * @stack: pointer
 */
void _frees(stack_t **stack)
{
stack_t *temporary = *stack;
while (*stack)
{
temporary = (*stack)->next;
free(*stack);
*stack = temporary;
}
}
/**
 * start_stack - start my stack
 * @stack: pointer for the function
 * Return: function or fail
 */
int start_stack(stack_t **stack)
{
stack_t *x;
x = malloc(sizeof(stack_t));
if (x == NULL)
return (err_wmemory());
x->n = MY_STACK;
x->prev = NULL;
x->next = NULL;
*stack = x;
return (EXIT_SUCCESS);
}
