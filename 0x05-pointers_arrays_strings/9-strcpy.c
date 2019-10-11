#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by src to the buffer
 * @dest: char
 * @src: char
 * Return: void
*/

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i]; i++)
dest[i] = src[i];
return (dest);
}
