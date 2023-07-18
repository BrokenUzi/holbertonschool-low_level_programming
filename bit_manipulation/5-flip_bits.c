#include "main.h"

/**
* flip_bits - returns number of bits that must be toggled until orig = dest
* @n: input number from which bits to be modified
* @m: desired result once bits have been toggled
* Return: number of bits to toggle
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int sum = 0;

	for (; x > 0;)
		sum += (x & 1), x >>= 1;

	return (sum);
}
