#include "main.h"
/**
 *print_line - print line
 *
 * @n: number of _
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
