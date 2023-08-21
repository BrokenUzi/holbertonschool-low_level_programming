#include "search_algos.h"

/**
* binary_search - search array for value using binary search algorithm
* @array: array
* @size: size of array
* @value: value to be searched for within array
* Return: index where/if value found & -1 upon value not found/NULL array
*/

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = 0, m = 0;

	if (!array || !size)
		return (-1);

	for (l = 0, r = size - 1;
	     l <= r;)
	{
		printf("Searching in array: ");
		print_array(&array[l], (r - l + 1));

		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);

	}
	return (-1);
}

/**
* print_array - prints integer array
* @array: array
* @size: size of array
*/

void print_array(const int *array, size_t size)
{
	size_t x = 0;

	for (x = 0; array && x < size; ++x)
	{
		if (x > 0)
			printf(", ");
		printf("%d", array[x]);
	}
	printf("\n");
}
