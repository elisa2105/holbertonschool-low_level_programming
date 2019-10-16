#include "holberton.h"
/**
 * rot13 - encodes a string to rot13
 * @s: string to convert
 * Return: the string encoded
 */
char *rot13(char *s)
{
int i = 0;
int j;
char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (; s[i] != '\0' ; i++)
{
for (j = 0; str1[j] != '\0' ; j++)
{
if (s[i] == str1[j])
{
s[i] = str2[j];
break;
}
}
}
return (s);
}
