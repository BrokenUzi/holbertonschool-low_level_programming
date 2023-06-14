#include <stdio.h>
#include "main.h"
/**
* _strstr - func. that locates substring
*
* @haystack: longer string to search
*
* @needle: substring 2 look 4
*
* Return: pointer 2 beginning of located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
	s++;
	while (*haystack)
	{
	for (i = 0; needle[i]; i++)
		{
		if (haystack[i] != needle[i])
			break;
		}
	if (i != s)
	haystack++;
		else
		return (haystack);
	}
	return (NULL);
}
