#include "monty.h"
/**
* free_s - frees a doubly linked list
* @first: head of the stack
*/
void free_s(stack_t *first)
{
	stack_t *temp;

	temp = first;
	while (first)
	{
		temp = first->next;
		free(first);
		first = temp;
	}
}
