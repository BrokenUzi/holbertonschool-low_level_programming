#include <stdio.h>
#include "main.h"

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

	dup = malloc(sizeof(char) * str);

	if (x = 0; x < str; x++)
	{
		dup[x] = str;
	}
	return (dup);
}	
