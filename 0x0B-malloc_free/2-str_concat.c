#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strlen_recursion - prints the lenght of a string
 * @s: string
 * Return:  length of a string.
*/

int strlen_recursion(char *s)
{
int count = 0;

if (*s != 0)
{s++;
count = 1 + _strlen_recursion(s);
return (count);
}
return (0);
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
count = strlen_recursion(s1) + strlen_recursion(s2) + 1;
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
