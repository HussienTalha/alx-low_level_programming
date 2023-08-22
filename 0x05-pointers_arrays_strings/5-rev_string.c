#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string
 * @s: string to be printed
 *
 *
 */
void rev_string(char *s)
{
int len;
len = 0;
while (*s != '\0')
{
_putchar(*s);
len++;
s++;
}
_putchar('\n');
s--;
while (len > 0)
{
_putchar(*s);
s--;
len--;
}
_putchar('\n');
}
