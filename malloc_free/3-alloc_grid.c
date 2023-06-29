#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
*
* @width: self xplain
*
* @height: self xplain
*
* Return: uzi
*/

int **alloc_grid(int width, int height)
{
	int **uzi = 0;
	int x = 0;
	int y = 0;

	uzi = malloc(sizeof(int *) * height);

	if ((width * height) < 1 || uzi == NULL)
		return (NULL);

	for (; y < height; y++)
	{
		uzi[y] = malloc(sizeof(int) * width);

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
