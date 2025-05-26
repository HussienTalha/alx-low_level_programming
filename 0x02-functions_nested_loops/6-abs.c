#include "main.h"
#include <stdio.h>
/**
 *_abs - calculates the absolute
 *@n: number to be calculated
 *Return: the absolute value of n
 *
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else if (n < 0)
		return (n * -1);

}
