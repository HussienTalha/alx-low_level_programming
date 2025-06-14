#include "main.h"
/**
 * _strncat - concate two strings uses n bytes from second string
 * @dest: destination array
 * @src: string to be appended
 * @n: number of bytes to be used from n
 * Return: pointer to first element of dest array
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; *dest != '\0'; len++)
		dest++;
	for (i = 0; i < n && *src != '\0'; i++)
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
