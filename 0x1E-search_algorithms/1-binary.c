#include "search_algos.h"

/**
 * display - print every subarray
 * @array : A vector is a one-dimensional array
 * @left : left index
 * @right : right index
 * Return: none
 */
void display(int *array, int left, int right)
{
	printf("Searching in array: ");
	for (; left <= right; left++)
	{
		if (left == right)
		{
			printf("%d", array[left]);
		}
		else
		{
			printf("%d, ", array[left]);
		}
	}
	printf("\n");
}

/**
 * binary_search - searches a value using binary search
 * @array : the array
 * @size : size
 * @value : value to find
 * Return: the first index
 */
int binary_search(int *array, size_t size, int value)
{
	int left;
	int right;
	int middle;

	if (array == NULL)
		return (-1);

	left = 0;
	right = (int)size - 1;

	while (left <= right)
	{
		display(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
