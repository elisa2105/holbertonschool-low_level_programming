#include "holberton.h"
/**
 * *_strspn -gets the length of a prefix substring.
 * @s: the address of memory area pointed
 * @accept: string
 * Return: a pointer to the memory area.
 */

unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int cont = 0;
for (i = 0; s[i] != '\0' ; i++)
{
for (j = 0; accept[j] != '\0' ; j++)
{
if (s[i] == accept[j])
{
cont++;
break;
}
}
if (s[i] != accept[j])
break;
}

return (cont);
}
