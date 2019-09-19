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
for (firstChar = 48 ; firstChar < 58 ; firstChar++)
{
for (secondChar = 48 ; secondChar < 58 ; secondChar++)
{
putchar (firstChar);
putchar (secondChar);
if (firstChar < 57 || secondChar < 57)
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
