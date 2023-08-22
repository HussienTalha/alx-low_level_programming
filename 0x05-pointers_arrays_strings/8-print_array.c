#include "main.h"
#include <stdio.h>
/**
 * print_array - print array of integers
 * @a: pointer to an array
 * @n: number of elements in the elements
 *
 *
 */
void print_array(int *a, int n)
{
int i;
for (i = 1; i < n); i++)
{
printf("%d, ", *a);
a++;
}
if (i == n)
printf("%d\n", *a);
else if (n < 0 || n == 0)
printf("\n");
}
