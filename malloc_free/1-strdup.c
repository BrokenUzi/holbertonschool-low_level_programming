#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* @str - string
*
*
*
* 
*/

char *_strdup(char *str)
{
	unsigned int x;
	char *dup;

	if (str == NULL)
		return (NULL);

	dup = malloc(strlen(str) + 1);

	if (dup == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
	{
		dup[x] = str[x];
	}
	return (dup);
}
