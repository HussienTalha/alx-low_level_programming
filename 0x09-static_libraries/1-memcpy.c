#include "main.h"
/**
 * _memcpy - copy n bytes from src to dest
 * @dest: pointer destination array
 * @src: pointer to source array
 * @n: number of bytes
 * Return: return pointer to dest array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
