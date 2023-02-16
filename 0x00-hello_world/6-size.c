#include <stdio.h>
/**
 * main- A program that prints the size of data types
 *
 * Return: 0 (Success)
 */

int main(void)
{
	printf("Size of char: %zd byte(s)\n", sizeof(char));
	printf("Size of int: %zd byte(s)\n", sizeof(int));
	printf("Size of long int: %zd byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zd byte(s)\n", sizeof(long long int));
	printf("Size of float: %zd byte(s)\n", sizeof(float));
	return (0);
}
