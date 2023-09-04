#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the 2d
 * @grid: 2d array
 * @height: heigt of the array
 * Return: null
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
