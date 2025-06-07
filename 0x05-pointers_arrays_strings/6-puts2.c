#include "main.h"
/**
 * puts2 - takes array of a charcters puts to std followed by newline
 *
 * @s: pointer to the first charcter of the array
 * Return: void
 */
void puts2(char *s)
{
	int l, i;

	l = 0;
	while (*s != '\0')
	{
		l++;
		s++;
	}
	s = s - l;
	for (i = 0; i < l; i+=2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
