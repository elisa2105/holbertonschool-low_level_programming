#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - function that sums diagonals.
 * @a: matrix 8*8
 * @size: size of matrix
 * Description:  function that prints the chessboard.
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i;
int sumaDiag1 = 0, sumaDiag2 = 0;

for (i = 0  ; i < (size * size) ; i = i + size + 1)
sumaDiag1 += a[i];

for (i = 0 ; i <= (size * size) - size ; i = i + size - 1)
sumaDiag2 += a[i];

printf("%d, %d\n", sumaDiag1, sumaDiag2);
}
