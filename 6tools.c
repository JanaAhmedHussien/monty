#include "monty.h"
/**
 * ch_err - Prints pchar error messages for empty stacks
 *               empty stacks and non-character values.
 * @linenum: Line number in Monty bytecodes file where error occurred.
 * @sms: error message to print.
 *
 * Return: (EXIT_FAILURE) always.
 */
int ch_err(unsigned int linenum, char *sms)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", linenum, sms);
	return (EXIT_FAILURE);
}
