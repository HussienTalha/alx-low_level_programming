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
_putchar('0' + i);
while (j <= 4)
{
_putchar('0' + j);
while (k <= 6)
{
_putchar('0' + k);
while (l <= 9)
{
_putchar('0' + l);
l++;
}
k++;
}
j++;
}
i++;
}
}
