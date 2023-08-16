#include "main.h"
/**
 * print_to_98 - print untill 98
 *
 * @n: number
 * _putchar: print
 *
 */
void print_to_98(int n)
{
if (r <= 98)
{
while (r <= 98)
{
_putchar('0' + r);
if (r == 98)
break;
_putchar(44);
_putchar(32);
r++;
}
}
if (r > 98)
{
while (r > 98)
{
_putchar('0' + r);
if (r == 98)
break;
_putchar(44);
_putchar(32);
r--;
}
}
}
