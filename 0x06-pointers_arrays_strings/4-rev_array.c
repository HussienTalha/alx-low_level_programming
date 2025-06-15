#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: pointer to first element of array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp, len;

	len = n - 1;
	for (i = 0; i <= len; i++)
	{
		tmp = a[i];
		a[i] = a[len];
		a[len] = tmp;
		len--;
	}
}
