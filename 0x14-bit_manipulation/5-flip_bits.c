#include "holberton.h"
/**
 * flip_bits - number of bits to flip to get from one number to another.
 * @n: number
 * @m: number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i = 0;
unsigned int p;
p = n ^ m;
while (p)
{
i += p & 1;
p >>= 1;
}
return (i);
}
