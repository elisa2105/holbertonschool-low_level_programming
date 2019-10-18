#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strlenmv - prints the lenght of a string
 * @s: string
 * Return:  length of a string.
*/

int strlenmv(char *s)
{
int i =  0;
int count = 0;
for ( ; s && s[i]; i++)
count++;
return (count);
}

/**
 * string_nconcat - prints the lenght of a string
 * @s1: string
 * @s2: string
 * @n: unsigned int representing the n bytes of s2
 * Return:  length of a string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *array;
int i = 0;
int j = 0;
unsigned int k = 0;
j = strlenmv(s1) + n + 1;
array = malloc(sizeof(char) * j);
if (array == NULL)
return (NULL);
for ( ; s1 && s1[k] != '\0'; k++, i++)
array[i] = s1[k];
for (k = 0; s2 && k < n; k++, i++)
array[i] = s2[k];
array[i] = '\0';
return (array);
}
