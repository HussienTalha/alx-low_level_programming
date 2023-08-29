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
char *result;
result = 0;
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[i] == *needle)
for (j = 0; needle[j] != '\0' && haystack[i + j] == needle[j]; j++)
{
continue;
}
if (needle[j] == '\0')
{
result = &haystack[i];
break;
}
}
return (result);
}
