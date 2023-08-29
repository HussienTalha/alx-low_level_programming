#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 */
void print_diagsums(int *a, int size)
{
int i, diag1, diag2, sum1, sum2; 
sum1 = sum2 = diag1 = diag2 = 0;
for (i = 0; i < size; i++)
{
diag1 = (i * size) + i;
sum1 += a[diag1];
diag2 = (i * size) + (size - 1 - i);
sum2 += a[diag2];
}
printf("%d, %d\n", sum1, sum2);
}
