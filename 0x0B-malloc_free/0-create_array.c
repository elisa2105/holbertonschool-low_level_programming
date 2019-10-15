#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars with a specific char
 * @c: specific char
 * @size: Size of the array
 * Return: void
*/
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *array;
if (size == 0)
return (NULL);
array = malloc(size);
if (array == NULL)
return (NULL);
for ( ; i < size; i++)
array[i] = c;
return (array);
}
