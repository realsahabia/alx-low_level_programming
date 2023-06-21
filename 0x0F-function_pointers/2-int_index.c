#include "function_pointers"
/**
 * int_index - function that searches for an integer.
 * @array: aray to use.
 * @size: size of the array.
 * @cmp: pointer to the function to use.
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (aray == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}