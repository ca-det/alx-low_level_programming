#include <stdio.h>
/**
 * main-program body print fibonacci
 * Return: 0 (Success)
*/

int main(void)
{
int i = 0, n = 50;
long t1 = 2, t2 = 1;

while (i < n)
{
if (i == 0)
{
printf("%ld", t2);
}
else if (i == 1)
{
printf(", %ld", t2);
}
else
{
t1 = t1 + t2;
t2 = t1 - t2;
printf(", %ld", t1);
}
i++;
}
putchar('\n');
return (0);

}
