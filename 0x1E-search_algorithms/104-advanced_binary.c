#include "search_algos.h"
/**
 * advanced_binary - searching for a value
 * @array: the array
 * @size: size of the array
 * @value: the value to be found
 * Return: the index of the value
 */
int advanced_binary(int *array, size_t size, int value)
{
size_t min = 0;
size_t max;
size -= 1;
max = size;

if (array == NULL)
return (-1);
if (size == 0)
{
disp(array, min, max);
if (array[size] == value)
return (size);
return (-1);
}
return (binasearch(array, max, min, size, value));
}

/**
 * binasearch -binary search
 * @array: the array
 * @max: the end
 * @min: the beginning
 * @size: the size
 * @value: the value to be found
 * Return: the index of the value
 */

int binasearch(int *array, size_t max, size_t min, size_t size, int value)
{
size_t middle = size / 2 + min;

disp(array, min, max);

if (array[middle] == value)
return (value);

if (array[middle] < value)
{
min = middle + 1;
size = max - min;
}
else if (array[middle] > value)
{
max = middle - 1;
size = max - min;
}
if (size == 0 && array[middle + 1] != value)
{
disp(array, min, max);
return (-1);
}
return (binasearch(array, max, min, size, value));
}

/**
 * disp - shows arrays
 * @array: the array
 * @mina: entry point
 * @maxa: the end
 * Return: nothing
 */

void disp(int *array, size_t mina, size_t maxa)
{
printf("Searching in array: ");
	while (mina < maxa)
	{
		printf("%d, ", array[mina]);
		maxa++;
	}
	printf("%d\n", array[mina]);
}
