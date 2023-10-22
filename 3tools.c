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
 * @opcode: The opcode to match.
 *
 * Return: A pointer to the corresponding function.
 */
void (*total_fun(char *opcode))(stack_t**, unsigned int)
{
instruction_t func[] = {
{"push", _push},
{"pall", _pall},
{"pint", _pint},
{"pop", _pop},
{"swap", _swap},
{"add", _add},
{"nop", _nop},
{"sub", _sub},
{"div", _div},
{"mul", _mul},
{"mod", _mod},
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
