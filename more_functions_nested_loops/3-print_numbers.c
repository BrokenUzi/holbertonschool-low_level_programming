#include <stdio.h>
#include "main.h"
/**
* print_numbers - prints #'s 0-9
*
* Return: 0
*
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9;)
	{
	putchar('0' + i);
	(i++);
	}
	putchar('\n');
}
