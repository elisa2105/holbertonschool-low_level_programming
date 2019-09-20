#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int firstChar = 0;
int secondChar = 0;
int flap = 0;
for (firstChar = 48 ; firstChar < 58 ; firstChar++)
{
for (secondChar = 48 ; secondChar < 58 ; secondChar++)
{
if (firstChar != secondChar && firstChar < secondChar)
{
putchar(firstChar);
putchar(secondChar);
flap = 0;
}
else
flap = 1;
if ((firstChar < 57 || secondChar < 57) && flap == 0)
{
if (firstChar == 56 && secondChar == 57)
;
else
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
