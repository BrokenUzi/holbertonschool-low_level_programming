#include <stdio.h>
/**
* _islower - checks each letter case sensitive
*
* @c: checks letters for cases
*
* Return: lower 1, if not 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
