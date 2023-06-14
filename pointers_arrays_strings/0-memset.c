#include <stdio.h>
#include "main.h"
/**
* _memset - fills memory s until n is ready w/ b
*
* @s: memory chunk obj.
*
* @b: fill s with until n is ready
*
* @n: # of positions of s to fill with b
*
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	s[x] = b;

	return (s);
}
