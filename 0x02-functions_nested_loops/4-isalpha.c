#include "main.h"
/**
 *_isalpha - checks for charchters
 *@c: value to be checked
 *Return: 1 if charchter 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && 90))
		return (1);
	else
		return (0);
}
