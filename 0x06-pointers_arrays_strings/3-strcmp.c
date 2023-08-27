#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: first string
 * @s2: second string
 * Return: return the comparsion between the length of s1 and s2
 *
 *
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
if (i < j)
return (-15);
else if (i == j)
return (0);
else
return (15);
}
