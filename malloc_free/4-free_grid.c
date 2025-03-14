#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - frees a 2d grid previously created by
 * the function.
 * @grid: input pointer to grid or 2d array.
 * @height: height of the 2d array.
 * Return: Void.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
