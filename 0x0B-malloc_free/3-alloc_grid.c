#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: If width or height is 0 or negative, or if memory allocation fails,
 * returns NULL. Otherwise, returns a pointer to the allocated 2D array.
 */
int **alloc_grid(int width, int height)
{
	int row, col, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
			for (col = 0; col < row; col++)
				free(grid[col]);

			free(grid);
			return (NULL);
		}

		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	}

	return (grid);
}
