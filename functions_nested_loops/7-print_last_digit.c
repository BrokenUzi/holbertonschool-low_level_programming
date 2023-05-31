#include <stdio.h>
#include "main.h"
/**
* print_last_digit - self xplain
*
* @ldo: last digit output (int)
*
* Return: 0
*
*/
int print_last_digit(int ldo)
{
	int ld;

	ld = (ldo % 10);
	if (ld < 0)
	{
		ld = (ld * (-1));
	}
	_putchar(ld + '0');
	return (ld);
}
