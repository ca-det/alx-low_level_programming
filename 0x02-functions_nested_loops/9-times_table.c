#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 *times_table- printing table 9
 *
*/
void times_table(void)
{
int i, j, tab, u, v;

for (i = 0 ; i <= 9 ; i++)
{
for (j = 0 ; j <= 9 ; j++)
{
tab = i*j;
if (tab  > 9)
{
u = tab % 10;
v = (tab - u) / 10;
_putchar(44);
_putchar(32);
_putchar(v + '0');
_putchar(u + '0');
}
else
{
if (j != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(tab + '0');
}
}
puts(" ");
}

}
