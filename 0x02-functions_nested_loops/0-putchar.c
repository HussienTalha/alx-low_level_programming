#include "main.h"
/**
 *main - entry to the program
 *_putchar - print a char to stdo
 *@arr[i] - the char that will be printed
 *Return: void
 */
int main(void)
{
	char arr[] = "_putchar\n";
	int i;

	for (i = 0; arr[i] != '\n'; i++)
		_putchar(arr[i]);
	_putchar('\n');
	return (0);
}
