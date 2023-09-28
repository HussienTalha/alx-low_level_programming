#include <stdio.h>
/**
 * main - number of arguments passed into it
 * @argc: counter to argrumets passed to program
 * @argv: array of pointers to strings passed to the program
 * Return: always return 0 if program run successfully
 *
 *
 */
int main(int argc, char **argv)
{
if (argv[argc - 1] != NULL)
printf("%d\n", argc - 1);
return (0);
}
