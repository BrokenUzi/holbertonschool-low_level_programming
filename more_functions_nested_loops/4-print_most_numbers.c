#include <stdio.h>
#include "main.h"
/**
* print_most_numbers - self xplainatory
*
* @n: prints numbers and ignores 2 and 4
*
* Return: no value bc void
*
*/
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	if (n != 2 && n != 4)
		{
		_putchar('0' + n);
		}
	}

	_putchar('\n');
}
