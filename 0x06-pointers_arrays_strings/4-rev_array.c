#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: pointer to the array
 * @n: number of element in the array
 *
 *
 */
void reverse_array(int *a, int n)
{
int tmp;
int i;
int idx = n - 1;
for (i = 0; i <= (n / 2); i++)
{
if (n == 0)
break;
else
{
tmp = a[i];
a[i] = a[idx];
a[idx] = tmp;
idx--;
}
}
}
