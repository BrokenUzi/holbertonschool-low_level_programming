#include "main.h"
#include "_pow.c"

/**
* binary_to_uint - converts binary input string to decimal
* @b: binary input
* Return: decimal equivalent, 0 if input is NULL or input contains non-digits
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int c = 0;
	int x = 0, y = 0;
	unsigned int d = 0;

	if (b == NULL)
		return (0);

	for (; b[x]; x++)
		;

	x--;

	for (; b[y]; y++)
	{
		if (!(b[y] == '0' || b[y] == '1'))
			return (0);
		c = (b[y] - 48) * _pow(2, x);
		d += c;
		x--;
	}

	return (taker);
}
