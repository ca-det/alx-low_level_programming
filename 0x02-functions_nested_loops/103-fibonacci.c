#include <stdio.h>
/**
 * main-fibonacci even sum print
 * Return: Nothing
*/
int main(void)
{
int p = 0;
long a = 1, b = 2, add = b;
while (a + b < 4000000)
{
b +=  a;
if (a % 2 == 0)
add += b;
a = b - a;
++p;
}
printf("%ld\n", add);
return (0);
}
