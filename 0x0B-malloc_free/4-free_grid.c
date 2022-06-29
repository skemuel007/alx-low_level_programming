#include "main.h"

/**
 *free_grid - frees a 2d array
 *@grid: 1st param
 *@height: 2nd param
 *Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
