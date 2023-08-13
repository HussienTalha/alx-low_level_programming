#include <stdio.h>
/**
 * main - entry point to code
 *
 * Return: return 1
 */
int main(void)
{
char arr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int i;
while (arr[i] != '\n')
{
putchar(arr[i]);
i++;
}
putchar('\n');
return (1);
}

