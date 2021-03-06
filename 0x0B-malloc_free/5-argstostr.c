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
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
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
int a = 0;
int b = 0;
int c;
char *arr;
if (ac == 0 || av == NULL)
return (NULL);
s =  size(ac, av);
arr = malloc(s + 1);
for (; a < ac; a++, b++)
{
for (c = 0; av[a][c] != '\0'; c++, b++)
arr[b] = av[a][c];
arr[b] = '\n';
}
arr[b] = '\0';
return (arr);
}
