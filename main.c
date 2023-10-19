#include "main.h"
var_t var = {NULL, NULL, NULL, 0};

/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *index;
	FILE *file;
	size_t size = 0;
	ssize_t rline = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	var.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (rline > 0)
	{
		index = NULL;
		rline = getline(&index, &size, file);
		bus.index = index;
		count++;
		if (rline > 0)
		{
			exe(index, &stack, count, file);
		}
		free(index);
	}
	free_stack(stack);
	fclose(file);
return (0);
}