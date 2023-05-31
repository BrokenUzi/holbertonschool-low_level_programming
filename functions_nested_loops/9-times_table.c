#include <stdio.h>
#include "main.h"
/**
* times_table - multiples of 9 in a * table
*
* Return: 0
*
*/
void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	for (column = 0; column <= 9; column++)
	{
		result = row * column;
		if (column <= 9 && row <= 9)
		{
		printf("%d,  ", result);
		}
		else if (column > 9 && row > 9)
		{
		printf("%2d, ", result);
		}
		else if (column == 9)
		{
		printf("\n");
		}

	}
}
