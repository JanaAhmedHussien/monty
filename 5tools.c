#include "monty.h"
#include <stdio.h>
/**
 * perror - Prints pint error messages for empty stacks.
 * @linenum: Line number in Monty bytecodes file where error occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
int p_err(unsigned int linenum)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", linenum);
	return (EXIT_FAILURE);
}

/**
 * poerr - Prints pop error messages for empty stacks.
 * @linenum: Line number in script where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int poerr(unsigned int linenum)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", linenum);
	return (EXIT_FAILURE);
}
/**
 * st_err - Prints monty math function error messages
 *                     for stacks/queues smaller than two nodes.
 * @linenum: Line number in Monty bytecodes file where error occurred.
 * @operator: Operation where the error occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
int st_err(unsigned int linenum, char *operant)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", linenum, operant);
	return (EXIT_FAILURE);
}

