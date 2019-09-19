#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last=0;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
printf("Last digit of %d is and is greater than 5", last);
if (last == 0)
printf("Last digit of %d is and is 0", last);
if (last < 6 && last != 0)
printf("Last digit of %d is less than 6 and not 0", last);
return (0);
}
