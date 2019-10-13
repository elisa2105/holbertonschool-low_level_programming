#include "holberton.h"
/**
 * _strcmp - compares two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
int s = 0;
for ( ; s1[s] != '\0'; s++)
{
if (s1[s] != s2[s])
return (s1[s] - s2[s]);
}
return (0);
}
