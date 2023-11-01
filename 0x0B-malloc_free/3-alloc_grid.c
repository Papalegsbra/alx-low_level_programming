#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Pointer to the allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);
		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(mee[x]);
			}
			free(mee);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			mee[x][y] = 0;
		}
	}

	return (mee);
}

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL)
	{
		for (int x = 0; x < height; x++)
		{
			free(grid[x]);
		}
		free(grid);
	}
}
