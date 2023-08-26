#include "main.h"
/**
 * _strncpy - copy n byte from string to another
 * @dest: destination array
 * @src: source array
 * @n: number of array
 * Return: return pointer to destination array
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
int len = 0;
while (dest[len] != '\0')
len++;
len = len - 1;
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
for ( ; i < n ;i++)
dest[i] = '\0';
return (dest);
}
