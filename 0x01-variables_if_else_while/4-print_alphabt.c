#include <stdio.h>
/**
 * main- printing letters exempting q and e
 *
 * Return: 0 (Success)
*/

int main(void)
{
char new;

for (new = 'a' ; new <= 'z' ; new++)
{
if (new != 'e' && new != 'q')
{
putchar(new);
}
}
putchar('\n');
return (0);
}
