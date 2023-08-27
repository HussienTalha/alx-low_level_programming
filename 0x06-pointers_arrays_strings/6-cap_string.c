#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 * Return: pointer to string
 *
 *
 */
char *cap_string(char *s)
{
int c;
int i;
for (i = 0; s[i] != '\0'; i++)
{
c = s[i + 1];
if (i == 0)
{
if (c >= 97 && c <= 122)
{
c = c - 32;
s[i + 1] = c;
}
}
else
switch (s[i])
{
case ' ': case '\t': case '\n': case ',': case ';': case '.':
case '!': case '?': case '"': case '(': case ')': case '{': case '}':
{
if (c >= 97 && c <= 122)
{
c = c - 32;
s[i + 1] = c;
}
else
continue;
break;
}
default:
continue;
}
}
return (s);
}
