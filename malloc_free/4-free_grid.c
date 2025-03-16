#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  frees an array
 *
 * @grid: a pointer to a 2 dimensional grid
 * @height: an integer
 *
 * free space
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
