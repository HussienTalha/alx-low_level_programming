#include "main.h"
/**
 * times_table - prints the time 9 table
 * Return: void
 *
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			n = i * j;
			_putchar(',');
			_putchar(' ');
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}

	return (void);
}
