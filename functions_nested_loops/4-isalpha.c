#include <stdio.h>
/**
* _isalpha - looks for alpha characters
*
* @c: character checks for (A-Z&a-z) (alpha characters)
*
* Return: alpha 1, if not 0
*
*/
int _isalpha(int c);
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
