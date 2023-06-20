#include <stdio.h>
#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * @dest: The string to be appended
 *
 * @src: the string to be sent 2 dest.
 *
 * @n: # of bytes from src to be sent 2 dest.
 *
 * Return: pointer 2 result of string dest.
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
		{
		dest_len++;
		}

	for (index = 0; src[index] && index < n; index++)
		{
		dest[dest_len++] = src[index];
		}
	return (dest);
}

