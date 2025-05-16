#include <stdio.h>
/**
 * main - entry to the program
 * Return: void
 *
 * */
int main(void)
{
	printf("Size of a char: %ld (s)\n" , sizeof(char));
	printf("Size of an int: %ld (s)\n" , sizeof(int));
	printf("Size of a long int: %ld (s)\n" , sizeof(long int));
	printf("Size of a long long int: %ld (s)\n" , sizeof(long long int));
	printf("Size of a float: %ld (s)\n" , sizeof(float));
	return (0);
}
