#include "holberton.h"
/**
 * _strncpy - copies a string.
 * @dest: destiny
 * @src: source
 * @n: int
 * Return: a pointer to the memory area.
 */
char *_strncpy(char *dest, char *src, int n)
{
int count = 0;
for ( ; count < n && src[count] != '\0'; count++)
dest[count] = src[count];
for ( ; count < n ; count++)
dest[count] = '\0';
return (dest);
}
