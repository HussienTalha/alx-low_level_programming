#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - addition
 * @argc: counter to the arguments
 * @argv: arguments entered main
 * Return: 1 if error 0 if successful
 */
int main(int argc, char **argv)
{
int i;
int x;
int result = 0;
int n = 0;
for (i = 1; i < argc; i++)
{
x = strtol(argv[i], NULL, 10);
if (x == 0 && *argv[i] != '0')
{
n++;
break;
}
result = result + x;
}
if (i == argc)
printf("%d\n", result);
else
printf("Error\n");
return (n);
}
