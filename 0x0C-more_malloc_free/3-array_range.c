#include "main.h"

/**
 * array_range - Create an arrays of integers
 * @min: Minimums
 * @max: Maximums
 * Return: Arrays
 */

int *array_range(int min, int max)
{
	int *arr, i=0, l=min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = l++;
	return (arr);
}
