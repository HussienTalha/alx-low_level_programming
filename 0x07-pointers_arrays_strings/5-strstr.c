#include "main.h"
#include <stddef.h>
/**
 * _strstr - finds the first occurance of substring needle in string haystack
 * @haystack: string to be searched in
 * @needle: substring to be sarched for in
 * Return: pointer to the begining of the located substring in haystack or NULL
 * if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (; *haystack != '\0'; haystack++)
	{
		if (*haystack != needle[0])
			continue;
		else
		i = 0;
		{
			for (j = 0; haystack[j] == needle[i] && needle[i] != '\0'; j++)
			{
				i++;
			}
			if (needle[i] == '\0')
				return (haystack);
		}
	}
	if (*needle == '\0')
		return (haystack);
	return (NULL);
}
