#include <stdio.h>
/**
 *main - entry to the program
 *
 *Return: void
 */
int main(void)
{
	char n;

	for (n = 122; n >= 97; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
