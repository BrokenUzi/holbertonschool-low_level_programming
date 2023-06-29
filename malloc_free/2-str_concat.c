#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
*
*
*
*
*
*
*
*/

char *str_concat(char *s1, char *s2)
{
	char *dest;
	int a;
	int b;
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
	len2 = strlen(s2) + 1;

	dest = malloc(sizeof(char) * (len1 + len2));

	if (dest == 0)
	{
		return (NULL);
	}

	for (a = 0; a < len1; a++)
	{
		dest[a] = s1[a];
	}
	for (b = 0; b < len2; b++)
	{
		a++;
		dest[a] = s2[b];
	}
dest[a] = '\0';
return (dest);
}
