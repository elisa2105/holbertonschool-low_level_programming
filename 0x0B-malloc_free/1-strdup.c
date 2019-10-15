#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: void
*/

char *_strdup(char *str)
{
int i = 0;
int s = 0;
char *array;
if (str == NULL)
return (NULL);
for ( ; str[i] != '\0'; i++)
{}
array = malloc(i + 1);
if (array == NULL)
return (NULL);
for ( ; s < i; s++)
array[s] = str[s];
array[s] = '\0';
return (array);
}
