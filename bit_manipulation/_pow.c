#include "main.h"

/**
* _pow - calculates exponent of x to y recursively
* @x: number of which we calculate to the power of y
* @y: number to which x is raised exponentially
* Return: -1 if y is neg, 1 if y is 0, sum if y greater than 0, else 0
*/

int _pow(int x, int y)
{
        if (y < 0)
                return (-1);
        if (y == 0)
                return (1);
        if (y > 0)
                return (x * _pow(x, (y - 1)));
        return (0);
}
