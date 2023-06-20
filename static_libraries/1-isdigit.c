#include <stdio.h>
#include "main.h"
/**
* _isdigit - checks if digit
*
* @c: checks for numbers
*
* Return: digit 1, if not 0
*
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
