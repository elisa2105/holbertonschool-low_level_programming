#include "holberton.h"
/**
 * strcat - concatenates two strings.
 * @dest: destiny
 * @src: source
 * Return: a pointer to the memory area.
 */
char *_strcat(char *dest, char *src)
{
int count = 0;
int s = 0;
while (dest[s] != '\0')
{
s++;
}
while (src[count] != '\0')
{
dest[s + count] = src[count];
count++;
}
dest[s + count] = '\0';
return (dest);
}
