#include <stdio.h>
/**
 *main - entry to the program
 *
 *
 *Return: void
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
		putchar(n);
	for (n = 65; n <= 90; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
