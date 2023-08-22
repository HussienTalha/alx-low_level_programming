#include "main.h"
#include <stdio.h>
/**
 * rev_string - print string in reverse
 * @s: string to be printed
 *
 *
 */
void rev_string(char *s)
{
int len;
char tmp[900];
int i;
len = 0;
i = 0;
while (*s != '\0')
{
len++;
s++;
}
s--;
while (i <= (len - 1))
{
tmp[i] = *s;
s--;
i++;
}
tmp[i] = '\0';
i = 0;
s++;
while (i <= (len))
{
*s = tmp[i];
s++;
i++;
}
}
