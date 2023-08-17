#include "main.h"
/**
 * print_most_numbers - print all digit except 2 and 4
 *
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i == 4 || i == 2)
continue;
_putchar(i + 48);
}
_putchar('\n');
}
