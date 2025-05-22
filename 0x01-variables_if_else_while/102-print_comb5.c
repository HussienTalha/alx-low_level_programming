#include <stdio.h>
/**
 *main - entry to the program
 *
 *Return: 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = i; k <= 9; k++)
			{
				if (k == i)
					l = 0;
				else
					l = j + 1;
				for (l = l; l <= 9; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(32);
					putchar(k + '0');
					putchar(l + '0');
					if (i == 9 && j == 8 && k == 9 && l == 9)
						continue;
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
