#include "holberton.h"
/**
 * jack_bauer - Entry point
 * Description: prints every minute of the day of jack Bauer 24 hours
 */
void jack_bauer(void)
{
int i;
int j;
for (i = 0 ; i < 24 ; i++)
{
for (j = 0 ; j < 60 ; j++)
{
_putchar((i / 10) + 48);
_putchar((i % 10) + 48);
_putchar(':');
_putchar((j / 10) + 48);
_putchar((j % 10) + 48);
_putchar('\n');
}
}
}
