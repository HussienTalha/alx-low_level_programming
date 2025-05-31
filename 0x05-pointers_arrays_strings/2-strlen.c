#include "main.h"
/**
 * _strlen - calculates the length of the string
 * @s: pointer to the first element of the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
