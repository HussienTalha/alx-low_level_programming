#include "main.h"
/**
 * rev_string - reverse the string
 * @s: pointer to the first element of the string
 * Return: void
 */
void rev_string(char *s)
{
	char arr[900];
	int len;
	int i;

	len = 0;
	for (i = 0; *s != '\0'; i++)
	{
		arr[i] = *s;
		len++;
		s++;
	}
	i++;
	arr[i] = '\0';
	for (i = 0; arr[i] != '\0'; i++)
	{
		*s = arr[i];
		s--;
	}
}
