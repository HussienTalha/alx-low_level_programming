#include "main.h"
/**
 * factorial - factorial using recursion
 * @n: number
 * Return: factorial of n multilpied by factorial of n - 1
 * if n = 1 returns 1
 *
 *
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else
{
if (n == 1 || n == 0)
return (1);
else
return (n * factorial(n - 1));
}
}
