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
for (; *s != '\0'; s++)
{
if (*s == c)
break;
}
return (s);
}
