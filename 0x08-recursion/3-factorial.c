#include "main.h"
/**
 * factorial - calculate the factorial
 * @i: the number
 * Return: the value of factorial
 */
int factorial(int n)
{
	int res;
	if (n == 1 || n == 0)
		return(1);
	else if (n < 0)
		return(-1);
	else
	{
		res = n * factorial(n - 1);
		return (res);
	}
}
