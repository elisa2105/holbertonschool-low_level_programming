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
int thirdChar = 0;
for (firstChar = 48 ; firstChar < 58 ; firstChar++)
{
for (secondChar = 48 ; secondChar < 58 ; secondChar++)
{
for (thirdChar = 48 ; thirdChar < 58 ; thirdChar++)
{
if (firstChar < secondChar && secondChar < thirdChar)
{
putchar(firstChar);
putchar(secondChar);
putchar(thirdChar);
if (firstChar == 55 && secondChar == 56 && thirdChar == 57)
;
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
