#include "main.h"
/**
 *print_diagonal - print diaonal line
 *@n: number of charchter to be printed
 *Return: void
 *
 */
void print_diagonal(int n)
{
	int i, j;

	for (j = 1; j <= n; j++)
	{
		for (i = 1; i < j; i++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
