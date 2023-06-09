#include <stdio.h>
#include "main.h"

/**
* _pow_recursion - returns val x raised 2 the y power
*
* @x: Obj. variable
*
* @y: Raised to the power of Y
*
* Return: 0
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
return (0);
}
