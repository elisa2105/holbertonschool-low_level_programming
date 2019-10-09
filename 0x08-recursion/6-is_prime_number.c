#include "holberton.h"
/**
 * _is_Prime - check if a number is prime
 * @n: int
 * @x: int
 * Return: void
*/

int _is_Prime(int n, int x)
{
int p = 0;
if (n == x)
return (1);
if (n % x == 0 || n <= 1)
return (0);
p = _is_Prime(n, x + 1);
return (p);
}

/**
 * is_prime_number - check if a number is prime
 * @n: int
 * Return: int
*/
int is_prime_number(int n)
{
int x= 0;
x = _is_Prime(n, 2);
return (x);
}
