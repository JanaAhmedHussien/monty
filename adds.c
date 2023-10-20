#include "monty.h"
/**
 * add_n - add node to the head stack
 * @first: head of the stack
 * @x: new_value
 * Return: no return
*/
void add_n(stack_t **first, int x)
{

	stack_t *new_n, *temp;

	temp = *first;
	new_n = malloc(sizeof(stack_t));
	if (new_n == NULL)
	{ printf("Error\n");
		exit(0); }
	if (temp)
		temp->prev = new_n;
	new_n->x = x;
	new_n->next = *first;
	new_n->prev = NULL;
	*first = new_n;
}

/**
 * add_q - add node to the tail stack
 * @x: new_value
 * @first: head of the stack
 * Return: no return
*/
void add_q(stack_t **first, int x)
{
	stack_t *new_n, *temp;

	temp = *first;
	new_n = malloc(sizeof(stack_t));
	if (new_n == NULL)
	{
		printf("Error\n");
	}
	new_n->x = x;
	new_n->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*first = new_n;
		new_n->prev = NULL;
	}
	else
	{
		temp->next = new_n;
		new_n->prev = temp;
	}
}
