#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - variadic function that prints strings,
 * followed by a new line.
 * @separator: the string to be printed between strings.
 * @n: number of strings passed to the function.
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
