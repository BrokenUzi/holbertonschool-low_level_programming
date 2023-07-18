#include "main.h"

/**
* set_bit - sets bit at index of input to 1
* @input: object number
* @index: position within binary of input
* Return: 1 if success, -1 if error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
