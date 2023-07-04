#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - finds sum  supplied numbers
 * @n: length of arguments supplied after and til the end
 * Return: sum of supplied numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list supply;
	unsigned int x = 0;
	int plus = 0;
	int ro = 0;

	if (n == 0)
		return (0);

	va_start(supply, n);

	for (; x < n; x++)
	{
		ro = va_arg(supply, unsigned int);
		plus += ro;
	}

	va_end(supply);

	return (plus);
}
