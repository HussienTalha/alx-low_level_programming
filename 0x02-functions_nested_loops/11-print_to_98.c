#include "main.h"
#include <stdio.h>
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
int r = n + 48;
putchar(48 + r);
if (n == 98)
break;
putchar(44);
putcahrr(32);
r++;
}
}
if (n > 98)
{
while (n > 98)
{
int y = n + 48;
putchar(y);
if (n == 98)
break;
putchar(44);
putchar(32);
n--;
}
}
}
