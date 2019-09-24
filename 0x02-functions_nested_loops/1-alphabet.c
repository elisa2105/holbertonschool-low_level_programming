#include "holberton.h"
/**
 * print_alphabet - Entry point
 * Description: prints the alphabet (lowercase)
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int character;
for (character = 97 ; character < 123 ; character++)
{
_putchar(character);
}
_putchar('\n');
}
