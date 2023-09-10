#include "main.h"
/**
 * _strlen_recursion - length of string using recursion
 * @s: pointer to string
 *
 */
int _strlen_recursion(char *s)
{
int len;
s++;
len = 1;
if (*s == '\0')
return (len);
else
return (len + _strlen_recursion(s));
}
