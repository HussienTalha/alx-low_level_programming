#include "main.h"
/**
 * _strcpy - copy  string to another array
 * @dest: destination array
 * @src: source array
 * Return: pointer to first element of dest array
 */
char *_strcpy(char *dest, char *src)
{
	int l;

	l = 0;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		l++;
	}
	*dest = '\0';
	dest = dest - l;
	return (dest);
}
