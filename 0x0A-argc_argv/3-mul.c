#include <stdio.h>
#include "main.h"
/**
 * _atoi - progrsm that converts a string to an integer.
 * @s: string to be converted.
 * Return: the integer converted from the string.
 */

int _atoi(char *s)
{
	int counter, d, sum, len, f, digit;

	counter = 0;
	d = 0;
	sum = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (counter < len && f == 0)
	{
		if (s[counter] == '-')
			++d;

		if (s[counter] >= '0' && s[counter] <= '9')
		{
			digit = s[counter] - '0';

			if (d % 2)
				digit = -digit;

			sum = sum * 10 + digit;

			f = 1;

			if (s[counter + 1] < '0' || s[counter + 1] > '9')
				break;

			f = 0;
		}
		counter++;
	}

	if (f == 0)
		return (0);

	return (sum);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");

		return (1);
	}

	num1 = _atoi(argv[1]);

	num2 = _atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
