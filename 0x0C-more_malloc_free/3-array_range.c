#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: int
 * @max: int
 * Return:  void
*/
int *array_range(int min, int max)
{
int i = 0;
int *arr;
if (min > max)
return (NULL);
arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);
for (; min <= max; i++, min++)
arr[i] = min;
return (arr);
}
