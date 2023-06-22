#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that adds two ints
 * @a: first int
 * @b: second int
 *
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - function that finds the dif between two ints.
 * @a: first int
 * @b: second int
 *
 * Return: difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two ints.
 * @a: first int
 * @b: second int
 *
 * Return: product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - function that divides two ints.
 * @a: first int
 * @b: second int
 *
 * Return: the result of a divided by b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that finds the modula of two ints.
 * @a: first int
 * @b: second int
 *
 * Return: the remainder of a divided by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
