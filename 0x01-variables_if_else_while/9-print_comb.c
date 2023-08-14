#include <stdio.h>
/**
 * main - entry point
 *
 *
 * Return: always return 0
 */
int main(void)
{
int n;
putchar(48);
n = 49;
while (n < 58)
{
putchar(',');
putchar(' ');
putchar(n);
n++;
}
putchar('\n');
return (0);
}
