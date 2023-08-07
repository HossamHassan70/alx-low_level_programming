#include "main.h"

/**
* free_grid - A function that frees 2d array.
* @grid: 2d grid.
* @height: height dimension of grid.
* Description: Free memory of grid.
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
