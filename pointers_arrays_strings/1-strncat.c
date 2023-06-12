#include <stdio.h>
#include "main.h"
/**
* _strncat - Concatenates 2 strings up to n bytes
*
* @dest: Pointer to the dest string
*
* @src: Pointer to the src string
*
* @n: Max # of bytes to be copied from src
*
* Return: Pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')
	dest_len++;

	while (src[i] != '\0' && i < n)
	{
	dest[dest_len] = src[i];
	dest_len++;
	i++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
