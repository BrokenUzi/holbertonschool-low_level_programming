#include <stdio.h>
#include "main.h"
/**
* more_numbers - prints 10x the #'s
*
*
*
* Return: Always 0 bc void
*
*/
void more_numbers(void)
{

int n, x;

for (x = 0; x < 10; x++)
	{
	for (n = 0; n <= 14; n++)
		{
		if (n > 9)
			{
			_putchar('0' + n / 10);
			}
		_putchar('0' + n % 10);
		}
	_putchar('\n');
	}
}
