#include "main.h"
int guess_prime(int i, int n);
/**
 * is_prime_number - check if the number is prime
 * @n: number given my main function
 * Return: 1 if prime 0 if not
 *
 */

int is_prime_number(int n)
{

	return (guess_prime(2, n));
}
int guess_prime(int i, int n)
{
if (i == n)
	return (1);
else if (n < 2 || n % i == 0)
	return (0);
else
	guess_prime(i + 1, n);
}
