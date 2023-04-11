#include "main.h"

/**
 * free_grid - frees a 2D array
 * @grid: the 2D array.
 * @height: the height of the 2D array
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
