#include "main.h"
/**
 *
 *
 *
 */
void print_alphabet_10x(void)
{
	int i;
	int j;

	for (i = 1; i <=10; i++)
	{
		for (j = 97; j <= 122; j++)
			_putchar(j);
		_putchar('\n');
	}
}
