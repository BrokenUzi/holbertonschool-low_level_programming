#include <stdio.h>
#include "main.h"
/**
* print_to_98 - #'s are printed to 98 from where n is
*
* @n: starting #
*
* Return: 0
*
*/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
		if (i != 98)
			{
			printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
			printf(", ");
			}
		}
	}
	printf("\n");
}
