#include "main.h"
int guess_sqrt(int i, int n);
/**
 * _sqrt_recursion - determines the square root of a number
 * @n: int number
 * @i: normal numbers to determine the root
 * guess_sqrt - guess the square root
 * Return: the value of square root -1 if no natural square root
 *
 */
int _sqrt_recursion(int n)
{
	return (guess_sqrt(0 , n));
}
int guess_sqrt(int i, int n)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) > n || n < 0)
		return (-1);
	else
	guess_sqrt(i + 1, n); 

}
