#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: counter to arguments passed to enviroment
 * @argv: array of pointer to strings passed to program
 * Return: 1 if error 0 if run successfully
 *
 *
 */
int main(int argc, char *argv[])
{
int i;
int x;
int result = 1;
if (argc < 3)
{
printf("ERROR\n");
return (1);
}
for (i = 1; i < 3; i++)
{
x = strtol(argv[i], NULL, 10);
if (x == 0 && *argv[i] != '0')
{
printf("ERROR\n");
return (1);
break;
}
result = result *x;
}
printf("%d\n", result);
return (0);
}