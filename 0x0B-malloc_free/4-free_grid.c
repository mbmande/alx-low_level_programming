#include "main.h"

/**
 * free_grid - previously
 * @grid: pointer
 * @height: numbers of row
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
