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
printf("%d\n", n);
if (n == 98)
{
putchar('\n');
break;
}
putchar(44);
putchar(32);
n++;
}
}
if (n > 98)
{
while (n > 98)
{
printf("%d", n);
if (n == 98)
{
putchar('\n');
break;
}
putchar(44);
putchar(32);
n--;
}
}
}
