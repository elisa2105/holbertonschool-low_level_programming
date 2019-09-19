#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstChar = 97;
for (; firstChar < 123 ; firstChar++)
{
if (firstChar == 101 || firstChar == 113)
;
else
putchar (firstChar);
}
putchar ('\n');
return (0);
}
