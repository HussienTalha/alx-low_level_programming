#include "main.h"
/**
 *
 *
 *
 */
int guess_sqrt(int n, int i);

int _sqrt_recursion(int n)
{
return (guess_sqrt(n, 0));
}
int guess_sqrt(int n, int i)
{
if (i * i > n)
return (-1);
else if (i * i == n)
return (i);
else
return (guess_sqrt(n, i + 1));
}
