#include "main.h"

int helper_func(int num, int div);
int is_prime_number(int n);

/**
 * helper_func - checks if a number is divisible.
 * @num: the number to be checked.
 * @div: The divisor.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int helper_func(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}

	if (div == num / 2)
	{
		return (1);
	}

	return (helper_func(num, div + 1));
}

/**
 * is_prime_number - serves as wrapper function to store the helper function.
 * @n: the number to be checked.
 * Return: result of the helper function.
 */

int is_prime_number(int n)
{
	return (helper_func(n, 2));
}
