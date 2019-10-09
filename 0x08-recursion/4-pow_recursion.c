#include "holberton.h"
/**
 * _pow_recursion - prints a string, followed by a new line
 * @x: base
 * @y: exponent
 * Return: result of x pow y
*/

int _pow_recursion(int x, int y)
{
int number=0;
if (y == 0)
return (1);
if (y < -1)
return (-1);
if (y <= 1)
return (x);
y--;
number = x * _pow_recursion(x, y);
return (number);
}
