#include <stdarg.h>
/**
 * sum_them_all - variadic function that returns sum of
 * its parameters.
 * @n: number of arguments passed.
 *
 * Return: sum of arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		int currentnum = va_arg(args, unsigned int);

		sum += currentnum;
	}

	return (sum);
}
