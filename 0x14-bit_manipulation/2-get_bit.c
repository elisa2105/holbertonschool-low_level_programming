#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: start from 0 of the bit
 * Return: value of the bit at index index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i =  0;
unsigned int nb = 1;
while (i < index)
{
if (nb > nb << 1)
return (-1);
nb <<= 1;
i++;
}
if ((nb & n) > 0)
return (1);
else
return (0);
}
