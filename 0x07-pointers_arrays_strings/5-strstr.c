#include "main.h"
/**
 * _strstr - finds the occurance of substring in a string
 * @haystack: a pointer to the first element of the string
 * @needle: a pointer to the first element of the substring
 * Return: pointer the beginning of the located substring of NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (; *haystack != '\0'; haystack++)
	{
		j = 0;
		for (i = 0; needle[i] == haystack[j] && needle[i] != '\0' ; i++)
		{
			j++;
		}
		if (needle[i] == '\0')
			return (haystack);
	}
	return (0);
}
