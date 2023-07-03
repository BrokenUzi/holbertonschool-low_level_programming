#include "function_pointers.h"

/**
* array_iterator - executes func given as parameter on each ele of a array
* @array: self xplain
* @size: self xplain
* @action: self xplain
* Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
