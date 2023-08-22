#include "main.h"
/**
 * puts_half - prints half of string
 * @str: string
 */
void puts_half(char *str)
{
int len = 0;
int half = 0;
while (*str != '\0')
{
len++;
str++;
}
str = str - len;
if (len % 2 == 0)
half = len / 2;
else
half = ((len + 1) / 2) ;
str = str + half;
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
