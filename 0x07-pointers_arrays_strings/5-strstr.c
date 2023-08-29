#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: pointer to string
 * @needle: pointer to substring
 * Return: pointer to the first occurence of needle in haystack
 * or null
 *
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j;
int n = 0;
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == *needle)
{
for (j = 0; needle[j] != '\0' && haystack[i] == needle[j]; j++)
{
i++;
n++;
}
i = i - n;
if (needle[j] == '\0')
break;
}
}
if (haystack[i] == '\0')
return (0);
else
return (haystack + i);
}
