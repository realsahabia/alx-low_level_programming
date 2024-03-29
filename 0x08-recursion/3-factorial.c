#include "main.h"
/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find factorial for.
 * Return: If n > 0 - the factorial of n.
 *         If n < 0 - 1 to indicate an error.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
