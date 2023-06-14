#include <stdio.h>
#include "main.h"

/**
* _strcmp - compares pointers to 2 strings.
*
* @s1: pointer to 1st sting
*
* @s2: pointer to 2nd string
*
* Return: str1 < str2 (the -# diff of the first unmatched char)
*/

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
		{
		s1++;
		s2++;
		}
	return (*s1 - *s2);
}
