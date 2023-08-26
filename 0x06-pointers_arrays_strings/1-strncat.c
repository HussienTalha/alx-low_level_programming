#include "main.h"
/**
 * _strncat - concatenate n bytes from src to dest
 * @dest: destination array
 * @src: source array
 * @n: number of bytes from src array
 * Return: pointer to dest array
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
while (dest[i] != '\0')
i++;
for (j = 0; j < n; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
