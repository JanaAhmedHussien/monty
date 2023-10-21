#include "monty.h"
/**
 * winstr - unknown operations
 * @operation_code: result in problem
 * @nline: which line cause problem
 * Return: EXIT_FAILURE
 */
int winstr(char *operation_code, unsigned int nline)
{
fprintf(stderr, "L%u: unknown instruction %s\n", nline, operation_code);
return (EXIT_FAILURE);
}
/**
 * warg - wrong pushed argument
 * @nline: which line caused error
 * Return: EXIT_FAILURE
 */
int warg(unsigned int nline)
{
fprintf(stderr, "L%u: usage: push integer\n", nline);
return (EXIT_FAILURE);
}

