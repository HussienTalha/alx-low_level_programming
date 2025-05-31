#include "main.h"
/**
 * _puts - prints string to stdo
 * @s: pointer to a char the first element of string
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
