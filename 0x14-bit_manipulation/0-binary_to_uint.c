#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: converted number, or 0 if char different from 0 or 1 or b null
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0;
if (b == NULL)
return (0);
for (; *b != '\0'; b++)
{
if (*b == '1')
i = (i * 2) + 1;
else if (*b == '0')
i *= 2;
else
return (0);
}
return (i);
}
