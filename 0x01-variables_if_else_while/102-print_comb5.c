#include <stdio.h>
/**
 * main- printing combination of numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
int c = 0;
int f1;
int i2;

int c3;
int fd;
int ie;
while (c <= 98)
{
f1 = (c / 10 + '0');
i2 = (c % 10 + '0');
c3 = 0;
while (c3  <= 99)
{
fd = (c3 / 10 + '0');
ie = (c3 % 10 + '0');
if (c < c3)
{
putchar(f1);
putchar(i2);
putchar(' ');
putchar(fd);
putchar(ie);
if (c != 98)
{
putchar(',');
putchar(' ');
}
}
c3++;
}
c++;
}
putchar('\n');
return (0);
}

