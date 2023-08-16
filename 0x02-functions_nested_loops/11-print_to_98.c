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
if (n <= 98)
{
while (n <= 98)
{
_putchar('0' + n);
if (n == 98)
break;
_putchar(44);
_putchar(32);
n++;
}
}
if (n > 98)
{
while (n > 98)
{
_putchar('0' + n);
if (n == 98)
break;
_putchar(44);
_putchar(32);
n--;
}
}
}
