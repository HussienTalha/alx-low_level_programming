#include "main.h"
/**
 * puts_half - prints the second half of string
 * @s: pointer to the first charchter in the string
 * Return: void
 */
void puts_half(char *s)
{
	int l;

	for (l = 0; *s != '\0'; l++)
		s++;
	if (l % 2 == 0)
		s = s - (l / 2);
	else
		s = s - ((l - 1) / 2);
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
