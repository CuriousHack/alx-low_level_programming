#include "main.h"
#include <stdlib.h>

/**
 *free_grid - function to free 2d array
 *@grid: array to free
 *@height: height of the array
 *Return: 0 Success
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
