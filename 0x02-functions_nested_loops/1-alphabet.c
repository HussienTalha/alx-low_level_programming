#include "main.h"
/**
 * print_alphabet - print lower case alphabet
 *
 * _putchar: writes the character c to stdout
 * Return: always return 0
 */
void print_alphabet(void)
{
int i = 97;
while (i < 123)
{
_putchar(i);
i++;
}
_putchar('\n');
}
