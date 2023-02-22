#include "main.h"
#include "unistd.h"
#include <stdio.h>

/**
 * natural- printing all natural numbers
 * @n:parameter use
*/

void natural(int n)
{
int i, sum = 0;
while (i < n)
{
if ((i % 3 == 0)  || (i % 5 == 0))
{
sum += i;
}
i++;
}
printf("%d\n", sum);
}
