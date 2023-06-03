#include <stdio.h>
#include "main.h"
/**
* print_line draws a straight line
*
* @n: how many times "_" will be printed
*
* Return: void
*/
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');  /* Print a newline and return if n is 0 or less */
		return;
	}

	while (n > 0)
	{
		_putchar('_');  /* Print the character '_' n times */
		n--;
	}

	_putchar('\n');  /* Print a newline at the end of the line */
}
