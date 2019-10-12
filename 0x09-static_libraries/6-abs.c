#include "holberton.h"
/**
 * _abs - Entry point.
 * @i: is the entry integer
 * Description: computes the absolute value of an integer.
 * Return: 1 if c is between 96 and 123, 0 other case.
 */
int _abs(int i)
{
int value;
if (i < 0)
{
value = i * (-1);
return (value);
}
else
return (i);
return (0);
}
