#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by
 * s with the constant byte b
 * @s: pointer to memory area
 * @b: constant char
 * @n: number of bytes to be filled
 * Return: pointer to memory area
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
*s = b;
s++;
}
s = s - n;
return (s);
}
