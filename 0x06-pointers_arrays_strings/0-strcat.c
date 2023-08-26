#include "main.h"
/**
 * _strcat - concatentae two strings
 * @dest: pointer to the destination array
 * @src: pointer to the source array
 * Return: pointer to destination array
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j;
while (dest[i] != '\0')
i++;
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = src[j];
return (dest);
}
