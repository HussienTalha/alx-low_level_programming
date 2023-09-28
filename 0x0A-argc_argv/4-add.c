#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - add postive numbers
 * @argc: number of arguments entered command line
 * @argv: array of pointers to strings that entered command line
 * Return: 1 if error 0 if successful
 *
 *
 */
int main(int argc, char *argv[])
{
int i, j, sum, x, k;
sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
{
printf("Error\n");
return (1);
}
}
}
for (k = 1; k < argc; k++)
{
x = strtol(argv[k], NULL, 10);
if (x > 0)
sum = sum + x;
}
printf("%d\n", sum);
return (0);
}
