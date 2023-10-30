#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_grid - Frees 2 dimensional array of integers
 * @grid: grid to be freed
 * @height:h
 */
void free_grid(int **grid, int height)
{
	int rows = 0;

	for (; rows < height; rows++)
		free(grid[rows]);

	free(grid);
}
