#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates the first occurance of char in a string
 * @s: pointer to the string
 * @c: charcther to be matched
 * Return: pointer to first occurance of char c
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
