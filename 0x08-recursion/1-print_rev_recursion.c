#include "main.h"
int length(char *s);
void print(char *s, int len);
/**
 * _print_rev_recursion - print string in reverse
 * @s: pointer to string
 *
 */
void _print_rev_recursion(char *s)
{
int len = legth(char *s);
if (*s == '\0')
print(s - 1, len);
else
s++;
_print_rev_recursion
}
/**
 * length - length of string
 * @s: pointer to the string
 * Return: length of string
 */
int length(char *s)
{
int len = 1;
if (*s == '\0')
return (0);
else
s++;
len++;
return (len + length(s));
}
/**
 * print - print string
 * @s: pointer to the last digit of the string
 * @len: string length
 */
print(char *s, int len)
{
if (len == 0)
_putchar('\0');
else
_putchar(*s);
print(s - 1, len - 1);
}
















