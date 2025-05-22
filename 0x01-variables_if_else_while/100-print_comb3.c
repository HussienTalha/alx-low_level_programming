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
	int j;

	for (j = 48; j <= 57; j++)
	{
		for (i = 49; i <= 57; i++)
		{
			if (i == j)
				continue;
			if ((j * 100 + i) > (i * 100 + j))
				continue;
			putchar(j);
			putchar(i);
			if (i == 57 && j == 56)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
