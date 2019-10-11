#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s: char
 * Return: void
*/

void rev_string(char *s)
{
char *a = s;
char *b = s;
char x;
int i = 0;
int j = 0;
for ( ; s[i] != '\0'; i++)
;
for ( ; j < i - 1; j++)
b++;
for (j = 0; j < i / 2; j++)
{
x = *b;
*b = *a;
*a = x;
a++;
b--;
}
}
