#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MY_STACK 0
#define MY_QUEUE 1
#define DELIMETER " \n\t\a\b"
extern char **operation_code_tokens;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*main code*/
void _pall(stack_t **stack, unsigned int nline);
void _push(stack_t **stack, unsigned int nline);
/*file monty*/
int winstr(char *operation_code, unsigned int nline);
int warg(unsigned int nline);
int ferr(char *finput);
int err_wmemory(void);
int err(void);
int sserror(unsigned int nline, char *fun);
/*tools file*/
int nbase(unsigned int n, unsigned int base);
void buffer_nbase(unsigned int n, unsigned  int base, char *buffer, int size);
unsigned int absolute(int j);
char *_integer(int n);
unsigned int larr(void);
int my_stat(stack_t *stack);
void token_err(int coderr);
int _wordc(char *string, char *delimeter);
int _wordl(char *string, char *delimeter);
char *next_w(char *string, char *delimeter);
int _delimeter(char charct, char *delimeter);
void _free(void);
void _frees(stack_t **stack);
int start_stack(stack_t **stack);
int check_delim(char *l, char *delim);
char **sep_string(char *string, char *delimeter);
void (*total_fun(char *functions))(stack_t**, unsigned int);
int exec(FILE *index);

void _pint(stack_t **stack, unsigned int linenum);
int p_err(unsigned int linenum);
void _pop(stack_t **stack, unsigned int linenum);
int poerr(unsigned int linenum);

#endif
