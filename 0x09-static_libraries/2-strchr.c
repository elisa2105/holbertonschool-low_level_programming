#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: the address of memory area pointed
 * @c: character
 * Return: a pointer to the first ocurrence of c or null if it is not found
 */
char *_strchr(char *s, char c)
{
for (; *s != '\0'; s++)
{
if (*s == c)
return (s);
}
if (*s == c)
return (s);
return (NULL);
}

