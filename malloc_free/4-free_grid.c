#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid
*
* @grid: address of the two dimensional grid
*
* @height: height of the grid
*
* Return: Nothing
*/

void free_grid(int **grid, int height)
{
	int y = height;

	if (grid != NULL)
		for (; y >= 0; y--)
			free(grid[y]);

	free(grid);
}
