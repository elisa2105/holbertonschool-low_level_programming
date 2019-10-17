#include "holberton.h"
#include <stdio.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: the address of memory area pointed.
 * @accept: string
 * Return: a pointer to the memory area.
 */

char *_strpbrk(char *s, char *accept)
{
int i;
for (; *s != '\0'; s++)
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
return (s);
}
}
return (NULL);
}
