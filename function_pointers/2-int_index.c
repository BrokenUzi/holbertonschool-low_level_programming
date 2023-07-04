#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: self xplain
* @size: self xplain
* @cmp: pointer to func used to compare values
* Return: Nothing
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{

				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
