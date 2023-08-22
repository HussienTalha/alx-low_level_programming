#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string
 *
 */
void puts2(char *str)

{
int len = 0;
int i = 0;
while (*str != '\0')
{
len++;
str++;
}
str = str - (len);
while (i < len)
{
_putchar(*str);
i += 2;
str += 2;
}
_putchar('\n');
}

