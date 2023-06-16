#include <stdio.h>
#include "main.h"

/**
* is_prime_number - finds out if obj num is prime
*
* @n: obj value
*
* Return: 1 if prime. 0 if not prime
*/

int is_prime_number(int n)
{
	if (n % 2 != 0 || n % 3 != 0 || n > 1)
		return (1);
	else
		return (0);
}
