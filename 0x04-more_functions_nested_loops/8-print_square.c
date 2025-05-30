#include "main.h"
/**
 *print_square - print square of #
 *@n: size of the square
 *Return: void
 */
void print_square(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
