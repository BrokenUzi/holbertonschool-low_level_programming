#include <stdio.h>
#include "5-main.c"
/*
* print_sign - xplains if # is +/-/0
*
* @n - checks #'s if +/-/0
*
*Return - alpha 1, if not 0
*
*/

int print_sign(int n)
{
if (n > 0)
	{
	_putchar('+');
        return (1);
	}
else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
else
	{
	_putchar('-');
	return (-1);
	}
}
