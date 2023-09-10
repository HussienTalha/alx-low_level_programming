#include "main.h"
/**
 * _pow_recursion - power using recursion
 * @x: base
 * @y: power
 * Return: result of x power y or -1 if y < 0
 *
 *
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else
{
if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
}
