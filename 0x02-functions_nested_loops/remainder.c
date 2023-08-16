#include <stdio.h>
int main (void)
{
int c = 0 ;
c = -1024 % 10;
c = -c;
printf("%d\n", c);
return (0);
}
