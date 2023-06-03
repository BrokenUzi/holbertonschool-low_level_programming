#include <stdio.h>
#include "main.h"
/**
* print_diagonal - Prints a diagonal line
*
* @n: # of times the character '\' will be printed.
*
* Return: void
*
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		{
		_putchar('\n');
		return;
		}

	for (i = 0; i < n; i++)
		{
		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
		}
}
