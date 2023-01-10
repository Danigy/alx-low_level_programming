#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
        int **see;
        int x, y;

        if (width <= 0 || height <= 0)

                return (NULL);
        see = malloc(sizeof(int *) * height);

        if (see == NULL)

                return (NULL);

   for (x = 0; x < height; x++)
        {
                see[x] = malloc(sizeof(int) * width);

                if (see[x] == NULL)
                {
                        for (; x >= 0; x--)
                                free(see[x]);
                        free(see);

                        return (NULL);
                }
        }
        for (x = 0; x < height; x++)
        {
                for (y = 0; y < width; y++)
			see[x][y] = 0;
        }
        return (see);
}
