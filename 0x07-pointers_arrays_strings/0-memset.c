#include "main.h"
/**
 * _memset - fill n bytes from the memeory pointed to by s whith constant char
 * @s: pointer to the first place in the memory
 * @b: char that will fill the memory
 * @n: number of bytes to be filled
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
		int i;

		for (i = 0; i < n ; i++)
		{
			s[i] = b;
		}
		return (s);
}
