#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a grid ptrs.
 * @grid: double  ptr array.
 * @height: height of the arraay
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
