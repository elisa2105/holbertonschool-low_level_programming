#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - comapre two strings
 * @haystack: string to compare
 * @needle: string to compare
 * Return: the found substring
 */
char *_strstr(char *haystack, char *needle)
{
int i;
char *p = NULL;
for (i = 0; haystack[i] != '\n'; i++)
{
if (haystack[i] == needle[0])
p = strcmpmv((haystack + i), needle);
if (p != NULL)
return (p);
}
return (NULL);
}
/**
 * strcmpmv - Compare two strings
 * @s1: string
 * @s2: string
 * Return: if they are not equal return null
 */
char *strcmpmv(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
if (s1[i] != s2[i])
{
return (NULL);
}
return (s1);
}
