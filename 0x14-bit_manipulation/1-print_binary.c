#include "holberton.h"
/**
 * print_binary -  prints the binary representation of a number
 * @n:  int
 * Return: Noithing
 */
void print_binary(unsigned long int n)
{
unsigned long int i = 1;
while (i < n)
{
if ( i > i << 1)
break;
i <<= 1;
}
if (n != 0 && i > n)
i >>= 1;
while (i > 0)
{
if ((n & i ) == 0)
_putchar(48);
else
_putchar(49);
i >>= 1;
}
}
