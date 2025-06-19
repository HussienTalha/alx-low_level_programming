#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - locates the first occurance in string of a char from a subset
 * @s: pointer to the string to be checked
 * @accept: pointer to the subset string
 * Return: pointer to the first occurance of char from accept in s or NULL
 * if no match was found
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s != '\0'; s++)
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
	return (NULL);
}
