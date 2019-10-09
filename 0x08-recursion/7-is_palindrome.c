#include "holberton.h"
/**
 * is_palindrome - check if a string is palindrome
 * @s: char
 * Return: 1 if is pallindrome -1 if it is not.
*/

int is_palindrome(char *s)
{
int strlen = 0;
int count = 0;
int strlenby2;
if (*s == '\0')
return (1);
strlen = _str(s, strlen);
strlenby2 = strlen / 2;
strlen = _is_pal(s, strlen, count, strlenby2);
return (strlen);
}

/**
 * _str - prints the lenght of a string
 * @s: string
 * @strlen: int
 * Return:  length of a string.
*/

int _str(char *s, int strlen)
{
int count = 0;
if (*s == '\0')
return (strlen);
s++;
strlen++;
count =  _str(s, strlen);
return (count);
}
/**
 * _is_pal - check if is palindrome
 * @s: string
 * @strlen: int
 * @pos: int
 * @i: int
 * Return:  length of a string.
*/
int _is_pal(char *s, int strlen, int pos, int i)
{
int b = 0;
if (s[pos] != s[strlen - 1])
return (0);
if (pos == i)
return (1);
pos++;
strlen--;
b = _is_pal(s, strlen, pos, i);
return (b);
}
