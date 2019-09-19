#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstChar = 0;
for (firstChar = 48 ; firstChar < 58 ; firstChar++)
{
putchar (firstChar);
if (firstChar < 57)
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
