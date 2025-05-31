#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer to the first element of string
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = 1;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		_putchar(*s);
		len--;
		s--;
	}
	_putchar('\n');
}
