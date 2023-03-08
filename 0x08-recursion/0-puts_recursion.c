#include "main.h"
#include <stdio.h>
void  _puts_recursion(char *s)
{
int a;

while (s[a] != '\0')
{
_putchar(s[a]);
a++;
}
_putchar('\n');
}
