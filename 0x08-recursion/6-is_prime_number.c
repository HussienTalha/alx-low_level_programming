#include "main.h"

int prime(int n, int i);
/**
 * is_prime_number - checks if the number is prime or not
 * @n: the number
 * Return: 0 if prime 1 if not prime
 *
 *
 *
 */
int is_prime_number(int n)
{
return (prime(n, 2));
}
/**
 * prime - divide the number on different number to check
 * @n: number
 * @i: iterator
 * Return: 0 if prime 1 if not prime
 */
int prime(int n, int i)
{
if (n < 2)
return (0);
else if (n % i == 0 && i != n)
return (0);
else if (n % i == 0 && i == n)
return (1);
else
i++;
return (prime(n, i));
}
