#include "main.h"
/**
 *
 *
 *
 */
void reverse_array(int *a, int n)
{
int tmp;
int i;
int idx = n-1;
for (i = 0; i <= (n / 2); i++)
{
tmp = a[i];
a[i] = a[idx];
a[idx] = tmp;
idx--;
}
}
