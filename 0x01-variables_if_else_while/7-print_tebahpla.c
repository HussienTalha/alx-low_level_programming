#include <stdio.h>
/**
 * main - entry point to the code
 *
 * Return: always return 0
 *
 */
int main(void)
{
int n = 122;
while (n >= 97)
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}