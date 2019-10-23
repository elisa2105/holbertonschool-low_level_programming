#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer.
 * @array: array
 * @size: number of elements in the array
 * @cmp: Pointer to the function
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
for (; i < size; i++)
{
if (cmp(array[i]) != 0)
break;
}
if (i == size)
return (-1);
return (i);
}
