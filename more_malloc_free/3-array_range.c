#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
*
* @min: min of int
*
* @max: max of int
*
* Return: aoi (array of integers)
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

	for (; (x + min) <= max; x++)
	{
		aoi[x] = x + min;
	}

return (aoi);
}
