#include "main.h"
/**
 * _isalpha - checks if char is alpha
 * @c: the char being checked
 * Return: 1 if alpha 0 otherwise
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
return (1);
else if (c >= 97 && c <= 122)
return (1);
else
return (0);
return (0);
}
