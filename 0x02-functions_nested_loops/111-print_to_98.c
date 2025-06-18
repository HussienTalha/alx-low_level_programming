#include "main.h"
/**
 *
 *
 */
void print_to_98(int n)
{
	int k;
	k = n;
	while (n < 98 )
	{
		if  (n > 0 && n < 10)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (n >= 10)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (n < 0 && n > -10)
		{
			k = -n;
			_putchar('-');
			_putchar(k + '0');
			_putchar('0');
			_putchar(' ');
		}
		else if (n <= -10)
		{
			k = -n;
			_putchar('-');
			for (i = 0  
		}
}
