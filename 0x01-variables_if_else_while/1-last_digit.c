#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: always return 0
 *
 *
 */
int main(void)
{
signed int n;
signed int l;
srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;
if (l < 5 && l != 0)
printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
if (l > 5)
printf("Last digit of %d is %d and is greater than 5", n, l);
if (l == 0)
printf("Last digit of %d is %d and is 0 ", n, l);
return (0);
}
