#include "main.h"
/*
 * print_sign - takes int return int print sign
 * @i: number to be checked
 * Return: 1 if positive -1 if negative 0 if zero
 *
 *
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
