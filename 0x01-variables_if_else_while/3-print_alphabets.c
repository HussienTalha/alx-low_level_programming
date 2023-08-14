#include <stdio.h>
/**
 * main - entry point to the code
 *
 * Return: always return 0
 *
 */
int main(void)
{
int n = 97;
while (n <= 122)
{
putchar(n);
n++;
}
n = 65;
while (n <= 90)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
