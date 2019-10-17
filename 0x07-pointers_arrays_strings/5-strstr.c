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
if (haystack == NULL || needle == NULL)
return (NULL);
if (*needle == '\0')
return (haystack);
for (; *haystack != '\0'; haystack++)
{
if (*haystack == needle[0])
{
if (strcmpmv(haystack, needle))
return (haystack);
}
}
return (NULL);
}
/**
 * strcmpmv - Compare two strings
 * @s1: string
 * @s2: string
 * Return: if they are not equal return null
 */
int strcmpmv(char *s1, char *s2)
{
int i = 0;
int s = 0;
for (; s2[s] != '\0'; s++)
;
for (; i < s; i++)
{
if (s1[i] != s2[i])
return (0);
}
return (1);
}
