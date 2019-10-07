#include "holberton.h"
/**
 * *_memcpy - fills memory with a constant byte
 * @dest: destiny
 * @src: source
 * @n: first bytes
 * Return: a pointer to the memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
dest[i] = src[i];

return (dest);

}
