#include "search_algos.h"

/**
* linear_search - searches through the array for value using linear search algo.
* @array: array
* @size: size of array
* @value: value that is being looked for
* Return: index where and if value found, -1 upon value not found or NULL array
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
