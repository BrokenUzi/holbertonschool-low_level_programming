#include <stdio.h>
#include "main.h"

/**
* print_diagsums - prints 2nd array + size of s
*
* @a: obj. array
*
* @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = size - 1;
	int sumL = 0;
	int sumR = 0;

	while (x <= (size * size))
	{
	sumL = sumL + a[x];
	x = x + size + 1;
	}

	while (y < (size * size - 1))
	{
	sumR += a[y];
	y = y + size - 1;
	}

	printf("%i, %i\n", sumL, sumR);
}

