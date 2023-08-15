#include "main.h"
/**
 * print_alphabet_x10 - print alphbets ten times
 *
 *
 */
void print_alphabet_x10(void)
{
int i = 97;
int j = 0;
while (j < 10)
{
while (i < 123)
{
_putchar(i);
i++;
}
_putchar('\n');
j++;
i = 97;
}
}
