#include "holberton.h"
/**
 * cap_string - changes all lowercase letters of a string to uppercase.
 * @s: char
 * Return: the string upper
 */
char *cap_string(char *s)
{
int count = 0;
for (; s[count] != '\0'; count++)
{
if (s[0] >= 97 && s[0] <= 122)
s[0] -= 32;
if (s[count - 1] == ' ' && (s[count] >= 97 && s[count] <= 122))
s[count] -= 32;
if (s[count - 1] == '.' && (s[count] >= 97 && s[count] <= 122))
s[count] -= 32;
if (s[count - 1] == '\n' && (s[count] >= 97 && s[count] <= 122))
s[count] -= 32;
if (s[count - 1] == '\t' && (s[count] >= 97 && s[count] <= 122))
s[count] -= 32;
}
return (s);
}
