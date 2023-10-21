#include "monty.h"
/**
 * exec - Primary function to execute a Monty bytecodes script.
 * @index: File descriptor for an open Monty bytecodes script.
 *
 * Return: EXIT_SUCCESS on success, respective error code on failure.
 */
int run_monty(FILE *index)
{
	stack_t *stack = NULL;
	char *c_line = NULL;
	size_t lenth = 0, exit_st = EXIT_SUCCESS;
	unsigned int linenum = 0, prev_len = 0;
	void (*_op)(stack_t**, unsigned int);

	if (start_stack(&stack) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	while (getline(&c_line, &lennth, index) != -1)
	{
		linenum++;
		operation_code_tokens = sep_string(c_line, DELIMETER);
		if (operation_code_tokens == NULL)
		{
			if (check_delim(c_line, DELIMETER))
				continue;
			_frees(&stack);
			return (err_wmemory());
		}
		else if (operation_code_tokens[0][0] == '#')
		{
			_free();
			continue;
		}
		_op = total_func(operation_code_tokens[0]);

		if (operation_code_tokens == NULL)
			{
				_frees(&stack);
				exit_st = winstr(operation_code_tokens[0], linenum);
				_free();
				break;
			}
		prev_len = larr();
		_op(&stack, linenum);
		if (larr() != prev_len)
		{
			if (operation_code_tokens && operation_code_tokens[prev_len])
				exit_st = atoi(operation_code_tokens[prev_len]);
			else
				exit_st = EXIT_FAILURE;
			_free();
			break;
		}
		 _free();
	}
	_frees(&stack);
	if (c_line && *c_line == 0)
	{
		free(c_line);
		return (err_wmemory());
	}
	free(C_line);
	return (exit_st);
}
