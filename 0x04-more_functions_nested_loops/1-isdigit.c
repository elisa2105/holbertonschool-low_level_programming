#include "holberton.h"
/**
 * _isdigit - entry point
 * @c: Integer c
 * Description: checks if the character is digit
 * Return: 1 if the character is digit 0 if otherwise.
 */
int _isdigit(int c)
{
if (c > 47 && c < 59)
return (1);
else
return (0);
}

