#include "main.h"
/**
 * puts2 - takes array of a charcters puts to std followed by newline
 *
 * @s: pointer to the first charcter of the array
 * Return: void
 */
void puts2(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	s++;
	_putchar('\n');
}
