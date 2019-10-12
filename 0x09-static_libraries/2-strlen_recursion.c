#include "holberton.h"
/**
 * _strlen_recursion - prints the lenght of a string
 * @s: string
 * Return:  length of a string.
*/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != 0)
	{	s++;
		count = 1 + _strlen_recursion(s);
		return (count);
	}
return (0);
}
