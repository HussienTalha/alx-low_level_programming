#include "main.h"
/**
 *print_triangle - print triangle
 *@n: size of the triangle
 *Return: void
 */
void print_triangle(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = n; j > i; j--)
		{
			_putchar(' ');
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
	}
	if (n < 1)
		_putchar('\n');
}
