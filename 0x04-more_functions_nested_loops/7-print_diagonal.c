#include "main.h"
/**
 * print_digonal - print \ in diagonal form 
 *
 *
 */
void print_digonal(int n)
{
int i;
int line = 0;
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
_putchar('\n');
}
