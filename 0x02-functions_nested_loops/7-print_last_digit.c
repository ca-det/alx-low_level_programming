#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 * print_last_digit-print all the last ones
 *
 *Return: the last digits
*/
int print_last_digit(int p)
{
int m;

m = p % 10;
if (m < 0)
{
m *= -1;
}
_putchar(m + '0');

return (0);
}
