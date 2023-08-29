#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid.
 * @grid: Pointer to the 2D array to be freed.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
	int row;

	if (grid == NULL)
		return;

	for (row = 0; row < height; row++)
		free(grid[row]);

	free(grid);
}
