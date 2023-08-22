#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string
 * @s: string to be printed
 *
 *
 */
void print_rev(char *s)
{
int len;
len = 0;
while (*s != '\0')
{
len++;
s++;
}
s--;
while (len > 0)
{
_putchar(*s);
s--;
len--;
}
_putchar('\n');
}
