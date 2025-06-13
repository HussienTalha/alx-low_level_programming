#include <stdio.h>
#include "main.h"
/**
 * print_array - print n numbers of an array
 * @a: pointer to the first element in the array
 * @n: number of element to be printed
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			break;
		printf(", ");
		i++;
	}
	putchar('\n');
}
