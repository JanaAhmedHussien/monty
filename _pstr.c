#include "monty.h"
/**
 * _pstr - Prints the string contained in a stack_t .
 * @stack: A pointer to the top mode node of a stack_t .
 * @linenum: The current working line number of a Monty bytecodes file.
 */
void _pstr(stack_t **stack, unsigned int linenum)
{
	stack_t *container = (*stack)->next;

	while (container && container->n != 0 && (container->n > 0 && container->n <= 127))
	{
		printf("%c", container->n);
		container = container->next;
	}
	printf("\n");

	(void)linenum;
}
