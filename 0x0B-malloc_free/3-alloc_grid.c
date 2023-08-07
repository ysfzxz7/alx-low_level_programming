#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a double ponter aarray.
 * @width: widt of the array
 * @height: hait of the array.
 * Return: 2D array.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, x;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (x = 0; x <= i; x++)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
