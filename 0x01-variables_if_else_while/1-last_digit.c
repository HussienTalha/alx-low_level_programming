#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - entry to the program
 *
 *
 *Return: void
 */
int main(void)
{
	int n;
	int ld;

	n = rand() - RAND_MAX / 2;
	srand(time(0));
	ld = n % 10;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld < 6 && ld != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	else
		printf("Last digit of %d is %d and is 0\n", n, ld);
	return (0);
}
