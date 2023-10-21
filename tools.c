#include <stdlib.h>
#include "monty.h"
/**
 * _integer - getting integer
 * @n: number to str
 * Return: char ptr
 */
char *_integer(int n)
{
unsigned int temporary;
char *r;
int l = 0;
long num = 0;
temporary = absolute(n);
l = nbase(temporary, 10);
if (n < 0 || num < 0)
l++;
r = malloc(l + 1);
if (!r)
return (NULL);
buffer_nbase(temporary, 10, r, l);
if (n < 0 || num < 0)
r[0] = '-';
return (r);
}
/**
 * absolute - absolute of the value
 * @j: my value
 * Return: unsigned int absolute
 */
unsigned int absolute(int j)
{
if (j < 0)
return (-(unsigned int)j);
return ((unsigned int)j);
}
/**
 * nbase - for the length of the buffer
 * @n: n to get len
 * @base: base of number
 * Return: nbase
 */
int nbase(unsigned int n, unsigned int base)
{
int l = 1;
while (n > base - 1)
{
l++;
n /= base;
}
return (l);
}
/**
 * buffer_nbase - put into the buffer
 * @n: n convert to string
 * @buffer: to be filled
 * @base: of the number
 * @size: buffer size
 * Return: 0 always(success)
 */
void buffer_nbase(unsigned int n, unsigned  int base, char *buffer, int size)
{
int r, j = size - 1;
buffer[size] = '\0';
while (j >= 0)
{
r = n % base;
if (r > 9)
buffer[j] = r + 87;
else
buffer[j] = r + '0';
n /= base;
j--;
}
}
