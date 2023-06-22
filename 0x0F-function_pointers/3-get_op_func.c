#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function pointer that return a pointer
 * to a function.
 * @s: the operator passed as argument to the program.
 *
 * Return: A pointer to other function that executes selection.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
