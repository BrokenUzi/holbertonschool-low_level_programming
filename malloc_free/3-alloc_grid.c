#include <stdio.h>
#include "main.h"

/**
*
*
*
*
*
*
*/

int **alloc_grid(int width, int height)
{
	int **uzi = 0;
	int x = 0;
	int y = 0;

	uzi = malloc(sizeof(int *) * h);

	if ((width * height) < 1 || uzi == NULL)
		return (NULL);

	for (; y < h; y++)
	{
		uzi[y] = malloc(sizeof(int) * w);

		if (uzi[y] == NULL)
		{
			for (; y >= 0; y--)
				free(uzi[y]);

			free(uzi);

			return (NULL);
		}
	}

	for (; x < width; x++)
		for (; y < height; y++)
			uzi[x][y] = 0;

	return (uzi);
}
