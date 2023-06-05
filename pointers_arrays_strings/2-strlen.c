#include <stdio.h>
#include "main.h"
/**
* _strlen - finds lenght of a string
*
* @s: Pointer to the string
*
* Return: Length of string
*
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}
