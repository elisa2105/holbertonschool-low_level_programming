#include "holberton.h"
/**
 * flip_bits - number of bits to flip to get from one number to another.
 * @n: number
 * @m: number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int p;
p = bits(n ^ m);
return (p);
}

/**
 * bits - number of bits to flip to get from one number to another.
 * @x: number
 * Return: number of bits to flip
 */
unsigned int bits(unsigned long x)
{
unsigned int i = 0;
while (x)
{
i += x & 1;
x >>= 1;
}
return (i);
}


