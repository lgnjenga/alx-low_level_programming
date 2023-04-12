#include "main.h"

/**
 * free_grid - frees 2-D array created by alloc
 *
 * @grid: 2-D grid
 * @height: height dimension of grid
 *
 * Return: nothing (void)
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

