#include <stdio.h>
#include "main.h"

/**
* _strchr - finds char c within string s
*
* @s: obj. string
*
* @c: char thats searched
*
* Return: s beginning at c else 0 if not found
*/

char *_strchr(char *s, char c)
{
	while (*s++)
		if (*s == c)
		return (s);

	return (0);
}
