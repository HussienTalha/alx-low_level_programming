#include "main.h"
/**
 *
 *
 *
 */
void print_to_98(int n)
{
if (n <= 98)
{
_putchar('0' + n);
if (n == 98)
break ;
_putchar(44);
_putcahr(32);
n++;
}
if (n > 98)
{
_putchar('0' + n);
if (n == 98)
break ;
_putchar(44);
_putcahr(32);
n--;
}
}
