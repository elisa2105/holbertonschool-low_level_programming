#include "holberton.h"
/**
 * _isupper - entry point
 * @c: Integer c
 * Description: checks for uppercase character.
 * Return: 1 if the character is uppercase 0 if otherwise.
 */
int _isupper(int c)
{
if (c > 64 && c < 91)
return (1);
else
return (0);
}
