#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 * @a: integer
 * @b: integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
