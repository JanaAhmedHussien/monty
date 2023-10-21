#include "monty.h"
/**
 * _wordc - word count
 * @string: string to count words
 * @delimeter: where to stop
 * Return: word count
 */
int _wordc(char *string, char *delimeter)
{
int c = 0, p = 1, j = 0;
while (*(string + j))
{
if (_delimeter(string[j], delimeter))
p = 1;
else if (p)
{
p = 0;
c++;
}
j++;
}
return (c);
}
/**
 * next_w - to get next word
 * @string: pointer
 * @delimeter: pointer
 * Return: next word
 */
char *next_w(char *string, char *delimeter)
{
int p = 0;
int x = 0;
while (*(string + x))
{
if (_delimeter(string[x], delimeter))
p = 1;
else if (p)
break;
x++;
}
return (string + x);
}
/**
 * _wordl - word length
 * @string: string to get its length
 * @delimeter: where to stop
 * Return: word length
 */
int _wordl(char *string, char *delimeter)
{
int wL = 0, p = 1, x = 0;
while (*(string + x))
{
if (_delimeter(string[x], delimeter))
p = 1;
else if (p)
{
wL++;
}
if (wL > 0 && _delimeter(string[x], delimeter))
break;
x++;
}
return (wL);
}
