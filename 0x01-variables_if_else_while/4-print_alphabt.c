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
if (n == 101 || n == 113)
n++;
else
{
putchar(n);
n++;
}
}
putchar('\n');
return (0);
}
