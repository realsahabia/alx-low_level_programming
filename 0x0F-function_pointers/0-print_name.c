#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - function that takes a char* and function*
 * and prints a name
 * @name: name to parameter to be printed
 * @f: a function pointer to a function that prints a string
 *
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
