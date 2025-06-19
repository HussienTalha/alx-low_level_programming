#include "main.h"
/**
 * _strspn - calculates the length of initial segment of string
 * that consists only of accept
 * @s: pointer to string
 * @accept: pointer to the subset of charchter the substring consist of
 * Return: length of the perfix substring
 */
int _strspn(char *s, char *accept)
{
int i, j, n;

n = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
break;
}
if (accept[j] != '\0')
n++;
else
return (n);
}
return (n);
}
