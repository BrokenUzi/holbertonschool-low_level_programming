#include <stdio.h>
#include "main.h"

/**
* _strncpy - copy string from src to dest to n bytes
*
* @dest: string dest
*
* @src: src string
*
* @n: # of bytes of src to be copied
*
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	while (x < n)
		{
		dest[x] = '\0';
		x++;
		}

	return (dest);
}
