#include "main.h"
/**
 *_isdigit - check if digit is numiric
 *@c: digit to be checked
 *Return: 1 if numiric 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
