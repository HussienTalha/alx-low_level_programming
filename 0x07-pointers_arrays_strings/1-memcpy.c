#include "main.h"
/**
 * _memcpy - copy n bytes of memory from src to dest
 * @dest: the destination array to copy the bytes to
 * @src: the source array to copy from
 * @n: number of bytes to be copied
 * Return: pointer to first place in dest
 */
char *_memcpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return(dest);
}
