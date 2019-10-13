#include "holberton.h"
/**
 * _strncat - concatenates two strings.
 * @dest: destiny
 * @src: source
 * @n: int bytes
 * Return: a pointer to the memory area.
 */
char *_strncat(char *dest, char *src, int n)
{
int count = 0;
int s = 0;
for (; dest[s] != '\0'; s++)
{
continue;
}
for (; count < n && src[count] != '\0'; count++)
dest[s + count] = src[count];
dest[s + count] = '\0';
return (dest);
}
