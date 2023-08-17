#include "main.h"
/**
 * print_square - print squares
 * @size: size of square
 * _putchar: prints
 */
void print_square(int size)
{
int k;
int i;
k = size;
if (size <= 0)
{
_putchar('\n');
}
else
{
{
while (size > 0)
{
for (i = 1; i <= k; i++)
{
_putchar('#');
}
_putchar('\n');
size--;
}
}
}
}
