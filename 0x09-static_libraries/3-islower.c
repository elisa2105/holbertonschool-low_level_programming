#include "holberton.h"
/**
 * _islower - Entry point.
 * @c: is the entry integer
 * Description: checks for lowercase character.
 * Return: 1 if c is between 96 and 123, 0 other case.
 */
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
