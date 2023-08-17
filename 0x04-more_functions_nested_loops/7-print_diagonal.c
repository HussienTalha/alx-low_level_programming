#include "main.h"
/**
 * print_diagonal - print \ in diagonal form 
 *
 *
 */
void print_diagonal(int n)
{
int i;
int line = 0;
while (n > 0)
{
for (i = 1; i <= line; i++)
{
_putchar(' ');
}
line++;
_putchar('\\');
_putchar('\n');
n--;
}
if (n <= 0)
_putchar('\n');
}
