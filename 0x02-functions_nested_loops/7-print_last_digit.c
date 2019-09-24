#include "holberton.h"
/**
 * print_last_digit - Entry point.
 * @i: is the entry integer
 * Description: prints the last digit of a number
 * Return: the value of the last digit.
 */
int print_last_digit(int i)
{
int value = i % 10;
if (value < 0)
{
_putchar((-1 * value) + 48);
return (-value);
}
else
{
_putchar(value + 48);
return (value);
}
}
