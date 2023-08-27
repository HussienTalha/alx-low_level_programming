#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: string
 * Return: pointer to string
 *
 */
char *leet(char *s)
{
int i, j;
char leet[25] = {'a', '4', 'A', '4', 'e', '3', 'E', '3', 'o', '0'
	, 'O', '0', 't', '7', 'T', '7', 'l', '1', 'L', '1'};
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j <= 19; j += 2)
{
if (s[i] == leet[j])
s[i] = leet[j + 1];
}
}
return (s);
}
