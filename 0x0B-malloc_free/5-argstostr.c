#include "holberton.h"
#include <stdlib.h>
/**
 * size - size of the string
 * @ac: int
 * @av: char
 * Return:  int
*/
int size(int ac, char **av)
{
int i = 0;
int j = 0;
int count = 0;
int s = 0;
for (; i < ac; i++)
{
for (; av[i][j] != '\0'; i++)
count++;
}
s = count + ac;
return (s);
}


/**
 * argstostr - concatenates all the arguments
 * @av: string
 * @ac: int
 * Return:  new string
*/
char *argstostr(int ac, char **av)
{
int s = 0;
int i = 0;
int j = 0;
int k = 0;
char *arr;
if (ac == 0 || av == NULL)
return (NULL);
s =  size(ac, av);
arr = malloc(s + 1);
for (; i < ac; i++, j++)
{
for (; av[i][k] != '\0'; j++, k++)
arr[j] = av[i][k];
arr[j] = '\n';
}
arr[j] = '\0';
return (arr);
}
