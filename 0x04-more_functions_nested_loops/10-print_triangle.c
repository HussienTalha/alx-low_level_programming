#include "main.h"
/**
 * print_triangle - prints triangle
 *
 * @size: size of square
 * _putchar: prints
 */
void print_triangle(int size)
{
int line;
int i;
int y;
if (size > 0)
{
line = 1;
if (size < 0)
size = -size;
for (i = 1; i <= size; i++)
{
int z;
for (z = 1; z <= (size - line); z++)
{
_putchar(32);
}
for (y = 1; y <= line; y++)
{
_putchar(35);
}
_putchar('\n');
line++;
}
}
else
_putchar('\n');
}
