#include "holberton.h"
/**
 * print_sign - Entry point
 * @n: is the entry integer
 * Description: prints the sign of a number
 * Return: 1 & + if n>0, 0 & 0 if n=0, -1 & - if n<0, 9
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar (43);
return (1);
}
if (n == 0)
{
_putchar (48);
return (0);
}
if (n < 0)
{
_putchar (45);
return (-1);
}
return (9);
}
