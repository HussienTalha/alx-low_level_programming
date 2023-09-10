#include "main.h"
/**
 * _strlen_recursion - length of string using recursion
 * @s: pointer to string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
int len;
s++;
len = 1;
if (*s == ' ')
return (0);
else 
{
if (*s == '\0')
return (len);
else
return (len + _strlen_recursion(s));
}
}
