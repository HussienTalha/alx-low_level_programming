#include <stdio.h>
#include <string.h>
/**
 * main - print all arguments passed to main
 * @argc: counter to arguments passed to main
 * @argv: array of pointers to strings passed to main
 * Return: return 0 it program runs successfully
 *
 */
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
