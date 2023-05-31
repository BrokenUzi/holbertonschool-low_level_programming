#include <stdio.h>
#include "main.h"
/**
* print_last_digit - self xplain
*
* @n: last digit output (int)
*
* Return: 0
*
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
	last_digit = -last_digit;
	}

	putchar(last_digit + '0');

	return (last_digit);
}
