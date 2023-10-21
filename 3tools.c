#include "monty.h"
#include <string.h>
/**
 * larr - length of token array
 * Return: length
 */
unsigned int larr(void)
{
unsigned int l = 0;
while (operation_code_tokens[l])
l++;
return (l);
}
/**
 * total_fun - make them all together
 * @functions: pointer
 * Return: pointer
 */
void (*total_fun(char *opcode))(stack_t**, unsigned int)
{
instruction_t func[] = {
{"push", _push},
{"pall", _pall},
};
int x;
for (x = 0; func[x].opcode; x++)
{
if (strcmp(opcode, func[x].opcode) == 0)
return (func[x].f);
}
return (NULL);
}
/**
 * sserror - for errors
 * @nline: for line number
 * @fun: pointer
 * Return: EXIT_FAILURE
 */
int sserror(unsigned int nline, char *fun)
{
fprintf(stderr, "L%u: can't %s, stack too short\n", nline, fun);
return (EXIT_FAILURE);
}
