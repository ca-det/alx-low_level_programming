#include <stdio.h>
/**
 * main- printing upper ana lower case alphabets
 *
 * Return: 0 (Success)
*/

int main(void)
{
char new;

for (new = 'a' ; new <= 'z' ; new++)
{
putchar(new);
}
for (new = 'A' ; new <= 'Z' ; new++)
{
putchar(new);
}

putchar('\n');
return (0);
}

