#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstChar = 0;
int firstCharUpper = 0;
for (firstChar = 97 ; firstChar < 123 ; firstChar++)
putchar (firstChar);
for (firstCharUpper = 65 ; firstCharUpper < 91 ; firstCharUpper++)
putchar (firstCharUpper);
putchar ('\n');
return (0);
}
