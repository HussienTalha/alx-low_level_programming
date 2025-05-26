#include "main.h"
#include <limits.h>
/**
 *print_last_digit - print the last digit
 *@n: the number
 *_putchar - prints the last digit of the number
 *
 *Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int l;
	if (n < 0 && n > INT_MIN)
	{
		n = (n * -1);
		l = n % 10;
	}
	else if (n == INT_MIN)
	{
		n = (n + 1) * -1;
		l = (n % 10) + 1;
	}
	else 
		l = n % 10;
	
	_putchar(l + '0');
	return (l);
	return (0);
}
