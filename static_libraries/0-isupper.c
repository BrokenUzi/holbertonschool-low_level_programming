#include <stdio.h>
#include "main.h"

/**
* _isupper - checks each letter case sensitive
*
* @c: checks letters for cases
*
* Return: lower 1, if not 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
