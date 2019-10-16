#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: int
 * @height: int
 * Return:  void
*/

void free_grid(int **grid, int height)
{
int count = 0;
for (; count < height; count++)
free(grid[count]);
free(grid);
}
