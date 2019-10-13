#include "holberton.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: char
 * Return: the string upper
 */
char *string_toupper(char *s)
{
int count = 0;
for ( ; s[count] != '\0'; count++)
{
if (s[count] >= 'a' && s[count] <= 'z')
{
s[count] -= 32;
}
}
return (s);
}
