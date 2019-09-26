#include <stdio.h>
/**
 * main - entry point
 * Description: prints 10 times the numbers from 0 to 14
 * Return: void
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");
else
{
if (i % 3 == 0)
printf("Fizz");
else
{
if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);
}
}
if (i != 100)
printf(" ");
}
printf("\n");
return (0);
}
