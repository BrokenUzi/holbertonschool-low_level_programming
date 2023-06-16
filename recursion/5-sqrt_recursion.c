#include <stdio.h>
#include "main.h"

int squareRoot(int x, int y);
int _sqrt_recursion(int n);

/**
* squareRoot - self xplainatory
*
* @x: Input value
*
* @y: If a sqrt exists recursion until square
*
* Return: y if square exists else -1 = error
*/

int squareRoot(int x, int y)
{
	if (x == (y * y))
		return (y);
	if (y == (x / 2))
		return (-1);
	return (squareRoot(x, (y + 1)));
}

/**
* _sqrt_recursion - func that returns natural sq root of a #
*
* @n: obj. #
*
* Return: 0
*/

int _sqrt_recursion(int n)
{
	int y = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (squareRoot(n, y));
}
