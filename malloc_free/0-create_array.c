#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array
*
* @c: integer
*
* @size: size of reserved space
*
* Return: 0
*/

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *boss;

	if (size == 0)
		return (NULL);

	boss = malloc(sizeof(char) * size);

	if (boss == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		boss[x] = c;
	}
	return (boss);
}
