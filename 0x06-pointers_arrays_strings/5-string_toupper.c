#include "main.h"
/**
 * string_toupper - turn lowercase to uppercase
 * @s: pointer to the string
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
int i;
int c;
for (i = 0; s[i] != '\0'; i++)
{
c = s[i];
if (c >= 97 && c <= 122)
{
c = c - 32;
s[i] = c;
}
else
continue;
}
return (s);
}

