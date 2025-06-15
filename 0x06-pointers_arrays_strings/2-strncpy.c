#include "main.h"
/**
 * _strncpy - copies string to another array
 * @dest: pointer to destination array
 * @src: pointer to the string to be copied
 * @n: number of bytes to be copied
 * Return: pointer to first element of dest array
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' && dest[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n && dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
