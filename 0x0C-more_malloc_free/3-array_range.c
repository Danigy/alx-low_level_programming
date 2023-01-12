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
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (NULL);
	while (i <= max - min)
		arr[i++] = l++;
	return (arr);
}
