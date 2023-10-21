#include "monty.c"
/**
 * token_err - when operation token will be errors
 * @coderr: error code
 */
void token_err(int coderr)
{
int l = 0, j = 0;
char *string_e = NULL;
char ** ntoken = NULL;
l = larr();
ntoken = malloc(sizeof(char*) * (l + 2));
if (!operation_code_tokens)
{
err_wmemory();
return;
}
while (j < l)
{
ntoken[j] = operation_code_tokens[j];
j++;
}
estring = _integer(coderr);
if (!estring)
{
free(ntoken);
err_wmemory();
return;
}
ntoken[j++] = estring;
ntoken[j] = NULL;
free(operation_code_tokens);
operation_code_tokens = ntoken;
}
/**
 * my_stat - check stack or queue
 * @stack: pointer
 * Return: 0 for stack or 1 for queue
 */
int my_stat((stack_t *stack)
{
    if (stack->n == MY_STACK)
        return (MY_STACK);
    else if (stack->n == MY_QUEUE)
        return (MY_QUEUE);
    return (2);
}
