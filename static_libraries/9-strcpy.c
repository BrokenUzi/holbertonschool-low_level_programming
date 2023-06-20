#include <stdio.h>
#include "main.h"
/**
* _strcpy - cp string pointed to by src to dest.
*
* @dest: Pointer to the destination
*
* @src: Pointer to the string
*
* Return: Pointer to dest.
*
*/
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
	*ptr++ = *src++;

	*ptr = '\0';

	return (dest);
}
