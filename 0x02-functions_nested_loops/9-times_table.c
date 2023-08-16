#include "main.h"
#include <stdio.h>
/**
 * times_table - 9 times table,
 *
 *
 *
 *
 */
void times_table(void)
{
int i = 0;
int j = 0;
int c = 0;
while (i <= 9)
{
while (j <= 9)
{
c = i * j;
if (c > 9)
{
if (j != 9)
printf("%d, ", c);
else
{
printf("%d\n", c);
break;
}
}
else if (c <= 9)
{
if (j != 9)
printf(" %d, ", c);
else
{
printf(" %d\n", c);
break;
}
}
j++;
}
j = 0;
i++;
}
}
