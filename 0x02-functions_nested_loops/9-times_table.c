#include "holberton.h"
/**
 * times_table - Entry point
 *
 * Description: prints 9 times table
 */
void times_table(void)
{
int i, j;
int result;

for (i = 0 ; i < 10 ; i++)
{
for (j = 0 ; j < 10 ; j++)
{
result = i * j;

if (result < 10 && j != 0)
{
_putchar(' ');
}
if (result > 9)
{
_putchar((result / 10) + 48);
_putchar((result % 10) + 48);
}
else
{
_putchar(result + 48);
}
if (j == 9)
{
_putchar('\n');
}
else
{
_putchar(',');
_putchar(' ');
}
}
}
}
