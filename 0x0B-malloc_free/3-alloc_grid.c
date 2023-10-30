#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * alloc_grid - Creates 2 dimensional array of integers
 * @width: w
 * @height:h
 *
 * Return: pointer to a 2 dimensional array of integers
 *
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid,
		initv = 0,
		rows = 0,
		cols = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Alloc mem for grid cols */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		free(grid);

	for (; rows < height; rows++)
	{
		/* Alloc mem for grid rows */
		grid[rows] = malloc(width * sizeof(int));
		if (grid[rows] == NULL)
		{
			/* Free rows and collumn, return null */
			free(grid[rows]);
			free(grid);
			return (NULL);
		}

		/* Initialize each entry to initv */
		for (; cols < width; cols++)
			grid[rows][cols] = initv;
	}

	return (grid);
}
