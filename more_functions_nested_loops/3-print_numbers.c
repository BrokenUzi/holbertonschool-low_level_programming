#include <stdio.h>
#include "main.h"
/**
*
*
*
*
*
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
