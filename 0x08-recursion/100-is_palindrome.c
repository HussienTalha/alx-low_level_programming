#include "main.h"
int palindrome(char *s, int i, int len);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (_strlen_recursion(s) == 0)
		return (1);
	return (palindrome(s, 0, _strlen_recursion(s)));
}
/**
 * palindrome - Checks if a string is a palindrome recursively
 * @s: The string to check
 * @i: The index of the first character to compare
 * @len: The length of the string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	else if (i >= len)
		return (1);

	palindrome(s, i + 1, len - 1);
}
