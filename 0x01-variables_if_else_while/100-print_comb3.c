#include <stdio.h>
/**
 * main- printing combination of numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
int n;
int o;

for (n = 0; n < 10 ; n++)
{
for (o = 0 ; o < 10 ; o++)
{
if (n != o && n < o)
{
putchar((n % 10) + '0');
putchar((o % 10) + '0');
if (n != 8 || o != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

