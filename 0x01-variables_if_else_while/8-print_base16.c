#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstChar = 48;
for (; firstChar < 58 ; firstChar++)
putchar (firstChar);
for (firstChar = 97; firstChar < 103; firstChar++)
putchar (firstChar);
putchar ('\n');
return (0);
}
