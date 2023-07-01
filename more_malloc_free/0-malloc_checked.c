#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
*
* @b:
*
* Return: Pointer
*/

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}

	return (x);
}	
