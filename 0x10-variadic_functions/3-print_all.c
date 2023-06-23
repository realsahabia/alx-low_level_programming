#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything.
 * @format: types of arguments passed to the function
 *Return: void.
 */
void print_all(const char * const format, ...)
{

	int index = 0;
	char *string, *comma = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", comma, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", comma, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", comma, va_arg(args, double));
					break;
				case 's':
					string = va_arg(args, char *);

					if (!string)
						string = "(nil)";
					printf("%s%s", comma, string);
					break;
			}
		comma = ", ";
		index++;
		}
	}
	printf("\n");
	va_end(args);
}
