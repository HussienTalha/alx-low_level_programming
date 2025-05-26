#include "main.h"
/**
 *times_table - prints the 9 table
 *Return: void
 *
 */
void times_table(void)
{
	int i, j, n;
	
	for (i = 0; i <= 9; i++)
	{	
		for (j = 0; j <=9; j++)
		{ 
			n = i * j;
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			if (j == 9)
				break;
			_putchar(',');
			_putchar('\t');
		}
		_putchar('\n');

	}
}
