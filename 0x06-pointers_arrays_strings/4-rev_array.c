#include <stdio.h>
#include "main.h"
/**
 * reverse_array - array reverser function
 * reverse_array: reverse that array accordingly
 * @n: parameter 1
 * @a: parameter 2
 * Return: the value ish
*/

void reverse_array(int *a, int n)
{
int i, k = 0;
for (i = n - 1 ; i >= n / 2 ; i--)
{
k = a[n - 1 - i];
a[n - 1 - j] = a[i];
a[i] = k;
}

}

