#include "main.h"
/**
 * more_numbers - print 0-14 10 times
 * _putchar: prints
 *
 *
 */
void more_numbers(void)
{
int c;
int i;
for (i = 1; i <= 10; i++)
{
for (c = 0; c <= 14; c++)
{
if (c >= 10)
_putchar('1');
_putchar(c % 10 + '0');
}
_putchar('\n');
}
}
