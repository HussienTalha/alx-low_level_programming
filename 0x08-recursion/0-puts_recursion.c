#include "main.h"
/**
 * _puts_recursion - puts function using recursion
 * @s: pointer to the string
 *
 *
 *
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}