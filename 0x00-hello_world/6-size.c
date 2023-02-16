#include <stdio.h>
/**
 * main- A program that prints the size of data types
 *
 * Return: 0 (Success)
 */

int main(void)
{
	long long a;
	long b;

	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("Size of long int: %ld byte(s)\n", sizeof(b));
	printf("Size of long long int: %ld byte(s)\n", sizeof(a));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
	return (0);
}
