#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: unsigned int
 * Return:  void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
char *arr;
if (size == 0 || nmemb == 0 )
return (NULL);
arr = malloc(nmemb * size);
if (arr == NULL)
return (NULL);
for (; i < nmemb * size; i++)
arr[i] = 0;
return (arr);
}
