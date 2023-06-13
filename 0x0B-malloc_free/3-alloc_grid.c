#include <stdlib.h>
#include "main.h"
/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of th 2D array
 * @height: height of the 2D array
 * Return: pointer to the created 2D array (Success) or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **grid_array;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid_array = (int **) malloc(sizeof(int *) * height);

	if (grid_array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid_array[i] = (int *) malloc(sizeof(int) * width);
		if (grid_array[i] == NULL)
		{
			free(grid_array);
			for (j = 0; j <= i; j++)
				free(grid_array[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid_array[i][j] = 0;
		}
	}
	return (grid_array);
}
