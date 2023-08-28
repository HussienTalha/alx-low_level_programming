#include "main.h"
/**
 * _strchr - locates char in string
 * @s: pointer to string
 * @c: charcter to be located
 * Return: pointer to char or null
 *
 *
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
break;
}
return (s[i]);
}
