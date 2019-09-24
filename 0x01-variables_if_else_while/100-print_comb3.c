#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstChar = 0;
int secondChar = 0;
int a;
a = 1;
for (firstChar = 48 ; firstChar < 58 ; firstChar++)
{
for (secondChar = 48 ; secondChar < 58 ; secondChar++)
{
if ((firstChar != secondChar) && (firstChar < secondChar) && a == 1)
{
putchar (firstChar);
putchar (secondChar);
}
else
a = 0;
if ((firstChar < 57 || secondChar < 57) && a == 1)
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
