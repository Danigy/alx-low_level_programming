#include "main.h"

/**
 * array_range - Create an arrays of integers
 * @min: Minimums
 * @max: Maximums
 * Return: Arrays
 */

int *array_range(int min, int max)
{
	int i, l;
	int *arr;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	arr = malloc(sizeof(int) * l);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
