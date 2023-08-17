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
for (c = 1; c <= 10; c++)
{
int i = 0;
int j = 0;
int k = 0;
while (j <= 1)
{
if (j == 0)
k = 0;
else
k = j + 48;
while (i <= 9)
{
_putchar(k);
_putchar(i + 48);
if (i == 4 && j > 0)
break;
i++;
}
if (j > 0 && i == 4)
break;
j++;
i = 0;
}
_putchar('\n');
}
}
