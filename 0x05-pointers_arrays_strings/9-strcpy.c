#include "main.h"
/**
 * _strcpy - copy string to another array
 * @dest: pointer to destination array
 * @src: pointer to the source
 * Return: pointer to the dest array
 */
char *_strcpy(char *dest, char *src)
{
int len = 0;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
len++;
}
*dest = '\0';
src = src - len;
dest = src - len;
return (dest);
return (0);
}
