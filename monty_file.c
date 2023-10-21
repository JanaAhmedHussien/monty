#include "monty.h"
/**
 * err - return error message
 *
 * Return: EXIT_FAILURE
 */
int err(void)
{
fprintf(stderr, "USAGE: monty file\n");
return (EXIT_FAILURE);
}
/**
 * err_wmemory - return error malloc failed
 *
 * Return: EXIT_FAILURE
 */
int err_wmemory(void)
{
fprintf(stderr, "Error: malloc failed\n");
return (EXIT_FAILURE);
}
/**
 * ferr - when file open there is error
 * @finput: input file
 *
 * Return: EXIT_FAILURE
 */
int ferr(char *finput)
{
fprintf(stderr, "Error: Can't open file %s\n", finput);
return (EXIT_FAILURE);
}
/**
 * sep_string - separte string into words
 * @string: my string i want to seprate
 * @delimeter: where to separate
 * Return: array of pointers
 */
char **sep_string(char *string, char *delimeter)
{
char **w = NULL;
int word_count, lword, num, x = 0;
if (string == NULL || !*string)
return (NULL);
word_count = _wordc(string, delimeter);
if (word_count == 0)
return (NULL);
w = malloc((word_count + 1) * sizeof(char *));
if (w == NULL)
return (NULL);
while (x < word_count)
{
lword = _wordl(string, delimeter);
if (_delimeter(*string, delimeter))
{
string = next_w(string, delimeter);
}
w[x] = malloc((lword + 1) * sizeof(char));
if (w[x] == NULL)
{
while (x >= 0)
{
x--;
free(w[x]);
}
free(w);
return (NULL);
}
num = 0;
while (num < lword)
{
w[x][num] = *(string + num);
num++;
}
w[x][num] = '\0';
string = next_w(string, delimeter);
x++;
}
w[x] = NULL;
return (w);
}

