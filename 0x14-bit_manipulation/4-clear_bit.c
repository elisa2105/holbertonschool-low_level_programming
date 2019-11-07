#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: int n
 * @index: index
 * Return: converted number, or 0 if char different from 0 or 1 or b null
 */
int clear_bit(unsigned long int *n, unsigned int index)
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
*n &= ~(1 << index);
return (1);
}
