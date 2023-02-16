#include <stdio.h>
/**
 * main - my C program that prints the size of various data types
 * code by sahabia
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of b int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of c long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of d long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of e float: %lu byte(s)\n", (unsigned long)sizeof(e));

	return (0);
}
