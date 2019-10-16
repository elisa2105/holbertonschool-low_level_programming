#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid-  returns a pointer to a 2 dimensional array of integers.
 * @width: int width of array
 * @height: int height of array
 * Return:  pointer pointing to a 2-dimensional array
*/

int **alloc_grid(int width, int height)
{
int i = 0;
int j = 0;
int k = 0;
int **arr;
if (width <= 0 || height <= 0)
return (NULL);
arr = malloc(sizeof(int *) * height);
if (arr == NULL)
{
free(arr);
return (NULL);
}
for ( ; i <  height; i++)
{
arr[i] = malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
for (; i >= 0; i--)
free(arr[i]);
free(arr);
return (NULL);
}
}
for (; j < height; j++)
{
for (; k < width; k++)
arr[j][k] = 0;
}
return (arr);
}
