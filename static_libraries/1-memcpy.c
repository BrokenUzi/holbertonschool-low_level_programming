#include <stdio.h>
#include "main.h"
#include <string.h>
/**
* _memcpy - function that copies memory area
*
* @dest: self xplainatory
*
* @src: src of memory
*
* @n: # of memory
*
* Return: copied the string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
		{
		dest[i] = src[i];
		i++;
		}
	return (dest);
}
