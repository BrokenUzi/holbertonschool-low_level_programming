#include <stdio.h>
/**
* times_table - multiples of 9 in a * table
*
* Return: 0
*
*/
void times_table(void)
{
int i, j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
		{
		printf("%2d x %2d = %2d\n", i, j, i * j);
		}
	printf("\n");
	}
}
