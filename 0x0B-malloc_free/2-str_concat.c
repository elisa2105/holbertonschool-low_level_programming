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
 * str_concat - prints the lenght of a string
 * @s1: string
 * @s2: string
 * Return:  length of a string.
*/
char *str_concat(char *s1, char *s2)
{
char *array;
int i = 0;
int j = 0;
int count = 0;
count = strlenmv(s1) + strlenmv(s2) + 1;
array = malloc(sizeof(char) * count);
if (array == NULL)
return (NULL);
for ( ; s1 && s1[i] != '\0'; i++)
{
array[j] = s1[i];
j++;
}
for (i = 0; s2 && s2[i] != '\0'; i++)
{
array[j] = s2[i];
j++;
}
array[j] = '\0';
return (array);
}
