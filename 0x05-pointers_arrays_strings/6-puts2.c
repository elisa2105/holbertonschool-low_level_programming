#include "holberton.h"
/**
 * puts2- prints every other character of a string
 * @str: char
 * Return: void
*/

void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
i++;
}
_putchar('\n');
}
