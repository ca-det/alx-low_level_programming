#include <stdio.h>
/**
 * main- reversing my alphabets
 *
 * Return: 0 (Success)
*/

int main(void)
{
char new;

for (new = 'z' ; new >= 'a' ; new--)
{
putchar(new);
}
putchar('\n');
return (0);
}

