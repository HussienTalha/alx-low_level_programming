#include "main.h"
/**
 * _strcmp - compare between to strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 = s2, negative if s1 < s2, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
