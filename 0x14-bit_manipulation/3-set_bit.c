#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n:int
 * @index: start from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int i = 0;
unsigned int nb = 1;
while (i < index)
{
if (nb > nb << 1)
return (-1);
nb <<= 1;
i++;
}
*n = nb | *n;
return (1);
}
