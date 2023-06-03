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
		_putchar('\n');
		return;
		}
	while (n > 0)
		{
		_putchar('_');
		(n--);
		}
}
