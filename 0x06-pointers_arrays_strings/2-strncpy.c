#include "main.h"
/**
 *
 *
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
int len = 0;
while (dest[len] != '\0')
len++;
len = len - 1;
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
if (src[i] == '\0')
dest[i] = src [i];
return (dest);
}
