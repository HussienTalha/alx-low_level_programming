#include "main.h"
/**
 *
 *
 */
int _strlen_recursion(char *s)
{
	int i;
	if (*(s + 1) == '\0')
	{
		i = 1;
		return(i);
	}
	else
	{
		i = _strlen_recursion(s+1);
		return(i + 1);
	}
}
