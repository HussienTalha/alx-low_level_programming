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
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
