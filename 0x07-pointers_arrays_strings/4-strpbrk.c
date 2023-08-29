#include "main.h"
/**
 * _strpbrk - locates the first occurrence in the string s 
 * of any of the bytes in the string accept
 * @s: pointer to string s
 * @accept: pointer to string accept
 * Return: pointer to the byte in s that matches one of the bytes in accept
 *
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (s[i] == accept[j])
break;
}
if (s[i] == '\0')
return (0);
else 
return (s + i);
}
