#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory for an array, using malloc.
*
* @nmemb: number memory blocks
*
* @size: size of each memory block
*
* Return: dest
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *dest;
	unsigned int x;

	if (nmemb == 0)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	dest = malloc(nmemb * size);

	if (dest == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < (nmemb * size); x++)
	{
		dest[x] = 0;
	}

	return (dest);
}
