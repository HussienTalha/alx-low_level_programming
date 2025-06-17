#include "main.h"
/**
 * cap_string - capitalize all the words
 * @s: pointer to the string
 * Return: pointer to the string
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i])
		{
			case ' ': case '\t':
			case '\n': case ',':
			case ';': case '.':
			case '!': case '?':
			case '"': case '(':
			case ')': case '{':
			case '}':
				{
					if (s[i + 1] >= 97 && s[i + 1] <= 122)
					{
						s[i + 1] = s[i + 1] - 32;
					}
				}
		}
	}
	return (s);
}
