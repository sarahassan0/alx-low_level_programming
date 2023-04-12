#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

