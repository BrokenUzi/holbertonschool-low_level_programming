#include "search_algos.h"

/**
* linear_search - searches through the array for value.
* @array: array
* @size: size of array
* @value: value that is being looked for
* Return: index where & if value found, -1 if value not found/NULL array
*/

int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (!array || !size)
		return (-1);

	for (; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}

	return (-1);
}
