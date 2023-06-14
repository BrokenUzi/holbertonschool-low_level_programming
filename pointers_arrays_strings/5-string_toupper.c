#include <stdio.h>
#include "main.h"

/**
* string_toupper - mainipulates lower case characters of a string to upper case
*
* @s1: string 2 manipulate
*
* Return: string
*/

char *string_toupper(char *s1)
{
	int x;

	for (x = 0; s1[x] != '\0'; x++)

	if (s1[x] >= 'a' && s1[x] <= 'z')
	s1[x] = (s1[x] - 32);

	return (s1);
}
