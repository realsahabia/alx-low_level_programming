#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - variadic function that prints numbers,
 * followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
