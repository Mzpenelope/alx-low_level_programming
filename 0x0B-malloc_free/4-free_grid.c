#include "main.h"
#include <stdlib.h>
/**
  * free_grid - frees a 2D grid created in alloc_grid.
  * @grid: pointer to pointer.
  * @height: height of grid.
  * Return: void.
  */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
