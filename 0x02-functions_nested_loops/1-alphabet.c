#include "main.h"
/**
 *print_alphabet - prints lowercase alpahbets followed by newline
 *
 *Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
