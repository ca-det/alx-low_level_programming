#include "main.h"
/**
 * _isdigit - confirm digits
 * Return: 1 for numbers and 0 for letters
 * @c:parameter
*/

int _isdigit(int c)
{
if (c >= 40 && c <= 57)
{
return (1);
}
return (0);
}
