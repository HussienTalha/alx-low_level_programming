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
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", *a);
a++;
}
printf("%d\n", *a);
}
