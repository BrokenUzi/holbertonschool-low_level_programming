#include <stdio.h>
#include "main.h"
/**
* times_table - multiples of 9 in a * table
*
* Return: 0
*
* *Still havent figured this one out*
*
*/
void times_table(void)
{
	int row, column;
	int e;

	for (row = 0; row <= 9; row++)
	for (column = 0; column <= 9; column++)
	{
	e = row * column;
		if (column >= 0 && column <= 9)
		{
			if (e > 9)
			{
			printf("%d, ", e);
			}
			else if (e < 9)
			{
			printf("%d,  ", e);
			}
			else if (column == 9)
			{
			printf("%d\n", e);
			}
		}
	}
}
