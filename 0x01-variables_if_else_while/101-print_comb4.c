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
	int k;

	for (k = 0; k <= 7; k++)
	{
		for (j = k + 1; j <= 8; j++)
		{
			for (i = j + 1; i <= 9; i++)
			{
				if (i == j)
					continue;
				putchar(k + '0');
				putchar(j + '0');
				putchar(i + '0');
				if (i == 9 && j == 8 && k == 7)
					continue;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
