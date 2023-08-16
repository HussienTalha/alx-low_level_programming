#include "main.h"
/**
 * print_last_digit - print the last digit of number
 * @n: argument 1 get its last digit
 * Return: return value of last digit and 0
 */
int print_last_digit(int n)
{
n = n % 10;
if (n > 0)
{
_putchar('0' + n);
return (n);
}
else
{
n = -n;
_putchar('0' + n);
return (n);
}
return (0);
}
