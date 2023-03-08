#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s)
{
int a;
int b;

while (s[a] != '\0')
{
a++;
b++;
}
printf("%d", b);
return (0);
}
