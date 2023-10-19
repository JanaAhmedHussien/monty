#include "main.h"
/**
* exe - executes the opcode
* @stack: head linked list - stack
* @count: line_counter
* @file: poiner to monty file
* @index: line content
* Return: no return
*/
int exe(char *index, stack_t **stack, unsigned int count, FILE *file)
{
	opcode_t ops[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int k = 0;
	char *op;

	op = strtok(index, " \n\t");
	if (op && op[0] == '#')
		return (0);
	var.arg = strtok(NULL, " \n\t");
	while (ops[i].opcode && op)
	{
		if (strcmp(op, ops[k].opcode) == 0)
		{	opst[k].f(stack, count);
			return (0);
		}
		k++;
	}
	if (op && ops[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(index);
		free_s(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
