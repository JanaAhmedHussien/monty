#include "monty.h"
/**
 * _pall - prints the stack
 * @first: stack head
 * @count: no used
 * Return: no return
*/
void _pall(stack_t **first, unsigned int count)
{
	stack_t *f;
	(void)counter;

	f = *first;
	if (f == NULL)
		return;
	while (f)
	{
		printf("%d\n", f->x);
		f = f->next;
	}
}

/**
 * _push - add node to the stack
 * @first: stack head
 * @count: line_number
 * Return: no return
*/
void _push(stack_t **first, unsigned int count)
{
	int x, g = 0, flag = 0;

	if (var.arg)
	{
		if (var.arg[0] == '-')
			g++;
		for (; var.arg[g] != '\0'; g++)
		{
			if (var.arg[g] > 57 || var.arg[g] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(var.file);
			free(var.index);
			free_s(*first);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(var.file);
		free(var.index);
		free_s(*first);
		exit(EXIT_FAILURE); }
	x = atoi(var.arg);
	if (var.lifi == 0)
		add_n(first, x);
	else
		add_q(first, x);
}
