#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid
 * @height: in
 * Return: 0
*/

void free_grid(int **grid, int height)
{
	int u = 0;

	for (; u < height; u++)
		free(grid[u]);
	free(grid);
}
