#include "main.h"
/**
 * _memset - fills b bytes from memeory with constant char
 * @s: pointer to first place in memory to be filled
 * @b: constant char that will fill the memory
 * @n: number of bytes to be filled
 * Return: the value of s
 */
char *_memset(char *s, char b, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
