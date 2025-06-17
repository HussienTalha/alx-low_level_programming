#include "main.h"
/**
 * leet - take a string encode it to leet
 * @s: pointer to the string
 * Return: pointer to first element of string
 */
char *leet(char *s)
{
int i, j;
char leet[] = {'a', '4', 'A', '4', 'e', '3', 'E', '3', 'o', '0', 'O', '0',
't', '7', 'T', '7', 'l', '1', 'L', '1'};

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; leet[j] != '\0'; j++)
{
if (leet[j] == s[i] && (j % 2 == 0))
{
s[i] = leet[j + 1];
break;
}
}
}
return (s);
}
