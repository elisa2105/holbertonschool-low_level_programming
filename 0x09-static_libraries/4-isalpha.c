#include "holberton.h"
/**
 * _isalpha - Entry point.
 * @c: is the entry integer
 * Description: checks for lowercase or Uppercase character.
 * Return: 1 if c is between 96 and 123 or 64 and 91, 0 other case.
 */
int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
return (1);
else
return (0);
}
