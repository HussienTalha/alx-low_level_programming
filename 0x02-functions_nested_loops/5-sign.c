#include "main.h"
/**
 * print_sign - takes int return int print sign
 * @n : number to be cheked
 * Return: return 1 or 0 or -1
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar(43);
}
if (n < 0)
{
return (-1);
_putchar(0 + '0');
}
if (n == 0)
{
return (0);
_putchar(45);
}
return (0);
}
