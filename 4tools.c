#include "monty.h"
/**
 * _delimeter - is there is delimeter in sent or not
 * @charct: character
 * @delimeter: pointer
 * Return: 1 or 0
 */
int _delimeter(char charct, char *delimeter)
{
int x = 0;
while (delimeter[x])
{
if (delimeter[x] == charct)
return (1);
x++;
}
return (0);
}

