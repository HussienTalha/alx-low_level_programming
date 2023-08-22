#include "main.h"
/**
 * _strcpy - copy string to another array
 * @dest: pointer to destination array
 * @src: pointer to the source
 * Return: pointer to the dest array
 */
char *_strcpy(char *dest, char *src)
{
int a;
for (a = 0; src[a] != '\0'; a++)
{
dest[a] = src[a];
}
return (dest);
}
