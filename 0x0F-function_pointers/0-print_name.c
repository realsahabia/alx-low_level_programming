#include "function_pointers.h"
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
	f(name);
}
