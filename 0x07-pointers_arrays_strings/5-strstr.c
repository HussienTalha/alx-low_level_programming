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
int i;
int j;
char *result;
result = 0;
for (i = 0; haystack[i] != '\0'; i++)
{
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
