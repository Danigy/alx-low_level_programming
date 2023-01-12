#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for each arrays of nmemb elements
 * @nmemb: number of arrays
 * @size: bytes for each pointer in the array
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
