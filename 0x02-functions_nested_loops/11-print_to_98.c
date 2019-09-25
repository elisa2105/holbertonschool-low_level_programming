#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - Entry point
* @n: integer
* Description: prints natural numbers n-98
*/
void print_to_98(int n)
{
int w;
if (n < 98)
{
for (w = n; w <= 98; w++)
{
printf("%d", w);
if (w == 98)
;
else
printf(", ");
}
putchar('\n');
}
else if (n > 98)
{
for (w = n; w >= 98 ; w--)
{
printf("%d", w);
if (w == 98)
;
else
printf(", ");
}
putchar('\n');
}
else
printf("98\n");
}

