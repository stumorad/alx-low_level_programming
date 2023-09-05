#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - yeb prototype
 * @grid: int
 * @height: int
 * Return: void
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
