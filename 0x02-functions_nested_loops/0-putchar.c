#include "main.h"
/**
 * main : entry point
 * 
 * _putchar : writes the character c to stdout
 * Return: always return 0
 */
int main(void)
{
char str[] = "_putchar\n";
int i = 0;
while ( str[i] != '\n')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
return (0);
}
