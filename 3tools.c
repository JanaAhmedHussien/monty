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
