#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* string_nconcat - concatenates two strings
*
* @s1: string 1
*
* @s2: string 2
*
* @n: # of chars that s2 will print
*
* Return: dest
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	int a;
	unsigned int b;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = (n + 1);

	dest = malloc(sizeof(char) * (len1 + len2));

	if (dest == 0)
	{
		return (NULL);
	}

	for (a = 0; a < len1; a++)
	{
		dest[a] = s1[a];
	}
	for (b = 0; b < n; b++, a++)
	{
		dest[a] = s2[b];
	}
dest[a] = '\0';
return (dest);
}
