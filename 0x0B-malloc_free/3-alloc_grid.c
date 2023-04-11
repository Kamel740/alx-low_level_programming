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
	int **kamel;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	kamel = malloc(sizeof(int *) * height);
	if (kamel == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		kamel[x] = malloc(sizeof(int)*width);
		if (kamel[x] == NULL)
		{
			for (; x >= 0; x--)
				free(kamel[x]);
			free(kamel)
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)

			kamel[x][y] = 0;
	}
	return (kamel);
}
