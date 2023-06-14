#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* _strspn - func. that retrieves the length of prefixed substring
*
* @s1: obj string 1
*
* @s2: string to be compared to
*
* Return: bytes
*/
unsigned int _strspn(char *s1, char *s2)
{
	int i, j;
	int c = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
	if (s1[i] != 32)
		{
	for (j = 0; s2[j] != '\0'; j++)
		{
		if (s1[i] == s2[j])
			c++;
		}
		}
	else
	return (c);
	}
	return (c);
}
