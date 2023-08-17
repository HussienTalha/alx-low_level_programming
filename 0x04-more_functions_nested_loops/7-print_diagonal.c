#include "main.h"
/**
 * print_diagonal - print \ in diagonal form
 * @n: number of lines
 *
 */
void print_diagonal(int n)
{
int i;
int line = 0;
if (n <= 0)
_putchar('\n');
while (n > 0)
{
for (i = 1; i <= line; i++)
{
_putchar(32);
}
line++;
_putchar(92);
_putchar('\n');
n--;
}
}
