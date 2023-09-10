#include "main.h"

int guess_sqrt(int n, int i);
/**
 * _sqrt_recursion - takes the number pass it to another function and return the square root
 * @n: number
 * Return: square root or -1 if sqrt doesn't exist
 *
 *
 */

int _sqrt_recursion(int n)
{
return (guess_sqrt(n, 0));
}

/**
 * guess_sqrt - tries different numbers to find the sqrt
 * @n: the number 
 * @i: iterator
 * Return: sqrt if found -1 if not
 *
 *
 */
int guess_sqrt(int n, int i)
{
if (i * i > n)
return (-1);
else if (i * i == n)
return (i);
else
return (guess_sqrt(n, i + 1));
}
