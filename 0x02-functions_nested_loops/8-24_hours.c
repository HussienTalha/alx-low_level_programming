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
while (j <= 9)
{
while (k <= 5)
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
l = 0;
k++;
}
k = 0;
j++;
}
j = 0;
i++;
if (i == 2 && j == 4)
break;	
}
}
