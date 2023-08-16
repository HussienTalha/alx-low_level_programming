#include "main.h"
#include <stdio.h>
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
if (j == 9)
{
putchar(c + '0');
break;
}
else
{
putchar(last + '0');
putchar(44);
putchar(32);
}
}
else
{
putchar(32);
if (j==9)
{
putchar(c + '0');
break;
}
else
_putchar(c + '0');
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
