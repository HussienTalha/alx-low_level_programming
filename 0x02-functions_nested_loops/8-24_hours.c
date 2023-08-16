#include "main.h"
/**
 * jack_bauer - prints time
 *
 *
 */

void jack_bauer(void)
{
int i = 0;
int j = 0;
int k = 0;
int l = 0;
while (i <= 2)
{
while (j <= 4)
{
while (k <= 6)
{
while (l <= 9)
{
_putchar('0' + i);
_putchar('0' + j);
_putchar(58);
_putchar('0' + k);
_putchar('0' + l);
_putchar('\n');
l++;
}
k++;
}
j++;
}
i++;
}
}
