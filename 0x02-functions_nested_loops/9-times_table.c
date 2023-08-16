#include "main.h"
/**
 * times_table - multiply 9 time table
 * _putchar: print char
 *
 */
void times_table(void)
{
int i = 0;
int j = 0;
int c = 0;
int first = 0;
int last = 0;
while (i <= 9)
{
while (j <= 9)
{
c = i * j;
if (c > 9)
{
first = c / 10;
_putchar(first + '0');
last = c % 10;
_putchar(last + '0');
if (j == 9)
break;
_putchar(44);
_putchar(32);
}
else
{
_putchar(32);
_putchar(c + '0');
if (j == 9)
break;
_putchar(44);
_putchar(32);
}
j++;
}
_putchar('\n');
i++;
j = 0;
}
}
