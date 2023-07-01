#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*
*
*
*
*
*
*/

int *array_range(int min, int max)
{

	int *aoi = 0;
	int x = 0;

	if (min > max)
	{
		return (NULL);
	}

	aoi = malloc(sizeof(int) * (max - min + 1));

	if (aoi == NULL)
	{
		return (NULL);
	}

	for (; x <= (max - min); x++)
	{
		x = aoi[x] - min;
	}

return (aoi);
}
