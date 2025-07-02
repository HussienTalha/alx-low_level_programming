#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two digonals of a square matrix
 * @a: pointer to the matrix
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2, diag1, diag2;

	sum1 = sum2 = 0;
	for (i = 0; i < size; i++)
	{
		diag1 = (i * size) + i;
		diag2 = (i * size) + (size - 1 - i);
		sum1 += a[diag1];
		sum2 += a[diag2];
	}
	printf("%d, %d\n", sum1, sum2);
}
