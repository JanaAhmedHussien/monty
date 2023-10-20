#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @x: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int x;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct opcode_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct opcode_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} opcode_t;

/**
 * struct var_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct var_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  var_t;
extern var_t var;

void add_n(stack_t **first, int x);
void add_q(stack_t **first, int x);
int exe(char *index, stack_t **stack, unsigned int count, FILE *file);
void free_s(stack_t *first);
void _pall(stack_t **first, unsigned int count);
void _push(stack_t **first, unsigned int count);

#endif
