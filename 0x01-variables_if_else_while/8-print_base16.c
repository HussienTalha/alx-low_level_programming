#include <stdio.h>
/**
 *main - entry to the program
 *
 *
 *Return: void
 */
int main(void)
{
	char i;

	for (i = 48; i < 58; i++)
		putchar(i);
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
