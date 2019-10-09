#include "holberton.h"
/**
 * factorial - prints the factorial of a number
 * @n: integer
 * Return: the factorial of a given number
*/

int factorial(int n)
{
int fac = 0;
int aux = 0;
if (n < 0)
return (-1);
if (n <= 1)
return (1);
aux = n;
n--;
fac = aux *factorial(n);
return (fac);
}
