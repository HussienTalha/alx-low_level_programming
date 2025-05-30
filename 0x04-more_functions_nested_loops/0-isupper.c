#include "main.h"
/**
 *_isupper - check if the char is upper
 *@n: the char to be checked
 *Return: 1 if upper 0 if lower
 *
 */
int _isupper(int n)
{
	if (n >= 65 && n <= 90)
		return (1);
	else
		return (0);
}
