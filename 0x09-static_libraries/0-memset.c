#include "holberton.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: the address of memory area pointed
 * @b: byte constant
 * @n: first bytes
 * Return: a pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
s[i] = b;

return (s);
}
