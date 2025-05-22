#include <stdio.h>
/**
 *main - entry to the program
 *
 *
 *Return: void
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
			continue;
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
