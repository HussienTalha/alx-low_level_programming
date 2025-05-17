#include <stdio.h>
/**
 *main - entry
 *Return: void
 */
int main(void)
{
	int i = 0;
	char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	while (arr[i] != '\0')
	{
		putchar(arr[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
