#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - print to 98
 *@n: the number to begin from
 *Return: void
 **/
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
		printf("%d\n", n);
}
