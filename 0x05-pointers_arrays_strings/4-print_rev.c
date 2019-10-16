#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: char
 * Return: void
*/

void print_rev(char *s)
{
int i = 0;
for ( ; s[i] != '\0'; i++)
;
i -= 1;
for (; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
