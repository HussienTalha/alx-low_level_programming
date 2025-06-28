#include "main.h"
/**
 * print_chessboard - print chessboard
 * @a: pointer to the rows of the 2d array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	j = 0;
	while (j < 8)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[j][i]);
		}
		_putchar('\n');
		j++;
	}
}
