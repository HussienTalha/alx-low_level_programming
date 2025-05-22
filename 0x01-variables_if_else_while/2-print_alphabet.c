#include <stdio.h>
/**
 *main - entry to the program
 *@n: charchter equivalent in ASCII
 *
 *Return: void
 */
int main(void)
{
	char n;

	for (n = 97; n <= 122; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
