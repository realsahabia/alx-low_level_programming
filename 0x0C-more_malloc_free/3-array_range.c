#include "main.h"
#include <stdlib.h>

/**
 * *array_range - the function creates an array of integers
 * @min: the minimum range of values stored
 * @max: the maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, range_size;

	if (min > max)
	{
		return (NULL);
	}

	range_size = max - min + 1;

	ptr = malloc(sizeof(int) * range_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		ptr[i] = min++;
	}

	return (ptr);
}
