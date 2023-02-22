#include <stdio.h>
/**
 * main-program body print fibonacci
 * Return: 0 (Success)
*/
int main(void)
{

int i, n = 50;
int t1 = 0, t2 = 1;
int followterm = t1 + t2;

for (i = 3 ; i <= n ; ++i)
if (followterm <= 100)
{
{
if (followterm > 1)
{
printf(", ");
}
if (followterm <= 100)
{
printf("%d ", followterm);
t1 = t2;
t2 = followterm;
followterm = t1 + t2;
}
}
}
putchar('\n');
return (0);

}
