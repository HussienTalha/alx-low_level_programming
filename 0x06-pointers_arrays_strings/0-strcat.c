#include "main.h"
/**
 * _strcat - concate two strings append the second the first
 * @dest: destination array
 * @src: string to be appended
 * Return: pointer to first element of dest array
 */
char *_strcat(char *dest, char *src)
{
	int len;

	for (len = 0; *dest != '\0'; len++)
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		len++;
	}
	*dest = '\0';
	dest = dest - len;
	return (dest);
}
