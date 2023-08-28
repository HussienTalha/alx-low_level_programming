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
for (i = 0; i < n || src[i] != '\0'; i++)
{
dest[i] = src[i];
}
if (src[i] == '\0')
{
for (; i < n; i++)
{
dest[i] = '\0';
}
}
return (dest);
}
