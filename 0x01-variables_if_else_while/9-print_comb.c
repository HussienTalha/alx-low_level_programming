#include <stdio.h>
/**
 * main - entry point
 *
 *
 * Return: always return 0
 */
int main(void)
{
int n = 48;
while (n < 58)
{
putchar(n);
putchar(',');
putchar(' ');
n++;
}
putchar('\n');
return (0);
}
