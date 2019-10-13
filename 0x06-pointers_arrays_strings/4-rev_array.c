#include "holberton.h"
/**
 * reverse_array - the content of an array of integers.
 * @a: pointer to an array of integers
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i;
int b = n - 1;
int count = 0;
for ( ; count < n / 2; count++)
{
i = a[count];
a[count] = a[b];
a[b] = i;
b--;
}
}
