#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid_array: grid_array to free
 * @height: height of the grid_array
 */
void free_grid(int **grid_array, int height)
{
	int i;

	if (grid_array == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid_array[i]);

	free(grid_array);
}
